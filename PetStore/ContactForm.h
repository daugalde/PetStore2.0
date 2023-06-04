#pragma once
#include "AppManager.h"
#include "Contact.h"
#include "Constants.h"

namespace PetStore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ContactForm
	/// </summary>
	public ref class ContactForm : public System::Windows::Forms::Form
	{
	public:
		ContactForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Form^ obj;
		AppManager* app;
		int type;
		ContactForm(Form^ obj1, AppManager* app, int type)
		{
			this->obj = obj1;
			this->app = app;
			this->type = type;
			InitializeComponent();

			switch (type)
			{
			case INSERT_ACTION:
				this->actionBtn->Text = "Agregar Contacto";
				this->titleLbl->Text = "Insertar Contacto";
				this->labelId1->Text = "Nombre Cliente";
				this->labelName1->Text = "Correo ";
				this->labelId2->Text = "Telefono";
				this->dogLabel->Hide();
				break;
			case DISPLAY_ACTION:
				this->actionBtn->Text = "Mostrar Contactos";
				this->titleLbl->Text = "Mostrar Contacto";
				this->labelId1->Hide();
				this->labelName1->Hide();
				this->labelId2->Hide();
				this->nameTextBox1->Hide();
				this->idTextBox1->Hide();
				this->idTextBox2->Hide();
				this->dogLabel->Show();
				break;
			default:
				break;
			}
	
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ContactForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ dogLabel;
	private: System::Windows::Forms::Label^ labelId2;
	private: System::Windows::Forms::TextBox^ idTextBox2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ContactForm::typeid));
			this->labelId2 = (gcnew System::Windows::Forms::Label());
			this->idTextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->nameTextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->idTextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->labelName1 = (gcnew System::Windows::Forms::Label());
			this->labelId1 = (gcnew System::Windows::Forms::Label());
			this->actionBtn = (gcnew System::Windows::Forms::Button());
			this->resultLbl = (gcnew System::Windows::Forms::Label());
			this->viewer = (gcnew System::Windows::Forms::TextBox());
			this->titleLbl = (gcnew System::Windows::Forms::Label());
			this->dogLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labelId2
			// 
			this->labelId2->AutoSize = true;
			this->labelId2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelId2->Location = System::Drawing::Point(238, 432);
			this->labelId2->Name = L"labelId2";
			this->labelId2->Size = System::Drawing::Size(118, 31);
			this->labelId2->TabIndex = 55;
			this->labelId2->Text = L"LabelId2";
			// 
			// idTextBox2
			// 
			this->idTextBox2->Location = System::Drawing::Point(557, 434);
			this->idTextBox2->Name = L"idTextBox2";
			this->idTextBox2->Size = System::Drawing::Size(221, 31);
			this->idTextBox2->TabIndex = 54;
			// 
			// nameTextBox1
			// 
			this->nameTextBox1->Location = System::Drawing::Point(557, 297);
			this->nameTextBox1->Name = L"nameTextBox1";
			this->nameTextBox1->Size = System::Drawing::Size(221, 31);
			this->nameTextBox1->TabIndex = 52;
			// 
			// idTextBox1
			// 
			this->idTextBox1->Location = System::Drawing::Point(557, 363);
			this->idTextBox1->Name = L"idTextBox1";
			this->idTextBox1->Size = System::Drawing::Size(221, 31);
			this->idTextBox1->TabIndex = 53;
			// 
			// labelName1
			// 
			this->labelName1->AutoSize = true;
			this->labelName1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelName1->Location = System::Drawing::Point(238, 297);
			this->labelName1->Name = L"labelName1";
			this->labelName1->Size = System::Drawing::Size(167, 31);
			this->labelName1->TabIndex = 51;
			this->labelName1->Text = L"LabelName1";
			// 
			// labelId1
			// 
			this->labelId1->AutoSize = true;
			this->labelId1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelId1->Location = System::Drawing::Point(238, 361);
			this->labelId1->Name = L"labelId1";
			this->labelId1->Size = System::Drawing::Size(118, 31);
			this->labelId1->TabIndex = 50;
			this->labelId1->Text = L"LabelId1";
			// 
			// actionBtn
			// 
			this->actionBtn->Location = System::Drawing::Point(1107, 877);
			this->actionBtn->Name = L"actionBtn";
			this->actionBtn->Size = System::Drawing::Size(221, 84);
			this->actionBtn->TabIndex = 56;
			this->actionBtn->Text = L"Action";
			this->actionBtn->UseVisualStyleBackColor = true;
			this->actionBtn->Click += gcnew System::EventHandler(this, &ContactForm::actionBtn_Click);
			// 
			// resultLbl
			// 
			this->resultLbl->AutoSize = true;
			this->resultLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->resultLbl->Location = System::Drawing::Point(1177, 241);
			this->resultLbl->Name = L"resultLbl";
			this->resultLbl->Size = System::Drawing::Size(151, 31);
			this->resultLbl->TabIndex = 49;
			this->resultLbl->Text = L"Resultados";
			// 
			// viewer
			// 
			this->viewer->Location = System::Drawing::Point(882, 297);
			this->viewer->Multiline = true;
			this->viewer->Name = L"viewer";
			this->viewer->Size = System::Drawing::Size(774, 564);
			this->viewer->TabIndex = 48;
			// 
			// titleLbl
			// 
			this->titleLbl->AutoSize = true;
			this->titleLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.875F));
			this->titleLbl->Location = System::Drawing::Point(815, 40);
			this->titleLbl->Name = L"titleLbl";
			this->titleLbl->Size = System::Drawing::Size(83, 39);
			this->titleLbl->TabIndex = 47;
			this->titleLbl->Text = L"Title";
			this->titleLbl->UseMnemonic = false;
			// 
			// dogLabel
			// 
			this->dogLabel->AutoSize = true;
			this->dogLabel->BackColor = System::Drawing::SystemColors::HighlightText;
			this->dogLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->dogLabel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dogLabel.Image")));
			this->dogLabel->Location = System::Drawing::Point(265, 297);
			this->dogLabel->Margin = System::Windows::Forms::Padding(0);
			this->dogLabel->MaximumSize = System::Drawing::Size(500, 500);
			this->dogLabel->MinimumSize = System::Drawing::Size(500, 500);
			this->dogLabel->Name = L"dogLabel";
			this->dogLabel->Size = System::Drawing::Size(500, 500);
			this->dogLabel->TabIndex = 87;
			this->dogLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->dogLabel->Visible = false;
			// 
			// ContactForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(1894, 1009);
			this->Controls->Add(this->dogLabel);
			this->Controls->Add(this->labelId2);
			this->Controls->Add(this->idTextBox2);
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
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(1920, 1080);
			this->Name = L"ContactForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"ContactForm";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &ContactForm::ContactForm_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void actionBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		string res = "";
		Contact* contact = NULL;
		int id = -1;
		int id2 = -1;
		int id3 = -1;

		try
		{
			if (this->type == INSERT_ACTION)
			{
				if (!System::String::IsNullOrEmpty(this->nameTextBox1->Text) &&
					!System::String::IsNullOrEmpty(this->idTextBox1->Text) &&
					!System::String::IsNullOrEmpty(this->idTextBox2->Text)) {
					res = "Se Inserto Contacto\r\n";
					res.append(msclr::interop::marshal_as<string>(this->nameTextBox1->Text));
					res.append("\r\n");
					res.append(msclr::interop::marshal_as<string>(this->idTextBox1->Text));
					res.append("\r\n");
					res.append(msclr::interop::marshal_as<string>(this->idTextBox2->Text));
					res.append("\r\n");
					contact = new Contact((this->app->getStore().getContacts()->Length() + 1), res);
					this->app->getStore().getContacts()->Push(contact);

					this->viewer->Text = gcnew String((contact->ToString()).c_str());
				}
				else {
					this->viewer->Text = "Los Datos Ingresados no son validos";
				}
			}
			else if (this->type == DISPLAY_ACTION) {

				this->viewer->Text = gcnew String((this->app->getStore().getContacts()->ToString("contact")).c_str());
			}
			else {
				this->viewer->Text = "Los Datos Ingresados no son validos";
			}
		}
		catch (...)
		{
			this->viewer->Text = "Los Datos Ingresados no son validos";
		}
		
	}
	private: System::Void ContactForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		this->obj->Show();
	}
	};
}
