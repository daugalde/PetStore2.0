#pragma once
#include "AppManager.h"
#include "Constants.h"
#include "Pet.h"
namespace PetStore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PetManagement
	/// </summary>
	public ref class PetManagement : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		AppManager* app;
		int currentAction = 0;
		PetManagement(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		PetManagement(Form^ obj1, AppManager* app,  int action)
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
				this->titleLbl->Text = "Insertar Mascota";
				this->labelId1->Text = "Id de Cliente";
				this->labelName->Text = "Nombre Mascota";
				this->labelId2->Text = "Id de Mascota";
				this->labelName1->Text = "Tipo de Mascota";
				this->labelName2->Text = "Raza";
				this->labelName3->Text = "Sexo";
				this->labelName4->Text = "Anio de Nacimiento";
				this->labelName5->Text = "Mes  de Nacimiento";
				this->labelName6->Text = "Dia  de Nacimiento";
				this->labelName7->Text = "Color";
				this->labelName8->Text = "Esta Castrado si/no";
				this->labelName9->Text = "Anio de visita";
				this->labelName10->Text = "Mes  de visita";
				this->labelName11->Text = "Dia  de visita";
				break;
			case SEARCH_ACTION:
				this->actionBtn->Text = "Buscar";
				this->titleLbl->Text = "Buscar Mascota";
				this->labelId1->Text = "Id de Cliente";
				this->labelId2->Text = "Id de Mascota";
				this->dogLabel->Show();
				this->labelName->Hide();
				this->labelName1->Hide();
				this->labelName2->Hide();
				this->labelName3->Hide();
				this->labelName4->Hide();
				this->labelName5->Hide();
				this->labelName6->Hide();
				this->labelName7->Hide();
				this->labelName8->Hide();
				this->labelName9->Hide();
				this->labelName10->Hide();
				this->labelName11->Hide();
				this->nameTextBox->Hide();
				this->nameTextBox1->Hide();
				this->nameTextBox2->Hide();
				this->nameTextBox3->Hide();
				this->nameTextBox4->Hide();
				this->nameTextBox5->Hide();
				this->nameTextBox6->Hide();
				this->nameTextBox7->Hide();
				this->nameTextBox8->Hide();
				this->nameTextBox9->Hide();
				this->nameTextBox10->Hide();
				this->nameTextBox11->Hide();
				break;
			case UPDATE_ACTION:
				this->actionBtn->Text = "Modificar";
				this->titleLbl->Text = "Modificar Mascota";
				this->labelId1->Hide();
				this->idTextBox1->Hide();
				this->labelId2->Text = "Id de Mascota";
				this->labelName->Text = "Nombre Mascota";
				this->labelName8->Text = "Esta Castrado si/no";
				this->dogLabel->Show();
				this->labelName1->Hide();
				this->labelName2->Hide();
				this->labelName3->Hide();
				this->labelName4->Hide();
				this->labelName5->Hide();
				this->labelName6->Hide();
				this->labelName7->Hide();
				this->labelName9->Hide();
				this->labelName10->Hide();
				this->labelName11->Hide();
				this->nameTextBox1->Hide();
				this->nameTextBox2->Hide();
				this->nameTextBox3->Hide();
				this->nameTextBox4->Hide();
				this->nameTextBox5->Hide();
				this->nameTextBox6->Hide();
				this->nameTextBox7->Hide();
				this->nameTextBox9->Hide();
				this->nameTextBox10->Hide();
				this->nameTextBox11->Hide();
				break;
			case DELETE_ACTION:
				this->actionBtn->Text = "Eliminar";
				this->titleLbl->Text = "Eliminar Mascota";
				this->labelId1->Hide();
				this->labelId2->Text = "Id de Mascota";
				this->dogLabel->Show();
				this->labelName->Hide();
				this->labelName1->Hide();
				this->labelName2->Hide();
				this->labelName3->Hide();
				this->labelName4->Hide();
				this->labelName5->Hide();
				this->labelName6->Hide();
				this->labelName7->Hide();
				this->labelName8->Hide();
				this->labelName9->Hide();
				this->labelName10->Hide();
				this->labelName11->Hide();
				this->idTextBox1->Hide();
				this->nameTextBox->Hide();
				this->nameTextBox1->Hide();
				this->nameTextBox2->Hide();
				this->nameTextBox3->Hide();
				this->nameTextBox4->Hide();
				this->nameTextBox5->Hide();
				this->nameTextBox6->Hide();
				this->nameTextBox7->Hide();
				this->nameTextBox8->Hide();
				this->nameTextBox9->Hide();
				this->nameTextBox10->Hide();
				this->nameTextBox11->Hide();
				break;
			default:
				break;
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PetManagement()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ labelName11;
	private: System::Windows::Forms::Label^ labelName8;
	private: System::Windows::Forms::TextBox^ nameTextBox8;
	private: System::Windows::Forms::TextBox^ nameTextBox11;
	private: System::Windows::Forms::Label^ labelName10;
	private: System::Windows::Forms::TextBox^ nameTextBox10;
	private: System::Windows::Forms::TextBox^ nameTextBox9;
	private: System::Windows::Forms::Label^ labelName9;
	private: System::Windows::Forms::Label^ dogLabel;
	private: System::Windows::Forms::Label^ labelName7;
	private: System::Windows::Forms::TextBox^ nameTextBox7;
	private: System::Windows::Forms::TextBox^ nameTextBox6;
	private: System::Windows::Forms::Label^ labelName6;
	private: System::Windows::Forms::TextBox^ nameTextBox5;
	private: System::Windows::Forms::Label^ labelName5;
	private: System::Windows::Forms::TextBox^ nameTextBox4;
	private: System::Windows::Forms::Label^ labelName4;
	private: System::Windows::Forms::TextBox^ nameTextBox3;
	private: System::Windows::Forms::Label^ labelName3;
	private: System::Windows::Forms::TextBox^ nameTextBox2;
	private: System::Windows::Forms::Label^ labelName2;
	private: System::Windows::Forms::Label^ labelName;

	private: System::Windows::Forms::TextBox^ nameTextBox;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PetManagement::typeid));
			this->labelName7 = (gcnew System::Windows::Forms::Label());
			this->nameTextBox7 = (gcnew System::Windows::Forms::TextBox());
			this->nameTextBox6 = (gcnew System::Windows::Forms::TextBox());
			this->labelName6 = (gcnew System::Windows::Forms::Label());
			this->nameTextBox5 = (gcnew System::Windows::Forms::TextBox());
			this->labelName5 = (gcnew System::Windows::Forms::Label());
			this->nameTextBox4 = (gcnew System::Windows::Forms::TextBox());
			this->labelName4 = (gcnew System::Windows::Forms::Label());
			this->nameTextBox3 = (gcnew System::Windows::Forms::TextBox());
			this->labelName3 = (gcnew System::Windows::Forms::Label());
			this->nameTextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->labelName2 = (gcnew System::Windows::Forms::Label());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
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
			this->labelName11 = (gcnew System::Windows::Forms::Label());
			this->nameTextBox11 = (gcnew System::Windows::Forms::TextBox());
			this->labelName10 = (gcnew System::Windows::Forms::Label());
			this->nameTextBox10 = (gcnew System::Windows::Forms::TextBox());
			this->nameTextBox9 = (gcnew System::Windows::Forms::TextBox());
			this->labelName9 = (gcnew System::Windows::Forms::Label());
			this->dogLabel = (gcnew System::Windows::Forms::Label());
			this->labelName8 = (gcnew System::Windows::Forms::Label());
			this->nameTextBox8 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// labelName7
			// 
			this->labelName7->AutoSize = true;
			this->labelName7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelName7->Location = System::Drawing::Point(67, 747);
			this->labelName7->Name = L"labelName7";
			this->labelName7->Size = System::Drawing::Size(167, 31);
			this->labelName7->TabIndex = 78;
			this->labelName7->Text = L"LabelName7";
			// 
			// nameTextBox7
			// 
			this->nameTextBox7->Location = System::Drawing::Point(386, 749);
			this->nameTextBox7->Name = L"nameTextBox7";
			this->nameTextBox7->Size = System::Drawing::Size(221, 31);
			this->nameTextBox7->TabIndex = 70;
			// 
			// nameTextBox6
			// 
			this->nameTextBox6->Location = System::Drawing::Point(386, 688);
			this->nameTextBox6->Name = L"nameTextBox6";
			this->nameTextBox6->Size = System::Drawing::Size(221, 31);
			this->nameTextBox6->TabIndex = 69;
			// 
			// labelName6
			// 
			this->labelName6->AutoSize = true;
			this->labelName6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelName6->Location = System::Drawing::Point(67, 688);
			this->labelName6->Name = L"labelName6";
			this->labelName6->Size = System::Drawing::Size(167, 31);
			this->labelName6->TabIndex = 77;
			this->labelName6->Text = L"LabelName6";
			// 
			// nameTextBox5
			// 
			this->nameTextBox5->Location = System::Drawing::Point(386, 626);
			this->nameTextBox5->Name = L"nameTextBox5";
			this->nameTextBox5->Size = System::Drawing::Size(221, 31);
			this->nameTextBox5->TabIndex = 68;
			// 
			// labelName5
			// 
			this->labelName5->AutoSize = true;
			this->labelName5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelName5->Location = System::Drawing::Point(67, 626);
			this->labelName5->Name = L"labelName5";
			this->labelName5->Size = System::Drawing::Size(167, 31);
			this->labelName5->TabIndex = 75;
			this->labelName5->Text = L"LabelName5";
			// 
			// nameTextBox4
			// 
			this->nameTextBox4->Location = System::Drawing::Point(386, 567);
			this->nameTextBox4->Name = L"nameTextBox4";
			this->nameTextBox4->Size = System::Drawing::Size(221, 31);
			this->nameTextBox4->TabIndex = 67;
			// 
			// labelName4
			// 
			this->labelName4->AutoSize = true;
			this->labelName4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelName4->Location = System::Drawing::Point(67, 567);
			this->labelName4->Name = L"labelName4";
			this->labelName4->Size = System::Drawing::Size(167, 31);
			this->labelName4->TabIndex = 72;
			this->labelName4->Text = L"LabelName4";
			// 
			// nameTextBox3
			// 
			this->nameTextBox3->Location = System::Drawing::Point(386, 502);
			this->nameTextBox3->Name = L"nameTextBox3";
			this->nameTextBox3->Size = System::Drawing::Size(221, 31);
			this->nameTextBox3->TabIndex = 66;
			// 
			// labelName3
			// 
			this->labelName3->AutoSize = true;
			this->labelName3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelName3->Location = System::Drawing::Point(67, 502);
			this->labelName3->Name = L"labelName3";
			this->labelName3->Size = System::Drawing::Size(167, 31);
			this->labelName3->TabIndex = 69;
			this->labelName3->Text = L"LabelName3";
			// 
			// nameTextBox2
			// 
			this->nameTextBox2->Location = System::Drawing::Point(386, 436);
			this->nameTextBox2->Name = L"nameTextBox2";
			this->nameTextBox2->Size = System::Drawing::Size(221, 31);
			this->nameTextBox2->TabIndex = 65;
			// 
			// labelName2
			// 
			this->labelName2->AutoSize = true;
			this->labelName2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelName2->Location = System::Drawing::Point(67, 436);
			this->labelName2->Name = L"labelName2";
			this->labelName2->Size = System::Drawing::Size(167, 31);
			this->labelName2->TabIndex = 67;
			this->labelName2->Text = L"LabelName2";
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelName->Location = System::Drawing::Point(67, 260);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(152, 31);
			this->labelName->TabIndex = 65;
			this->labelName->Text = L"LabelName";
			// 
			// nameTextBox
			// 
			this->nameTextBox->Location = System::Drawing::Point(386, 262);
			this->nameTextBox->Name = L"nameTextBox";
			this->nameTextBox->Size = System::Drawing::Size(221, 31);
			this->nameTextBox->TabIndex = 62;
			// 
			// labelId2
			// 
			this->labelId2->AutoSize = true;
			this->labelId2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelId2->Location = System::Drawing::Point(67, 192);
			this->labelId2->Name = L"labelId2";
			this->labelId2->Size = System::Drawing::Size(118, 31);
			this->labelId2->TabIndex = 62;
			this->labelId2->Text = L"LabelId2";
			// 
			// idTextBox2
			// 
			this->idTextBox2->Location = System::Drawing::Point(386, 192);
			this->idTextBox2->Name = L"idTextBox2";
			this->idTextBox2->Size = System::Drawing::Size(221, 31);
			this->idTextBox2->TabIndex = 61;
			// 
			// nameTextBox1
			// 
			this->nameTextBox1->Location = System::Drawing::Point(386, 370);
			this->nameTextBox1->Name = L"nameTextBox1";
			this->nameTextBox1->Size = System::Drawing::Size(221, 31);
			this->nameTextBox1->TabIndex = 64;
			// 
			// idTextBox1
			// 
			this->idTextBox1->Location = System::Drawing::Point(386, 122);
			this->idTextBox1->Name = L"idTextBox1";
			this->idTextBox1->Size = System::Drawing::Size(221, 31);
			this->idTextBox1->TabIndex = 60;
			// 
			// labelName1
			// 
			this->labelName1->AutoSize = true;
			this->labelName1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelName1->Location = System::Drawing::Point(67, 368);
			this->labelName1->Name = L"labelName1";
			this->labelName1->Size = System::Drawing::Size(167, 31);
			this->labelName1->TabIndex = 58;
			this->labelName1->Text = L"LabelName1";
			// 
			// labelId1
			// 
			this->labelId1->AutoSize = true;
			this->labelId1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelId1->Location = System::Drawing::Point(67, 120);
			this->labelId1->Name = L"labelId1";
			this->labelId1->Size = System::Drawing::Size(118, 31);
			this->labelId1->TabIndex = 57;
			this->labelId1->Text = L"LabelId1";
			// 
			// actionBtn
			// 
			this->actionBtn->Location = System::Drawing::Point(757, 848);
			this->actionBtn->Name = L"actionBtn";
			this->actionBtn->Size = System::Drawing::Size(221, 84);
			this->actionBtn->TabIndex = 73;
			this->actionBtn->Text = L"Action";
			this->actionBtn->UseVisualStyleBackColor = true;
			this->actionBtn->Click += gcnew System::EventHandler(this, &PetManagement::actionBtn_Click);
			// 
			// resultLbl
			// 
			this->resultLbl->AutoSize = true;
			this->resultLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->resultLbl->Location = System::Drawing::Point(751, 146);
			this->resultLbl->Name = L"resultLbl";
			this->resultLbl->Size = System::Drawing::Size(151, 31);
			this->resultLbl->TabIndex = 56;
			this->resultLbl->Text = L"Resultados";
			// 
			// viewer
			// 
			this->viewer->Location = System::Drawing::Point(757, 244);
			this->viewer->Multiline = true;
			this->viewer->Name = L"viewer";
			this->viewer->Size = System::Drawing::Size(678, 564);
			this->viewer->TabIndex = 55;
			// 
			// titleLbl
			// 
			this->titleLbl->AutoSize = true;
			this->titleLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.875F));
			this->titleLbl->Location = System::Drawing::Point(840, 39);
			this->titleLbl->Name = L"titleLbl";
			this->titleLbl->Size = System::Drawing::Size(83, 39);
			this->titleLbl->TabIndex = 54;
			this->titleLbl->Text = L"Title";
			this->titleLbl->UseMnemonic = false;
			// 
			// labelName11
			// 
			this->labelName11->AutoSize = true;
			this->labelName11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelName11->Location = System::Drawing::Point(67, 926);
			this->labelName11->Name = L"labelName11";
			this->labelName11->Size = System::Drawing::Size(182, 31);
			this->labelName11->TabIndex = 85;
			this->labelName11->Text = L"LabelName11";
			// 
			// nameTextBox11
			// 
			this->nameTextBox11->Location = System::Drawing::Point(386, 928);
			this->nameTextBox11->Name = L"nameTextBox11";
			this->nameTextBox11->Size = System::Drawing::Size(221, 31);
			this->nameTextBox11->TabIndex = 72;
			// 
			// labelName10
			// 
			this->labelName10->AutoSize = true;
			this->labelName10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelName10->Location = System::Drawing::Point(67, 873);
			this->labelName10->Name = L"labelName10";
			this->labelName10->Size = System::Drawing::Size(182, 31);
			this->labelName10->TabIndex = 84;
			this->labelName10->Text = L"LabelName10";
			// 
			// nameTextBox10
			// 
			this->nameTextBox10->Location = System::Drawing::Point(386, 875);
			this->nameTextBox10->Name = L"nameTextBox10";
			this->nameTextBox10->Size = System::Drawing::Size(221, 31);
			this->nameTextBox10->TabIndex = 71;
			// 
			// nameTextBox9
			// 
			this->nameTextBox9->Location = System::Drawing::Point(386, 814);
			this->nameTextBox9->Name = L"nameTextBox9";
			this->nameTextBox9->Size = System::Drawing::Size(221, 31);
			this->nameTextBox9->TabIndex = 70;
			// 
			// labelName9
			// 
			this->labelName9->AutoSize = true;
			this->labelName9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelName9->Location = System::Drawing::Point(67, 814);
			this->labelName9->Name = L"labelName9";
			this->labelName9->Size = System::Drawing::Size(167, 31);
			this->labelName9->TabIndex = 83;
			this->labelName9->Text = L"LabelName9";
			// 
			// dogLabel
			// 
			this->dogLabel->AutoSize = true;
			this->dogLabel->BackColor = System::Drawing::SystemColors::HighlightText;
			this->dogLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->dogLabel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dogLabel.Image")));
			this->dogLabel->Location = System::Drawing::Point(86, 406);
			this->dogLabel->Margin = System::Windows::Forms::Padding(0);
			this->dogLabel->MaximumSize = System::Drawing::Size(500, 500);
			this->dogLabel->MinimumSize = System::Drawing::Size(500, 500);
			this->dogLabel->Name = L"dogLabel";
			this->dogLabel->Size = System::Drawing::Size(500, 500);
			this->dogLabel->TabIndex = 86;
			this->dogLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->dogLabel->Visible = false;
			// 
			// labelName8
			// 
			this->labelName8->AutoSize = true;
			this->labelName8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelName8->Location = System::Drawing::Point(67, 311);
			this->labelName8->Name = L"labelName8";
			this->labelName8->Size = System::Drawing::Size(167, 31);
			this->labelName8->TabIndex = 88;
			this->labelName8->Text = L"LabelName8";
			// 
			// nameTextBox8
			// 
			this->nameTextBox8->Location = System::Drawing::Point(386, 313);
			this->nameTextBox8->Name = L"nameTextBox8";
			this->nameTextBox8->Size = System::Drawing::Size(221, 31);
			this->nameTextBox8->TabIndex = 63;
			// 
			// PetManagement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(1894, 1009);
			this->Controls->Add(this->labelName8);
			this->Controls->Add(this->nameTextBox8);
			this->Controls->Add(this->dogLabel);
			this->Controls->Add(this->labelName11);
			this->Controls->Add(this->nameTextBox11);
			this->Controls->Add(this->labelName10);
			this->Controls->Add(this->nameTextBox10);
			this->Controls->Add(this->nameTextBox9);
			this->Controls->Add(this->labelName9);
			this->Controls->Add(this->labelName7);
			this->Controls->Add(this->nameTextBox7);
			this->Controls->Add(this->nameTextBox6);
			this->Controls->Add(this->labelName6);
			this->Controls->Add(this->nameTextBox5);
			this->Controls->Add(this->labelName5);
			this->Controls->Add(this->nameTextBox4);
			this->Controls->Add(this->labelName4);
			this->Controls->Add(this->nameTextBox3);
			this->Controls->Add(this->labelName3);
			this->Controls->Add(this->nameTextBox2);
			this->Controls->Add(this->labelName2);
			this->Controls->Add(this->labelName);
			this->Controls->Add(this->nameTextBox);
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
			this->MinimumSize = System::Drawing::Size(1920, 1080);
			this->Name = L"PetManagement";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PetManagement";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &PetManagement::PetManagement_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PetManagement_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		obj->Show();
	}

	private: System::Void actionBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		string res = "";
		Client* client = NULL;
		Pet* pet = NULL;
		int id = -1;
		int id2 = -1;
		int id3 = -1;
		int id4 = -1;
		int id5 = -1;
		switch (this->currentAction)
		{
		case INSERT_ACTION:
			try
			{
				if (System::Int32::TryParse(this->idTextBox1->Text, id) && id > 0 && //Client Id
					System::Int32::TryParse(this->idTextBox2->Text, id2) && id2 > 0 && // Pet Id
					!System::String::IsNullOrEmpty(this->nameTextBox->Text) &&  // PetName
					!System::String::IsNullOrEmpty(this->nameTextBox1->Text) &&  // PetType
					!System::String::IsNullOrEmpty(this->nameTextBox2->Text) &&  // PetBreed
					!System::String::IsNullOrEmpty(this->nameTextBox3->Text) &&  // PetSex
					!System::String::IsNullOrEmpty(this->nameTextBox4->Text) && // Year of Birth
					!System::String::IsNullOrEmpty(this->nameTextBox5->Text) && // Month of Birth
					!System::String::IsNullOrEmpty(this->nameTextBox6->Text) &&   // Day of Birth
					!System::String::IsNullOrEmpty(this->nameTextBox7->Text) &&   // Pet Color
					!System::String::IsNullOrEmpty(this->nameTextBox8->Text) &&  // Pet Castrated
					!System::String::IsNullOrEmpty(this->nameTextBox9->Text) && // Year of visit
					!System::String::IsNullOrEmpty(this->nameTextBox10->Text)&& // Month of visit
					!System::String::IsNullOrEmpty(this->nameTextBox11->Text) // day of visit
					) 
				{
					client = static_cast<Client*>(this->app->getStore().GetClients()->SearchById(System::Int32::Parse(this->idTextBox1->Text), this->app->getStore().GetClients()->GetRoot()));

					if (client != NULL)
					{

						Pet* pet = new Pet(id2
							, msclr::interop::marshal_as<string>(this->nameTextBox->Text)
							, id
							, msclr::interop::marshal_as<string>(this->nameTextBox1->Text)
							, msclr::interop::marshal_as<string>(this->nameTextBox2->Text)
							, msclr::interop::marshal_as<string>(this->nameTextBox6->Text)
							, msclr::interop::marshal_as<string>(this->nameTextBox5->Text)
							, msclr::interop::marshal_as<string>(this->nameTextBox4->Text)
							, ""
							, msclr::interop::marshal_as<string>(this->nameTextBox3->Text)
							, msclr::interop::marshal_as<string>(this->nameTextBox7->Text)
							, msclr::interop::marshal_as<string>(this->nameTextBox8->Text)
							, msclr::interop::marshal_as<string>(this->nameTextBox11->Text)
							, msclr::interop::marshal_as<string>(this->nameTextBox10->Text)
							, msclr::interop::marshal_as<string>(this->nameTextBox9->Text)
							, ""
						);
						pet->setBirthDate(pet->getBirthDay() + "/" + pet->getBirthMonth() + "/" + pet->getBirthYear());
						pet->setLastVisitDate(pet->getLastVisitDay() + "/" + pet->getLastVisitMonth() + "/" + pet->getLastVisitYear());

						this->app->getStore().GetPets()->InsertBalanced(pet);

						pet = static_cast<Pet*>(this->app->getStore().GetPets()->SearchById(id2, this->app->getStore().GetPets()->GetRoot()));
						if (pet != NULL)
						{
							res = "Se Inserto Mascota del Cliente: ";
							res.append(client->getName());
							this->viewer->Text = gcnew String((res.append(pet->ToString())).c_str());
						}
						else {
							this->viewer->Text = "Error Creando La Mascota\r \n";
						}
						
					}
					else {
						this->viewer->Text = "El Id Cliente no es valido o Ya Existe";
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
			this->nameTextBox->Text = "";
			this->nameTextBox1->Text = "";
			this->idTextBox1->Text = "";
			this->idTextBox2->Text = "";
			this->nameTextBox2->Text = "";
			this->nameTextBox3->Text = "";
			this->nameTextBox4->Text = "";
			this->nameTextBox5->Text = "";
			this->nameTextBox6->Text = "";
			this->nameTextBox7->Text = "";
			this->nameTextBox8->Text = "";
			this->nameTextBox9->Text = "";
			this->nameTextBox10->Text = "";
			this->nameTextBox11->Text = "";
			break;
		case SEARCH_ACTION:
			this->actionBtn->Text = "Buscar";
			this->titleLbl->Text = "Buscar Mascota";
			try
			{
				if (System::Int32::TryParse(this->idTextBox1->Text, id) && id > 0 &&
					System::Int32::TryParse(this->idTextBox2->Text, id2) && id2 > 0 
					)
				{
					client = static_cast<Client*>(this->app->getStore().GetClients()->SearchById(System::Int32::Parse(this->idTextBox1->Text), this->app->getStore().GetClients()->GetRoot()));

					if (client != NULL)
					{
						pet = static_cast<Pet*>(this->app->getStore().GetPets()->SearchById(id2, this->app->getStore().GetPets()->GetRoot()));
						if (pet != NULL && pet->getClientId() == client->getId())
						{
							res = "Se Encontro la Mascota del Cliente: ";
							res.append(client->getName());
							this->viewer->Text = gcnew String((res.append(pet->ToString())).c_str());
						}
						else {
							this->viewer->Text = "La Mascota no existe para ese cliente\r \n";
						}
					}
					else {
						this->viewer->Text = "Cliente No Existe o Id no es valido ";
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
			this->nameTextBox->Text = "";
			this->nameTextBox1->Text = "";
			this->idTextBox1->Text = "";
			this->idTextBox2->Text = "";
			this->nameTextBox2->Text = "";
			this->nameTextBox3->Text = "";
			this->nameTextBox4->Text = "";
			this->nameTextBox5->Text = "";
			this->nameTextBox6->Text = "";
			this->nameTextBox7->Text = "";
			this->nameTextBox8->Text = "";
			this->nameTextBox9->Text = "";
			this->nameTextBox10->Text = "";
			this->nameTextBox11->Text = "";
			break;
		case UPDATE_ACTION:
			try
			{
				if (System::Int32::TryParse(this->idTextBox2->Text, id) && id > 0) // Pet Id
				{
					pet = static_cast<Pet*>(this->app->getStore().GetPets()->SearchById(id, this->app->getStore().GetPets()->GetRoot()));

					if (pet != NULL)
					{

						if (this->nameTextBox->Text->Length != 0)
						{
							pet->setName(msclr::interop::marshal_as<string>(this->nameTextBox->Text));
							res.append("\r\nSe modifico Nombre");
						}

						if (this->nameTextBox8->Text->Length != 0)
						{
							pet->setCastrated(msclr::interop::marshal_as<string>(this->nameTextBox8->Text));
							res.append("\r\nSe modifico si esta Castrado");
						}

						res.append("\r\n");

						this->app->getStore().GetPets()->UpdateElementById(id, pet, this->app->getStore().GetPets()->GetRoot());

						this->viewer->Text = gcnew String((res.append(pet->ToString())).c_str());

					}
					else {
						this->viewer->Text = "El Id de Mascota no es valido";
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
			this->idTextBox2->Text = "";
			this->nameTextBox->Text = "";
			this->nameTextBox8->Text = "";
			break;
		case DELETE_ACTION:
			try
			{
				if (System::Int32::TryParse(this->idTextBox2->Text, id) && id > 0)
				{

					//client = static_cast<Client*>(this->app->getStore().GetClients()->SearchById(System::Int32::Parse(this->idTextBox1->Text), this->app->getStore().GetClients()->GetRoot()));
					pet = static_cast<Pet*>(this->app->getStore().GetPets()->SearchById(id, this->app->getStore().GetPets()->GetRoot()));
					if (pet != NULL)
					{
						pet->setIsDeleted(true);

						res.append("\r\nSe Elimino Mascota");

						this->app->getStore().GetClients()->UpdateElementById(id, pet, this->app->getStore().GetPets()->GetRoot());

						this->viewer->Text = gcnew String((res.append(pet->ToString())).c_str());

					}
					else {
						this->viewer->Text = "El Id Cliente no es valido o Ya Existe";
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
			break;
		default:
			break;
		}
	}
	};
}
