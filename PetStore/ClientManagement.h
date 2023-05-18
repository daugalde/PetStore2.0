#pragma once
#include "Constants.h"

namespace PetStore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ClientManagement
	/// </summary>
	public ref class ClientManagement : public System::Windows::Forms::Form
	{
	public:
		ClientManagement(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Form^ obj;
		AppManager* app;
		int currentType = 0;
	private: System::Windows::Forms::Label^ titleLbl;
	private: System::Windows::Forms::Label^ resultLbl;
	private: System::Windows::Forms::TextBox^ viewer;
	private: System::Windows::Forms::Button^ actionBtn;
	private: System::Windows::Forms::Label^ labelId2;

	private: System::Windows::Forms::TextBox^ idTextBox2;
	private: System::Windows::Forms::TextBox^ nameTextBox1;


	private: System::Windows::Forms::TextBox^ idTextBox1;
	private: System::Windows::Forms::Label^ labelName1;



	private: System::Windows::Forms::Label^ labelId1;

	private: System::Windows::Forms::Label^ labelId3;
	private: System::Windows::Forms::TextBox^ idTextBox3;
	private: System::Windows::Forms::TextBox^ nameTextBox2;
	private: System::Windows::Forms::Label^ labelName2;
	private: System::Windows::Forms::TextBox^ nameTextBox3;

	private: System::Windows::Forms::Label^ labelName3;
	private: System::Windows::Forms::TextBox^ nameTextBox4;
	private: System::Windows::Forms::Label^ labelName4;
	private: System::Windows::Forms::TextBox^ nameTextBox5;
	private: System::Windows::Forms::Label^ labelName5;


	private: System::Windows::Forms::TextBox^ nameTextBox6;
	private: System::Windows::Forms::Label^ labelName6;
	private: System::Windows::Forms::Label^ labelId4;

	private: System::Windows::Forms::TextBox^ idTextBox4;
	private: System::Windows::Forms::Label^ labelId5;

	private: System::Windows::Forms::TextBox^ idTextBox5;





	public:
		int currentAction = 0;
		ClientManagement(Form^ obj1, AppManager* app, int type, int action)
		{
			obj = obj1;
			this->app = app;
			this->currentAction = action;
			this->currentType = type;
			InitializeComponent();
			string res = "";
			switch (action)
			{
			case INSERT_ACTION:
				this->actionBtn->Text = "Insertar";
				this->titleLbl->Text = "Insertar Cliente";
				this->labelId1->Text = "Id de Cliente";
				this->labelName1->Text = "Nombre Cliente";
				this->labelId2->Text = "Id de Pais";
				this->labelId3->Text = "Id de Ciudad";
				this->labelName2->Text = "Direccion";
				this->labelName3->Text = "Telefono";
				this->labelName4->Text = "Anio de Ultima visita";
				this->labelName5->Text = "Mes de Ultima visita";
				this->labelName6->Text = "Dia de Ultima visita";
				this->labelId4->Text = "Descuento";
				this->labelId5->Text = "Saldo";
				break;
			case SEARCH_ACTION:
				this->actionBtn->Text = "Buscar";
				this->titleLbl->Text = "Buscar Cliente";
				this->labelId1->Text = "Id de Cliente";
				this->labelName1->Hide();
				this->labelId2->Text = "Id de Pais";
				this->labelId3->Text = "Id de Ciudad";
				this->labelName2->Hide();
				this->labelName3->Hide();
				this->labelName4->Hide();
				this->labelName5->Hide();
				this->labelName6->Hide();
				this->labelId4->Hide();
				this->labelId5->Hide();
				this->nameTextBox1->Hide();
				this->nameTextBox2->Hide();
				this->nameTextBox3->Hide();
				this->nameTextBox4->Hide();
				this->nameTextBox5->Hide();
				this->nameTextBox6->Hide();
				this->idTextBox4->Hide();
				this->idTextBox5->Hide();
				break;
			case UPDATE_ACTION:
				this->actionBtn->Text = "Modificar";
				this->titleLbl->Text = "Modificar Cliente";
				this->labelId1->Text = "Id de Cliente";
				this->labelName1->Text = "Nombre Cliente";
				this->labelId2->Text = "Id de Pais";
				this->labelId3->Text = "Id de Ciudad";
				this->labelName2->Text = "Direccion";
				this->labelName3->Text = "Telefono";
				this->labelName4->Hide();
				this->labelName5->Hide();
				this->labelName6->Hide();
				this->labelId4->Hide();
				this->labelId5->Hide();
				this->nameTextBox4->Hide();
				this->nameTextBox5->Hide();
				this->nameTextBox6->Hide();
				this->idTextBox4->Hide();
				this->idTextBox5->Hide();
				break;
			case DELETE_ACTION:
				this->actionBtn->Text = "Eliminar";
				this->titleLbl->Text = "Eliminar Cliente";
				this->labelId1->Text = "Id de Cliente";
				this->labelId2->Hide();
				this->labelId3->Hide();
				this->labelId4->Hide();
				this->labelId5->Hide();
				this->labelName1->Hide();
				this->labelName2->Hide();
				this->labelName3->Hide();
				this->labelName4->Hide();
				this->labelName5->Hide();
				this->labelName6->Hide();
				this->nameTextBox1->Hide();
				this->nameTextBox2->Hide();
				this->nameTextBox3->Hide();
				this->nameTextBox4->Hide();
				this->nameTextBox5->Hide();
				this->nameTextBox6->Hide();
				this->idTextBox2->Hide();
				this->idTextBox3->Hide();
				this->idTextBox4->Hide();
				this->idTextBox5->Hide();
				break;
			default:
				break;
			}
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ClientManagement()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->titleLbl = (gcnew System::Windows::Forms::Label());
			this->resultLbl = (gcnew System::Windows::Forms::Label());
			this->viewer = (gcnew System::Windows::Forms::TextBox());
			this->actionBtn = (gcnew System::Windows::Forms::Button());
			this->labelId2 = (gcnew System::Windows::Forms::Label());
			this->idTextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->nameTextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->idTextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->labelName1 = (gcnew System::Windows::Forms::Label());
			this->labelId1 = (gcnew System::Windows::Forms::Label());
			this->labelId3 = (gcnew System::Windows::Forms::Label());
			this->idTextBox3 = (gcnew System::Windows::Forms::TextBox());
			this->nameTextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->labelName2 = (gcnew System::Windows::Forms::Label());
			this->nameTextBox3 = (gcnew System::Windows::Forms::TextBox());
			this->labelName3 = (gcnew System::Windows::Forms::Label());
			this->nameTextBox4 = (gcnew System::Windows::Forms::TextBox());
			this->labelName4 = (gcnew System::Windows::Forms::Label());
			this->nameTextBox5 = (gcnew System::Windows::Forms::TextBox());
			this->labelName5 = (gcnew System::Windows::Forms::Label());
			this->nameTextBox6 = (gcnew System::Windows::Forms::TextBox());
			this->labelName6 = (gcnew System::Windows::Forms::Label());
			this->labelId4 = (gcnew System::Windows::Forms::Label());
			this->idTextBox4 = (gcnew System::Windows::Forms::TextBox());
			this->labelId5 = (gcnew System::Windows::Forms::Label());
			this->idTextBox5 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// titleLbl
			// 
			this->titleLbl->AutoSize = true;
			this->titleLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.875F));
			this->titleLbl->Location = System::Drawing::Point(1015, 43);
			this->titleLbl->Name = L"titleLbl";
			this->titleLbl->Size = System::Drawing::Size(83, 39);
			this->titleLbl->TabIndex = 28;
			this->titleLbl->Text = L"Title";
			this->titleLbl->UseMnemonic = false;
			// 
			// resultLbl
			// 
			this->resultLbl->AutoSize = true;
			this->resultLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->resultLbl->Location = System::Drawing::Point(1001, 237);
			this->resultLbl->Name = L"resultLbl";
			this->resultLbl->Size = System::Drawing::Size(151, 31);
			this->resultLbl->TabIndex = 30;
			this->resultLbl->Text = L"Resultados";
			// 
			// viewer
			// 
			this->viewer->Location = System::Drawing::Point(706, 293);
			this->viewer->Multiline = true;
			this->viewer->Name = L"viewer";
			this->viewer->Size = System::Drawing::Size(774, 564);
			this->viewer->TabIndex = 29;
			// 
			// actionBtn
			// 
			this->actionBtn->Location = System::Drawing::Point(931, 873);
			this->actionBtn->Name = L"actionBtn";
			this->actionBtn->Size = System::Drawing::Size(221, 84);
			this->actionBtn->TabIndex = 46;
			this->actionBtn->Text = L"Action";
			this->actionBtn->UseVisualStyleBackColor = true;
			this->actionBtn->Click += gcnew System::EventHandler(this, &ClientManagement::actionBtn_Click);
			// 
			// labelId2
			// 
			this->labelId2->AutoSize = true;
			this->labelId2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelId2->Location = System::Drawing::Point(62, 428);
			this->labelId2->Name = L"labelId2";
			this->labelId2->Size = System::Drawing::Size(118, 31);
			this->labelId2->TabIndex = 37;
			this->labelId2->Text = L"LabelId2";
			// 
			// idTextBox2
			// 
			this->idTextBox2->Location = System::Drawing::Point(381, 430);
			this->idTextBox2->Name = L"idTextBox2";
			this->idTextBox2->Size = System::Drawing::Size(221, 31);
			this->idTextBox2->TabIndex = 36;
			// 
			// nameTextBox1
			// 
			this->nameTextBox1->Location = System::Drawing::Point(381, 293);
			this->nameTextBox1->Name = L"nameTextBox1";
			this->nameTextBox1->Size = System::Drawing::Size(221, 31);
			this->nameTextBox1->TabIndex = 34;
			// 
			// idTextBox1
			// 
			this->idTextBox1->Location = System::Drawing::Point(381, 359);
			this->idTextBox1->Name = L"idTextBox1";
			this->idTextBox1->Size = System::Drawing::Size(221, 31);
			this->idTextBox1->TabIndex = 35;
			// 
			// labelName1
			// 
			this->labelName1->AutoSize = true;
			this->labelName1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelName1->Location = System::Drawing::Point(62, 293);
			this->labelName1->Name = L"labelName1";
			this->labelName1->Size = System::Drawing::Size(167, 31);
			this->labelName1->TabIndex = 33;
			this->labelName1->Text = L"LabelName1";
			// 
			// labelId1
			// 
			this->labelId1->AutoSize = true;
			this->labelId1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelId1->Location = System::Drawing::Point(62, 357);
			this->labelId1->Name = L"labelId1";
			this->labelId1->Size = System::Drawing::Size(118, 31);
			this->labelId1->TabIndex = 32;
			this->labelId1->Text = L"LabelId1";
			// 
			// labelId3
			// 
			this->labelId3->AutoSize = true;
			this->labelId3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelId3->Location = System::Drawing::Point(62, 493);
			this->labelId3->Name = L"labelId3";
			this->labelId3->Size = System::Drawing::Size(118, 31);
			this->labelId3->TabIndex = 39;
			this->labelId3->Text = L"LabelId3";
			// 
			// idTextBox3
			// 
			this->idTextBox3->Location = System::Drawing::Point(381, 495);
			this->idTextBox3->Name = L"idTextBox3";
			this->idTextBox3->Size = System::Drawing::Size(221, 31);
			this->idTextBox3->TabIndex = 37;
			// 
			// nameTextBox2
			// 
			this->nameTextBox2->Location = System::Drawing::Point(381, 562);
			this->nameTextBox2->Name = L"nameTextBox2";
			this->nameTextBox2->Size = System::Drawing::Size(221, 31);
			this->nameTextBox2->TabIndex = 38;
			// 
			// labelName2
			// 
			this->labelName2->AutoSize = true;
			this->labelName2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelName2->Location = System::Drawing::Point(62, 562);
			this->labelName2->Name = L"labelName2";
			this->labelName2->Size = System::Drawing::Size(167, 31);
			this->labelName2->TabIndex = 40;
			this->labelName2->Text = L"LabelName2";
			// 
			// nameTextBox3
			// 
			this->nameTextBox3->Location = System::Drawing::Point(381, 628);
			this->nameTextBox3->Name = L"nameTextBox3";
			this->nameTextBox3->Size = System::Drawing::Size(221, 31);
			this->nameTextBox3->TabIndex = 39;
			// 
			// labelName3
			// 
			this->labelName3->AutoSize = true;
			this->labelName3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelName3->Location = System::Drawing::Point(62, 628);
			this->labelName3->Name = L"labelName3";
			this->labelName3->Size = System::Drawing::Size(167, 31);
			this->labelName3->TabIndex = 42;
			this->labelName3->Text = L"LabelName3";
			// 
			// nameTextBox4
			// 
			this->nameTextBox4->Location = System::Drawing::Point(381, 693);
			this->nameTextBox4->Name = L"nameTextBox4";
			this->nameTextBox4->Size = System::Drawing::Size(221, 31);
			this->nameTextBox4->TabIndex = 40;
			// 
			// labelName4
			// 
			this->labelName4->AutoSize = true;
			this->labelName4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelName4->Location = System::Drawing::Point(62, 693);
			this->labelName4->Name = L"labelName4";
			this->labelName4->Size = System::Drawing::Size(167, 31);
			this->labelName4->TabIndex = 44;
			this->labelName4->Text = L"LabelName4";
			// 
			// nameTextBox5
			// 
			this->nameTextBox5->Location = System::Drawing::Point(381, 752);
			this->nameTextBox5->Name = L"nameTextBox5";
			this->nameTextBox5->Size = System::Drawing::Size(221, 31);
			this->nameTextBox5->TabIndex = 42;
			// 
			// labelName5
			// 
			this->labelName5->AutoSize = true;
			this->labelName5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelName5->Location = System::Drawing::Point(62, 752);
			this->labelName5->Name = L"labelName5";
			this->labelName5->Size = System::Drawing::Size(167, 31);
			this->labelName5->TabIndex = 46;
			this->labelName5->Text = L"LabelName5";
			// 
			// nameTextBox6
			// 
			this->nameTextBox6->Location = System::Drawing::Point(381, 814);
			this->nameTextBox6->Name = L"nameTextBox6";
			this->nameTextBox6->Size = System::Drawing::Size(221, 31);
			this->nameTextBox6->TabIndex = 43;
			// 
			// labelName6
			// 
			this->labelName6->AutoSize = true;
			this->labelName6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelName6->Location = System::Drawing::Point(62, 814);
			this->labelName6->Name = L"labelName6";
			this->labelName6->Size = System::Drawing::Size(167, 31);
			this->labelName6->TabIndex = 48;
			this->labelName6->Text = L"LabelName6";
			// 
			// labelId4
			// 
			this->labelId4->AutoSize = true;
			this->labelId4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelId4->Location = System::Drawing::Point(62, 873);
			this->labelId4->Name = L"labelId4";
			this->labelId4->Size = System::Drawing::Size(118, 31);
			this->labelId4->TabIndex = 51;
			this->labelId4->Text = L"LabelId4";
			// 
			// idTextBox4
			// 
			this->idTextBox4->Location = System::Drawing::Point(381, 875);
			this->idTextBox4->Name = L"idTextBox4";
			this->idTextBox4->Size = System::Drawing::Size(221, 31);
			this->idTextBox4->TabIndex = 44;
			// 
			// labelId5
			// 
			this->labelId5->AutoSize = true;
			this->labelId5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelId5->Location = System::Drawing::Point(62, 926);
			this->labelId5->Name = L"labelId5";
			this->labelId5->Size = System::Drawing::Size(118, 31);
			this->labelId5->TabIndex = 53;
			this->labelId5->Text = L"LabelId5";
			// 
			// idTextBox5
			// 
			this->idTextBox5->Location = System::Drawing::Point(381, 928);
			this->idTextBox5->Name = L"idTextBox5";
			this->idTextBox5->Size = System::Drawing::Size(221, 31);
			this->idTextBox5->TabIndex = 45;
			// 
			// ClientManagement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(1894, 1009);
			this->Controls->Add(this->labelId5);
			this->Controls->Add(this->idTextBox5);
			this->Controls->Add(this->labelId4);
			this->Controls->Add(this->idTextBox4);
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
			this->Controls->Add(this->labelId3);
			this->Controls->Add(this->idTextBox3);
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
			this->Name = L"ClientManagement";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ClientManagement";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &ClientManagement::ClientManagement_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ClientManagement_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		obj->Show();
	}
	private: System::Void actionBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		string res = "";
		Country* country = NULL;
		City* city = NULL;
		Client* client = NULL;
		Pet* pet = NULL;
		Appointment* appointment = NULL;
		bool successAction = false;
		float totalDue = 0.00;
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
				totalDue = (float)(Convert::ToDouble(this->idTextBox5->Text));
				if (System::Int32::TryParse(this->idTextBox1->Text, id) && id > 0 &&
					System::Int32::TryParse(this->idTextBox2->Text, id2) && id2 > 0 &&
					System::Int32::TryParse(this->idTextBox3->Text, id3) && id3 > 0 &&
					!System::String::IsNullOrEmpty(this->nameTextBox4->Text) &&
					!System::String::IsNullOrEmpty(this->nameTextBox5->Text) &&
					!System::String::IsNullOrEmpty(this->nameTextBox6->Text) &&
					System::Int32::TryParse(this->idTextBox4->Text, id4) && id4 > 0 &&
					totalDue >= 0)
				{
					country = static_cast<Country*>(this->app->getStore().GetCountries()->SearchById(System::Int32::Parse(this->idTextBox2->Text), this->app->getStore().GetCountries()->GetRoot()));
					city = static_cast<City*>(this->app->getStore().GetCities()->SearchCityById(System::Int32::Parse(this->idTextBox3->Text), this->app->getStore().GetCities()->GetRoot()));
					client = static_cast<Client*>(this->app->getStore().GetClients()->SearchById(System::Int32::Parse(this->idTextBox1->Text), this->app->getStore().GetClients()->GetRoot()));

					if (client == NULL && country->getId() == city->getCountryId())
					{

						client = new Client(System::Int32::Parse(this->idTextBox1->Text),
							msclr::interop::marshal_as<string>(this->nameTextBox1->Text),
							msclr::interop::marshal_as<string>(this->nameTextBox2->Text),
							System::Int32::Parse(this->idTextBox2->Text),
							System::Int32::Parse(this->idTextBox3->Text),
							msclr::interop::marshal_as<string>(this->nameTextBox3->Text),
							msclr::interop::marshal_as<string>(this->nameTextBox6->Text),
							msclr::interop::marshal_as<string>(this->nameTextBox5->Text),
							msclr::interop::marshal_as<string>(this->nameTextBox4->Text),
							System::Int32::Parse(this->idTextBox4->Text),
							totalDue);
						successAction = this->app->getStore().GetClients()->Insert(client);

						if (successAction)
						{
							res = "Se Inserto Cliente";
							this->viewer->Text = gcnew String((res.append(client->ToString())).c_str());
						}
						else {
							this->viewer->Text = "Cliente ya Existe o Id no es valido para Pais o Ciudad";
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
			this->nameTextBox1->Text = "";
			this->idTextBox1->Text = "";
			this->idTextBox2->Text = "";
			this->idTextBox3->Text = "";
			this->nameTextBox2->Text = "";
			this->nameTextBox3->Text = "";
			this->nameTextBox4->Text = "";
			this->nameTextBox5->Text = "";
			this->nameTextBox6->Text = "";
			this->idTextBox4->Text = "";
			this->idTextBox5->Text = "";
			break;
		case SEARCH_ACTION:
			this->actionBtn->Text = "Buscar";
			this->titleLbl->Text = "Buscar Cliente";
			if (System::Int32::TryParse(this->idTextBox1->Text, id) && id > 0 &&
				System::Int32::TryParse(this->idTextBox2->Text, id2) && id2 > 0 &&
				System::Int32::TryParse(this->idTextBox3->Text, id3) && id3 > 0)
			{
				country = static_cast<Country*>(this->app->getStore().GetCountries()->SearchById(System::Int32::Parse(this->idTextBox2->Text), this->app->getStore().GetCountries()->GetRoot()));
				city = static_cast<City*>(this->app->getStore().GetCities()->SearchCityById(System::Int32::Parse(this->idTextBox3->Text), this->app->getStore().GetCities()->GetRoot()));
				client = static_cast<Client*>(this->app->getStore().GetClients()->SearchById(System::Int32::Parse(this->idTextBox1->Text), this->app->getStore().GetClients()->GetRoot()));

				if (client != NULL &&
					client->getCityId() == city->getId() &&
					client->getCountryId() == country->getId() &&
					country->getId() == city->getCountryId())
				{
					res = "Se Encontro Cliente";
					this->viewer->Text = gcnew String((res.append(client->ToString())).c_str());
				}
				else {
					this->viewer->Text = "Cliente No Existe o Id no es valido para Pais o Ciudad";
				}
			}
			else {
				this->viewer->Text = "Los Datos Ingresados no son validos";
			}
			this->nameTextBox1->Text = "";
			this->idTextBox1->Text = "";
			this->idTextBox2->Text = "";
			this->idTextBox3->Text = "";
			this->nameTextBox2->Text = "";
			this->nameTextBox3->Text = "";
			this->nameTextBox4->Text = "";
			this->nameTextBox5->Text = "";
			this->nameTextBox6->Text = "";
			this->idTextBox4->Text = "";
			this->idTextBox5->Text = "";
			break;
		case UPDATE_ACTION:
			try
			{
				if (System::Int32::TryParse(this->idTextBox1->Text, id) && id > 0)
				{
					if (this->idTextBox2->Text->Length != 0)
					{
						country = static_cast<Country*>(this->app->getStore().GetCountries()->SearchById(System::Int32::Parse(this->idTextBox2->Text), this->app->getStore().GetCountries()->GetRoot()));
					}
					if (this->idTextBox3->Text->Length != 0 && country != NULL)
					{
						city = static_cast<City*>(this->app->getStore().GetCities()->SearchCityById(System::Int32::Parse(this->idTextBox3->Text), this->app->getStore().GetCities()->GetRoot()));
					}
					
					client = static_cast<Client*>(this->app->getStore().GetClients()->SearchById(System::Int32::Parse(this->idTextBox1->Text), this->app->getStore().GetClients()->GetRoot()));

					if (client != NULL)
					{
						if (country != NULL && city != NULL && country->getId() == city->getCountryId())
						{
							client->setCountryId(country->getId());
							client->setCityId(city->getId());
							res.append("\r\nSe modifico Pais y/o Ciudad");
						}

						if (this->nameTextBox1->Text->Length != 0)
						{
							client->setName(msclr::interop::marshal_as<string>(this->nameTextBox1->Text));
							res.append("\r\nSe modifico Nombre");
						}

						if (this->nameTextBox2->Text->Length != 0)
						{
							client->setAddress(msclr::interop::marshal_as<string>(this->nameTextBox2->Text));
							res.append("\r\nSe modifico Direccion");
						}

						if (this->nameTextBox3->Text->Length != 0)
						{
							client->setPhone(msclr::interop::marshal_as<string>(this->nameTextBox3->Text));
							res.append("\r\nSe modifico telefono");
						}
						
						res.append("\r\n");

						this->app->getStore().GetClients()->UpdateElementById(id, client, this->app->getStore().GetClients()->GetRoot());

						this->viewer->Text = gcnew String((res.append(client->ToString())).c_str());

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
			this->nameTextBox1->Text = "";
			this->idTextBox1->Text = "";
			this->idTextBox2->Text = "";
			this->idTextBox3->Text = "";
			this->nameTextBox2->Text = "";
			this->nameTextBox3->Text = "";
			this->nameTextBox4->Text = "";
			this->nameTextBox5->Text = "";
			this->nameTextBox6->Text = "";
			this->idTextBox4->Text = "";
			this->idTextBox5->Text = "";
			break;
		case DELETE_ACTION:
			try
			{
				if (System::Int32::TryParse(this->idTextBox1->Text, id) && id > 0)
				{

					client = static_cast<Client*>(this->app->getStore().GetClients()->SearchById(System::Int32::Parse(this->idTextBox1->Text), this->app->getStore().GetClients()->GetRoot()));

					if (client != NULL)
					{
						client->setIsDeleted(true);

						res.append("\r\nSe Elimino Cliente");
						
						this->app->getStore().GetClients()->UpdateElementById(id, client, this->app->getStore().GetClients()->GetRoot());

						this->viewer->Text = gcnew String((res.append(client->ToString())).c_str());

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
			this->nameTextBox1->Text = "";
			this->idTextBox1->Text = "";
			this->idTextBox2->Text = "";
			this->idTextBox3->Text = "";
			this->nameTextBox2->Text = "";
			this->nameTextBox3->Text = "";
			this->nameTextBox4->Text = "";
			this->nameTextBox5->Text = "";
			this->nameTextBox6->Text = "";
			this->idTextBox4->Text = "";
			this->idTextBox5->Text = "";
			break;
		default:
			break;
		}
	}
};
}
