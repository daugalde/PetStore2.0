#pragma once
#include "Treatment.h"

namespace PetStore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TreatmentManagement
	/// </summary>
	public ref class TreatmentManagement : public System::Windows::Forms::Form
	{
	public:
		TreatmentManagement(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Form^ obj;
		AppManager* app;
		int currentType = 0;
		int currentAction = 0;
		TreatmentManagement(Form^ obj1, AppManager* app, int action)
		{
			obj = obj1;
			this->app = app;
			this->currentAction = action;
			InitializeComponent();
			string res = "";
			switch (action)
			{
			case INSERT_ACTION:
				this->actionBtn->Text = "Insertar";
				this->titleLbl->Text = "Insertar Tratamiento";
				this->labelId1->Text = "Id de Tratamiento";
				this->labelName1->Text = "Nombre Tratamiento";
				this->labelName2->Text = "Precio Unitario";
				this->labelName3->Text = "Cantidad";
				break;
			case SEARCH_ACTION:
				this->actionBtn->Text = "Buscar";
				this->titleLbl->Text = "Buscar Tratamiento";
				this->labelId1->Text = "Id de Tratamiento";
				this->labelName1->Hide();
				this->labelName2->Hide();
				this->labelName3->Hide();
				this->nameTextBox1->Hide();
				this->nameTextBox2->Hide();
				this->nameTextBox3->Hide();
				break;
			case UPDATE_ACTION:
				this->actionBtn->Text = "Modificar";
				this->titleLbl->Text = "Modificar Tratamiento";
				this->labelId1->Text = "Id de Tratamiento";
				this->labelName2->Text = "Precio Unitario";
				this->labelName1->Hide();
				this->labelName3->Hide();
				this->nameTextBox1->Hide();
				this->nameTextBox3->Hide();
				break;
			default:
				break;
			}
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TreatmentManagement()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ labelName3;
	private: System::Windows::Forms::TextBox^ nameTextBox3;
	private: System::Windows::Forms::TextBox^ nameTextBox2;
	private: System::Windows::Forms::Label^ labelName2;
	private: System::Windows::Forms::TextBox^ nameTextBox1;
	private: System::Windows::Forms::TextBox^ idTextBox1;
	private: System::Windows::Forms::Label^ labelName1;
	private: System::Windows::Forms::Label^ labelId1;
	private: System::Windows::Forms::Button^ actionBtn;
	private: System::Windows::Forms::Label^ resultLbl;
	private: System::Windows::Forms::TextBox^ viewer;
	private: System::Windows::Forms::Label^ titleLbl;

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
			this->nameTextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->labelName2 = (gcnew System::Windows::Forms::Label());
			this->nameTextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->idTextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->labelName1 = (gcnew System::Windows::Forms::Label());
			this->labelId1 = (gcnew System::Windows::Forms::Label());
			this->actionBtn = (gcnew System::Windows::Forms::Button());
			this->resultLbl = (gcnew System::Windows::Forms::Label());
			this->viewer = (gcnew System::Windows::Forms::TextBox());
			this->titleLbl = (gcnew System::Windows::Forms::Label());
			this->nameTextBox3 = (gcnew System::Windows::Forms::TextBox());
			this->labelName3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// nameTextBox2
			// 
			this->nameTextBox2->Location = System::Drawing::Point(419, 484);
			this->nameTextBox2->Name = L"nameTextBox2";
			this->nameTextBox2->Size = System::Drawing::Size(221, 31);
			this->nameTextBox2->TabIndex = 64;
			// 
			// labelName2
			// 
			this->labelName2->AutoSize = true;
			this->labelName2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelName2->Location = System::Drawing::Point(100, 482);
			this->labelName2->Name = L"labelName2";
			this->labelName2->Size = System::Drawing::Size(167, 31);
			this->labelName2->TabIndex = 67;
			this->labelName2->Text = L"LabelName2";
			// 
			// nameTextBox1
			// 
			this->nameTextBox1->Location = System::Drawing::Point(419, 410);
			this->nameTextBox1->Name = L"nameTextBox1";
			this->nameTextBox1->Size = System::Drawing::Size(221, 31);
			this->nameTextBox1->TabIndex = 59;
			// 
			// idTextBox1
			// 
			this->idTextBox1->Location = System::Drawing::Point(419, 343);
			this->idTextBox1->Name = L"idTextBox1";
			this->idTextBox1->Size = System::Drawing::Size(221, 31);
			this->idTextBox1->TabIndex = 60;
			// 
			// labelName1
			// 
			this->labelName1->AutoSize = true;
			this->labelName1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelName1->Location = System::Drawing::Point(100, 410);
			this->labelName1->Name = L"labelName1";
			this->labelName1->Size = System::Drawing::Size(167, 31);
			this->labelName1->TabIndex = 58;
			this->labelName1->Text = L"LabelName1";
			// 
			// labelId1
			// 
			this->labelId1->AutoSize = true;
			this->labelId1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelId1->Location = System::Drawing::Point(100, 341);
			this->labelId1->Name = L"labelId1";
			this->labelId1->Size = System::Drawing::Size(118, 31);
			this->labelId1->TabIndex = 57;
			this->labelId1->Text = L"LabelId1";
			// 
			// actionBtn
			// 
			this->actionBtn->Location = System::Drawing::Point(969, 857);
			this->actionBtn->Name = L"actionBtn";
			this->actionBtn->Size = System::Drawing::Size(221, 84);
			this->actionBtn->TabIndex = 76;
			this->actionBtn->Text = L"Action";
			this->actionBtn->UseVisualStyleBackColor = true;
			this->actionBtn->Click += gcnew System::EventHandler(this, &TreatmentManagement::actionBtn_Click);
			// 
			// resultLbl
			// 
			this->resultLbl->AutoSize = true;
			this->resultLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->resultLbl->Location = System::Drawing::Point(1039, 221);
			this->resultLbl->Name = L"resultLbl";
			this->resultLbl->Size = System::Drawing::Size(151, 31);
			this->resultLbl->TabIndex = 56;
			this->resultLbl->Text = L"Resultados";
			// 
			// viewer
			// 
			this->viewer->Location = System::Drawing::Point(744, 277);
			this->viewer->Multiline = true;
			this->viewer->Name = L"viewer";
			this->viewer->Size = System::Drawing::Size(774, 564);
			this->viewer->TabIndex = 55;
			// 
			// titleLbl
			// 
			this->titleLbl->AutoSize = true;
			this->titleLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.875F));
			this->titleLbl->Location = System::Drawing::Point(1053, 27);
			this->titleLbl->Name = L"titleLbl";
			this->titleLbl->Size = System::Drawing::Size(83, 39);
			this->titleLbl->TabIndex = 54;
			this->titleLbl->Text = L"Title";
			this->titleLbl->UseMnemonic = false;
			// 
			// nameTextBox3
			// 
			this->nameTextBox3->Location = System::Drawing::Point(419, 552);
			this->nameTextBox3->Name = L"nameTextBox3";
			this->nameTextBox3->Size = System::Drawing::Size(221, 31);
			this->nameTextBox3->TabIndex = 77;
			// 
			// labelName3
			// 
			this->labelName3->AutoSize = true;
			this->labelName3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelName3->Location = System::Drawing::Point(100, 550);
			this->labelName3->Name = L"labelName3";
			this->labelName3->Size = System::Drawing::Size(167, 31);
			this->labelName3->TabIndex = 78;
			this->labelName3->Text = L"LabelName3";
			// 
			// TreatmentManagement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(1894, 1009);
			this->Controls->Add(this->nameTextBox3);
			this->Controls->Add(this->labelName3);
			this->Controls->Add(this->nameTextBox2);
			this->Controls->Add(this->labelName2);
			this->Controls->Add(this->nameTextBox1);
			this->Controls->Add(this->idTextBox1);
			this->Controls->Add(this->labelName1);
			this->Controls->Add(this->labelId1);
			this->Controls->Add(this->actionBtn);
			this->Controls->Add(this->resultLbl);
			this->Controls->Add(this->viewer);
			this->Controls->Add(this->titleLbl);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1920, 1080);
			this->MinimumSize = System::Drawing::Size(1920, 1080);
			this->Name = L"TreatmentManagement";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TreatmentManagement";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TreatmentManagement::TreatmentManagement_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TreatmentManagement_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		obj->Show();
	}
	private: System::Void actionBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		string res = "";
		Treatment* treatment = NULL;
		bool successAction = false;
		float totalDue = 0.00;
		int id = -1;
		int id2 = -1;
		switch (this->currentAction)
		{
		case INSERT_ACTION:
			try
			{
				totalDue = (float)(Convert::ToDouble(this->nameTextBox2->Text));
				if (System::Int32::TryParse(this->idTextBox1->Text, id) && id > 0 &&
					!System::String::IsNullOrEmpty(this->nameTextBox1->Text) &&
					totalDue >= 0 &&
					System::Int32::TryParse(this->nameTextBox3->Text, id2) && id2 > 0 )
				{
					Treatment* treament = new Treatment(id, msclr::interop::marshal_as<string>(this->nameTextBox1->Text),
						totalDue, id2);
					
					if (treatment == NULL )
					{
						this->app->getStore().GetTreatments()->RBInsert(treament);

						treatment = static_cast<Treatment*>(this->app->getStore().GetTreatments()->SearchById(id));
						if (treatment != NULL)
						{
							res = "Se Inserto Tratamiento";
							this->viewer->Text = gcnew String((res.append(treatment->ToString())).c_str());
						}
						else {
							this->viewer->Text = "Error Insertar Tratamiento ya Existe o Id no es valido o algun dato no es valido";
						}
					}
					else {
						this->viewer->Text = "Tratamiento ya Existe o Id no es valido o algun dato no es valido";
					}
				}
				else {
					this->viewer->Text = "Los Datos Ingresados no son validos";
				}

			}
			catch (...)
			{
				this->viewer->Text = "Los Datos Ingresados no son validos";
			}
			this->idTextBox1->Text = "";
			this->nameTextBox1->Text = "";
			this->nameTextBox2->Text = "";
			this->nameTextBox3->Text = "";
			break;
		case SEARCH_ACTION:
			try
			{
				if (System::Int32::TryParse(this->idTextBox1->Text, id) && id > 0 )
				{
					treatment = static_cast<Treatment*>(this->app->getStore().GetTreatments()->SearchById(id));

					if (treatment != NULL)
					{
						res = "Se Encontro Tratamiento";
						this->viewer->Text = gcnew String((res.append(treatment->ToString())).c_str());
					}
					else {
						this->viewer->Text = "Tratamiento No Existe o Id no es valido o algun dato no es valido";
					}
				}
				else {
					this->viewer->Text = "Los Datos Ingresados no son validos";
				}

			}
			catch (...)
			{
				this->viewer->Text = "Los Datos Ingresados no son validos";
			}
			this->idTextBox1->Text = "";
			this->nameTextBox1->Text = "";
			this->nameTextBox2->Text = "";
			break;
		case UPDATE_ACTION:
			try
			{
				totalDue = (float)(Convert::ToDouble(this->nameTextBox2->Text));
				if (System::Int32::TryParse(this->idTextBox1->Text, id) && id > 0 &&
					totalDue >= 0 )
				{
					Treatment* treament = static_cast<Treatment*>(this->app->getStore().GetTreatments()->SearchById(id));

					if (treatment == NULL)
					{
						treament->setPrice(totalDue);
						this->app->getStore().GetTreatments()->UpdateElementById(id, treament);

						treatment = static_cast<Treatment*>(this->app->getStore().GetTreatments()->SearchById(id));
						if (treatment != NULL)
						{
							res = "Se Modifico Tratamiento";
							this->viewer->Text = gcnew String((res.append(treatment->ToString())).c_str());
						}
						else {
							this->viewer->Text = "Error al Modificar Tratamiento algun dato no es valido";
						}
					}
					else {
						this->viewer->Text = "Tratamiento Id no es valido o algun dato no es valido";
					}
				}
				else {
					this->viewer->Text = "Los Datos Ingresados no son validos";
				}

			}
			catch (...)
			{
				this->viewer->Text = "Los Datos Ingresados no son validos";
			}
			this->idTextBox1->Text = "";
			this->nameTextBox1->Text = "";
			this->nameTextBox2->Text = "";
			this->nameTextBox3->Text = "";
			break;
		default:
			break;
		}
	}
	};
}
