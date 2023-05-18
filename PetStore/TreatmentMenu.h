#pragma once
#include "AppManager.h"

namespace PetStore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TreatmentMenu
	/// </summary>
	public ref class TreatmentMenu : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		AppManager* app;
	private: System::Windows::Forms::TextBox^ viewer;
	public:

	public:
		List* medList;
		TreatmentMenu(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		TreatmentMenu(Form^ obj1, AppManager* app, List* medList)
		{
			this->obj = obj1;
			this->app = app;
			this->medList = medList;
			InitializeComponent();
			string result = "";
			this->app->getStore().GetTreatments()->inorder(result);
			this->viewer->Text = gcnew String((result).c_str());
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TreatmentMenu()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ treatmentLabel;
	private: System::Windows::Forms::TextBox^ treatmentIdTextbox;
	private: System::Windows::Forms::Label^ quantityLabel;
	private: System::Windows::Forms::TextBox^ quantityTextbox;
	private: System::Windows::Forms::Button^ addTreatmentBtn;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->treatmentLabel = (gcnew System::Windows::Forms::Label());
			this->treatmentIdTextbox = (gcnew System::Windows::Forms::TextBox());
			this->quantityLabel = (gcnew System::Windows::Forms::Label());
			this->quantityTextbox = (gcnew System::Windows::Forms::TextBox());
			this->addTreatmentBtn = (gcnew System::Windows::Forms::Button());
			this->viewer = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->label1->Location = System::Drawing::Point(60, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(344, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Tratatamientos Disponibles";
			// 
			// treatmentLabel
			// 
			this->treatmentLabel->AutoSize = true;
			this->treatmentLabel->Location = System::Drawing::Point(687, 91);
			this->treatmentLabel->Name = L"treatmentLabel";
			this->treatmentLabel->Size = System::Drawing::Size(149, 25);
			this->treatmentLabel->TabIndex = 2;
			this->treatmentLabel->Text = L"Id Tratamiento";
			// 
			// treatmentIdTextbox
			// 
			this->treatmentIdTextbox->Location = System::Drawing::Point(908, 88);
			this->treatmentIdTextbox->Name = L"treatmentIdTextbox";
			this->treatmentIdTextbox->Size = System::Drawing::Size(176, 31);
			this->treatmentIdTextbox->TabIndex = 3;
			// 
			// quantityLabel
			// 
			this->quantityLabel->AutoSize = true;
			this->quantityLabel->Location = System::Drawing::Point(687, 140);
			this->quantityLabel->Name = L"quantityLabel";
			this->quantityLabel->Size = System::Drawing::Size(196, 25);
			this->quantityLabel->TabIndex = 4;
			this->quantityLabel->Text = L"Cantidad Recetada";
			// 
			// quantityTextbox
			// 
			this->quantityTextbox->Location = System::Drawing::Point(908, 140);
			this->quantityTextbox->Name = L"quantityTextbox";
			this->quantityTextbox->Size = System::Drawing::Size(176, 31);
			this->quantityTextbox->TabIndex = 5;
			// 
			// addTreatmentBtn
			// 
			this->addTreatmentBtn->Location = System::Drawing::Point(908, 233);
			this->addTreatmentBtn->Name = L"addTreatmentBtn";
			this->addTreatmentBtn->Size = System::Drawing::Size(176, 69);
			this->addTreatmentBtn->TabIndex = 6;
			this->addTreatmentBtn->Text = L"Agregar Tratamiento";
			this->addTreatmentBtn->UseVisualStyleBackColor = true;
			this->addTreatmentBtn->Click += gcnew System::EventHandler(this, &TreatmentMenu::addTreatmentBtn_Click);
			// 
			// viewer
			// 
			this->viewer->Location = System::Drawing::Point(66, 88);
			this->viewer->Multiline = true;
			this->viewer->Name = L"viewer";
			this->viewer->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->viewer->Size = System::Drawing::Size(600, 372);
			this->viewer->TabIndex = 56;
			// 
			// TreatmentMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(1134, 529);
			this->Controls->Add(this->viewer);
			this->Controls->Add(this->addTreatmentBtn);
			this->Controls->Add(this->quantityTextbox);
			this->Controls->Add(this->quantityLabel);
			this->Controls->Add(this->treatmentIdTextbox);
			this->Controls->Add(this->treatmentLabel);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1160, 600);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(1160, 600);
			this->Name = L"TreatmentMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"TreatmentMenu";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TreatmentMenu::TreatmentMenu_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void addTreatmentBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		
		int treatmentId = -1;
		int qty = -1;
		int newStockQty = 0;
		try
		{
			if (System::Int32::TryParse(this->treatmentIdTextbox->Text, treatmentId) && treatmentId > 0 &&
				System::Int32::TryParse(this->quantityTextbox->Text, qty) && qty > 0
				)
			{
				Treatment* treatment = static_cast<Treatment*>(this->app->getStore().GetTreatments()->SearchById(treatmentId));
				if (treatment != NULL && treatment->getStockQuantity() > qty)
				{
					Treatment* newTreatment = new Treatment(treatmentId, treatment->getName(), treatment->getPrice() * qty, qty);
					this->medList->Push(newTreatment);
					String^ s = gcnew String((newTreatment->ToString()).c_str());
					MessageBox::Show(s, "Tratamiento Agregado", MessageBoxButtons::OK);
					this->Close();
				}
				else {
					String^ s = "Error La cantidad solicitada para el tratamiento es mayor al stock disponible";
					MessageBox::Show(s,"Error", MessageBoxButtons::OK);
				}
			}
			else {
				String^ s = "Error Algun Dato no es valido, cantidad mayor que cero o un Id valido";
				MessageBox::Show(s, "Error", MessageBoxButtons::OK);
			}
		}
		catch (...)
		{
			String^ s = "Error Algun Dato no es valido";
			MessageBox::Show(s, "Error", MessageBoxButtons::OK);
		}

	}
	private: System::Void TreatmentMenu_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		obj->Enabled = true;
	}
	};
}
