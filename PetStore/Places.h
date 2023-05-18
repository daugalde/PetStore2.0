#pragma once
#include "Country.h"
#include "City.h"
#include <msclr/marshal_cppstd.h>
#include "Constants.h"

namespace PetStore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	/// <summary>
	/// Summary for Places
	/// </summary>
	public ref class Places : public System::Windows::Forms::Form
	{
	public:
		Places(void)
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

		Places(Form^ obj1, AppManager* app, int type, int action)
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
				switch (type)
				{
				case COUNTRY_TYPE:
					this->titleLbl->Text = "Insertar Pais";
					//First Id
					this->label1->Text = "Id Pais";
					//Second Id
					this->label2->Hide();
					this->idTextBox2->Hide();
					//Third Name
					this->label3->Text = "Nombre Pais";
					//res = "";
					//app->getStore().GetCountries()->InOrder("country", res);
					//this->viewer->Text = gcnew String(res.c_str());
					break;
				case CITY_TYPE:
					this->titleLbl->Text = "Insertar Ciudad";
					this->label1->Text = "Id Pais";
					this->label2->Text = "Id Ciudad";
					this->label3->Text = "Nombre Ciudad";
					break;
				default:
					break;
				}
				break;
			case SEARCH_ACTION:
				this->actionBtn->Text = "Buscar";
				switch (type)
				{
				case COUNTRY_TYPE:
					this->titleLbl->Text = "Buscar Pais";
					//First Id
					this->label1->Text = "Id Pais";
					//Second Id
					this->label2->Hide();
					this->idTextBox2->Hide();
					//Third Name
					this->label3->Hide();
					this->nameTextbox->Hide();
					break;
				case CITY_TYPE:
					this->titleLbl->Text = "Buscar Ciudad";
					this->label1->Text = "Id Pais";
					this->label2->Text = "Id Ciudad";
					this->label3->Hide();
					this->nameTextbox->Hide();
					break;
				default:
					break;
				}
				break;
			case DELETE_ACTION:
				this->actionBtn->Text = "Eliminar";
				switch (type)
				{
				case COUNTRY_TYPE:
					this->titleLbl->Text = "Eliminar Pais";
					//First Id
					this->label1->Text = "Id Pais";
					//Second Id
					this->label2->Hide();
					this->idTextBox2->Hide();
					//Third Name
					this->label3->Hide();
					this->nameTextbox->Hide();
					break;
				case CITY_TYPE:
					this->titleLbl->Text = "Eliminar Ciudad";
					//First Id
					this->label1->Text = "Id Pais";
					//Second Id
					this->label2->Text = "Id Ciudad";
					//Third Name
					this->label3->Hide();
					this->nameTextbox->Hide();
					break;
				default:
					break;
				}
				break;
			case UPDATE_ACTION:
				this->actionBtn->Text = "Modificar";
				switch (type)
				{
				case COUNTRY_TYPE:
					this->titleLbl->Text = "Modificar Pais";
					//First Id
					this->label1->Text = "Id Pais";
					//Second Id
					this->label2->Hide();
					this->idTextBox2->Hide();
					//Third Name
					this->label3->Text = "Nuevo Nombre Pais";
					break;
				case CITY_TYPE:
					this->titleLbl->Text = "Modificar Ciudad";
					//First Id
					this->label1->Text = "Id Pais";
					//Second Id
					this->label2->Text = "Id Ciudad";
					//Third Name
					this->label3->Text = "Nuevo Nombre Ciudad";
					break;
				default:
					break;
				}
				break;
			default:
				break;
			}

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Places()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ resultLbl;
	private: System::Windows::Forms::TextBox^ idTextBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ viewer;
	private: System::Windows::Forms::Button^ actionBtn;
	private: System::Windows::Forms::TextBox^ nameTextbox;
	private: System::Windows::Forms::TextBox^ idTextbox;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
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
			this->viewer = (gcnew System::Windows::Forms::TextBox());
			this->actionBtn = (gcnew System::Windows::Forms::Button());
			this->nameTextbox = (gcnew System::Windows::Forms::TextBox());
			this->idTextbox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->titleLbl = (gcnew System::Windows::Forms::Label());
			this->resultLbl = (gcnew System::Windows::Forms::Label());
			this->idTextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// viewer
			// 
			this->viewer->Location = System::Drawing::Point(758, 293);
			this->viewer->Multiline = true;
			this->viewer->Name = L"viewer";
			this->viewer->Size = System::Drawing::Size(774, 664);
			this->viewer->TabIndex = 26;
			// 
			// actionBtn
			// 
			this->actionBtn->Location = System::Drawing::Point(428, 713);
			this->actionBtn->Name = L"actionBtn";
			this->actionBtn->Size = System::Drawing::Size(221, 84);
			this->actionBtn->TabIndex = 25;
			this->actionBtn->Text = L"Action";
			this->actionBtn->UseVisualStyleBackColor = true;
			this->actionBtn->Click += gcnew System::EventHandler(this, &Places::actionBtn_Click);
			// 
			// nameTextbox
			// 
			this->nameTextbox->Location = System::Drawing::Point(428, 584);
			this->nameTextbox->Name = L"nameTextbox";
			this->nameTextbox->Size = System::Drawing::Size(221, 31);
			this->nameTextbox->TabIndex = 24;
			// 
			// idTextbox
			// 
			this->idTextbox->Location = System::Drawing::Point(428, 433);
			this->idTextbox->Name = L"idTextbox";
			this->idTextbox->Size = System::Drawing::Size(221, 31);
			this->idTextbox->TabIndex = 23;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->label3->Location = System::Drawing::Point(117, 584);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(167, 31);
			this->label3->TabIndex = 22;
			this->label3->Text = L"LabelName2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->label1->Location = System::Drawing::Point(117, 433);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 31);
			this->label1->TabIndex = 21;
			this->label1->Text = L"LabelId1";
			// 
			// titleLbl
			// 
			this->titleLbl->AutoSize = true;
			this->titleLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.875F));
			this->titleLbl->Location = System::Drawing::Point(1000, 78);
			this->titleLbl->Name = L"titleLbl";
			this->titleLbl->Size = System::Drawing::Size(83, 39);
			this->titleLbl->TabIndex = 27;
			this->titleLbl->Text = L"Title";
			this->titleLbl->UseMnemonic = false;
			// 
			// resultLbl
			// 
			this->resultLbl->AutoSize = true;
			this->resultLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->resultLbl->Location = System::Drawing::Point(753, 237);
			this->resultLbl->Name = L"resultLbl";
			this->resultLbl->Size = System::Drawing::Size(151, 31);
			this->resultLbl->TabIndex = 28;
			this->resultLbl->Text = L"Resultados";
			// 
			// idTextBox2
			// 
			this->idTextBox2->Location = System::Drawing::Point(428, 502);
			this->idTextBox2->Name = L"idTextBox2";
			this->idTextBox2->Size = System::Drawing::Size(221, 31);
			this->idTextBox2->TabIndex = 29;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->label2->Location = System::Drawing::Point(117, 502);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 31);
			this->label2->TabIndex = 30;
			this->label2->Text = L"LabelId2";
			// 
			// Places
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(1894, 1009);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->idTextBox2);
			this->Controls->Add(this->resultLbl);
			this->Controls->Add(this->titleLbl);
			this->Controls->Add(this->viewer);
			this->Controls->Add(this->actionBtn);
			this->Controls->Add(this->nameTextbox);
			this->Controls->Add(this->idTextbox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1920, 1080);
			this->MinimumSize = System::Drawing::Size(1920, 1080);
			this->Name = L"Places";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Lugares";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Places::Places_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Places_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		obj->Show();
	}

	private: System::Void actionBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		string res = "";
		Country* country = NULL;
		City* city = NULL;
		bool successAction = false;
		int id = -1;
		int id2 = -1;
		switch (this->currentAction)
		{
		case INSERT_ACTION:
			switch (this->currentType)
			{
			case COUNTRY_TYPE:
				if (System::Int32::TryParse(this->idTextbox->Text, id) && id > 0 && !String::IsNullOrEmpty(this->nameTextbox->Text))
				{
					country = new Country(System::Int32::Parse(this->idTextbox->Text), msclr::interop::marshal_as<string>(this->nameTextbox->Text));
					successAction = this->app->getStore().GetCountries()->Insert(country);
					if (successAction)
					{
						res = "Se Inserto\r\n";
						this->viewer->Text = gcnew String((res.append(country->ToString())).c_str());
					}
					else {
						this->viewer->Text = "Pais ya Existe o Id no es valido";
					}
				}
				else {
					this->viewer->Text = "Los Datos Ingresados no son validos";
				}
				this->idTextbox->Text = "";
				this->nameTextbox->Text = "";
				break;
			case CITY_TYPE:
				if (System::Int32::TryParse(this->idTextbox->Text, id) && id > 0 &&
					System::Int32::TryParse(this->idTextBox2->Text, id2) && id2 > 0 &&
					!String::IsNullOrEmpty(this->nameTextbox->Text))
				{
					country = static_cast<Country*>(this->app->getStore().GetCountries()->SearchById(System::Int32::Parse(this->idTextbox->Text), this->app->getStore().GetCountries()->GetRoot()));

					if (country != NULL)
					{
						city = new City(System::Int32::Parse(this->idTextBox2->Text), msclr::interop::marshal_as<string>(this->nameTextbox->Text));
						city->setCountryId(id);
						successAction = this->app->getStore().GetCities()->Insert(city);
						if (successAction)
						{
							res = "Se Inserto Ciudad\r\n";
							this->viewer->Text = gcnew String((res.append(city->ToString())).c_str());
						}
						else {
							this->viewer->Text = "Ciudad ya Existe o Id no es valido";
						}
					}
					else {
						this->viewer->Text = "El Id Pais no es valido o no Existe";
					}
				}
				else {
					this->viewer->Text = "Los Datos Ingresados no son validos";
				}
				this->idTextbox->Text = "";
				this->idTextBox2->Text = "";
				this->nameTextbox->Text = "";
				break;
			default:
				break;
			}
			break;
		case SEARCH_ACTION:
			this->actionBtn->Text = "Buscar";
			switch (this->currentType)
			{
			case COUNTRY_TYPE:
				this->titleLbl->Text = "Buscar Pais";
				if (System::Int32::TryParse(this->idTextbox->Text, id) && id > 0)
				{
					country = static_cast<Country*>(this->app->getStore().GetCountries()->SearchById(System::Int32::Parse(this->idTextbox->Text), this->app->getStore().GetCountries()->GetRoot()));
					if (country != NULL && !country->getIsDeleted())
					{
						res = "Se Busco\r\n";
						this->viewer->Text = gcnew String((res.append(country->ToString())).c_str());
					}
					else {
						this->viewer->Text = "Pais No Existe o Id no es valido";
					}
				}
				else {
					this->viewer->Text = "Los Datos Ingresados no son validos";
				}
				this->idTextbox->Text = "";
				break;
			case CITY_TYPE:
				this->titleLbl->Text = "Buscar Ciudad";
				if (System::Int32::TryParse(this->idTextbox->Text, id) && id > 0 &&
					System::Int32::TryParse(this->idTextBox2->Text, id2) && id2 > 0)
				{
					country = static_cast<Country*>(this->app->getStore().GetCountries()->SearchById(System::Int32::Parse(this->idTextbox->Text), this->app->getStore().GetCountries()->GetRoot()));

					if (country != NULL)
					{
						city = static_cast<City*>(this->app->getStore().GetCities()->SearchCityById(System::Int32::Parse(this->idTextBox2->Text), this->app->getStore().GetCities()->GetRoot()));
						if (city != NULL && country->getId() == city->getCountryId() && !city->getIsDeleted())
						{
							res = "Se Encontro Ciudad\r\n";
							this->viewer->Text = gcnew String((res.append(city->ToString())).c_str());
						}
						else {
							this->viewer->Text = "Ciudad NO Existe o Id no es valido";
						}
					}
					else {
						this->viewer->Text = "El Id Pais no es valido o no Existe";
					}
				}
				else {
					this->viewer->Text = "Los Datos Ingresados no son validos";
				}
				this->idTextbox->Text = "";
				this->idTextBox2->Text = "";
				this->nameTextbox->Text = "";
				break;
			default:
				break;
			}
			break;
		case UPDATE_ACTION:
			this->actionBtn->Text = "Modificar";
			switch (this->currentType)
			{
			case COUNTRY_TYPE:
				this->titleLbl->Text = "Modificar Pais";
				if (System::Int32::TryParse(this->idTextbox->Text, id) && id > 0 && !String::IsNullOrEmpty(this->nameTextbox->Text))
				{
					country = static_cast<Country*>(this->app->getStore().GetCountries()->SearchById(System::Int32::Parse(this->idTextbox->Text), this->app->getStore().GetCountries()->GetRoot()));
					if (country != NULL)
					{
						country->setName(msclr::interop::marshal_as<string>(this->nameTextbox->Text));
						this->app->getStore().GetCountries()->UpdateElementById(id, country, this->app->getStore().GetCountries()->GetRoot());
						res = "Se Modifico\r\n";

						this->viewer->Text = gcnew String((res.append(country->ToString())).c_str());
					}
					else {
						this->viewer->Text = "Pais No Existe o Id no es valido";
					}
				}
				else {
					this->viewer->Text = "Los Datos Ingresados no son validos";
				}
				this->idTextbox->Text = "";
				this->nameTextbox->Text = "";
				break;
			case CITY_TYPE:
				this->titleLbl->Text = "Modificar Ciudad";
				if (System::Int32::TryParse(this->idTextbox->Text, id) && id > 0 &&
					System::Int32::TryParse(this->idTextBox2->Text, id2) && id2 > 0)
				{
					country = static_cast<Country*>(this->app->getStore().GetCountries()->SearchById(System::Int32::Parse(this->idTextbox->Text), this->app->getStore().GetCountries()->GetRoot()));

					if (country != NULL)
					{
						city = static_cast<City*>(this->app->getStore().GetCities()->SearchCityById(System::Int32::Parse(this->idTextBox2->Text), this->app->getStore().GetCities()->GetRoot()));
						if (city != NULL && !city->getIsDeleted() && country->getId() == city->getCountryId())
						{
							city->setName(msclr::interop::marshal_as<string>(this->nameTextbox->Text));
							this->app->getStore().GetCities()->UpdateElementById(id2, city, this->app->getStore().GetCities()->GetRoot());
							res = "Se Modifico Ciudad\r\n";
							this->viewer->Text = gcnew String((res.append(city->ToString())).c_str());
						}
						else {
							this->viewer->Text = "Ciudad NO Existe o Id no es valido";
						}
					}
					else {
						this->viewer->Text = "El Id Pais no es valido o no Existe";
					}
				}
				else {
					this->viewer->Text = "Los Datos Ingresados no son validos";
				}
				this->idTextbox->Text = "";
				this->idTextBox2->Text = "";
				this->nameTextbox->Text = "";
				break;
			default:
				break;
			}
			break;
			break;
		case DELETE_ACTION:
			this->actionBtn->Text = "Eliminar";
			switch (this->currentType)
			{
			case COUNTRY_TYPE:
				this->titleLbl->Text = "Eliminar Pais";
				if (System::Int32::TryParse(this->idTextbox->Text, id) && id > 0)
				{
					country = static_cast<Country*>(this->app->getStore().GetCountries()->SearchById(System::Int32::Parse(this->idTextbox->Text), this->app->getStore().GetCountries()->GetRoot()));
					if (country != NULL && !country->getIsDeleted())
					{
						country->setIsDeleted(true);
						this->app->getStore().GetCountries()->UpdateElementById(id, country, this->app->getStore().GetCountries()->GetRoot());
						res = "Se Elimino\r\n";

						this->viewer->Text = gcnew String((res.append(country->ToString())).c_str());
					}
					else {
						this->viewer->Text = "Pais No Existe o Id no es valido";
					}
				}
				else {
					this->viewer->Text = "Los Datos Ingresados no son validos";
				}
				this->idTextbox->Text = "";
				break;
			case CITY_TYPE:
				this->titleLbl->Text = "Eliminar Ciudad";
				if (System::Int32::TryParse(this->idTextbox->Text, id) && id > 0 &&
					System::Int32::TryParse(this->idTextBox2->Text, id2) && id2 > 0)
				{
					country = static_cast<Country*>(this->app->getStore().GetCountries()->SearchById(System::Int32::Parse(this->idTextbox->Text), this->app->getStore().GetCountries()->GetRoot()));

					if (country != NULL)
					{
						city = static_cast<City*>(this->app->getStore().GetCities()->SearchCityById(System::Int32::Parse(this->idTextBox2->Text), this->app->getStore().GetCities()->GetRoot()));
						if (city != NULL && !city->getIsDeleted() && country->getId() == city->getCountryId())
						{
							city->setIsDeleted(true);
							this->app->getStore().GetCities()->UpdateElementById(id2, city, this->app->getStore().GetCities()->GetRoot());
							res = "Se Elimino Ciudad\r\n";
							this->viewer->Text = gcnew String((res.append(city->ToString())).c_str());
						}
						else {
							this->viewer->Text = "Ciudad NO Existe o Id no es valido";
						}
					}
					else {
						this->viewer->Text = "El Id Pais no es valido o no Existe";
					}
				}
				else {
					this->viewer->Text = "Los Datos Ingresados no son validos";
				}
				this->idTextbox->Text = "";
				this->idTextBox2->Text = "";
				this->nameTextbox->Text = "";
				break;
			default:
				break;
			}
			break;
		default:
			break;
		}
	}
	};
}
