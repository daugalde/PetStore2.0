#pragma once
#include "AppManager.h"
#include "Constants.h"

namespace PetStore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AppointmentManagement
	/// </summary>
	public ref class AppointmentManagement : public System::Windows::Forms::Form
	{

	private: System::Windows::Forms::Label^ titleLbl;
	private: System::Windows::Forms::TextBox^ viewer;
	private: System::Windows::Forms::Label^ resultLbl;
	private: System::Windows::Forms::Button^ actionBtn;
	private: System::Windows::Forms::Label^ labelId1;
	private: System::Windows::Forms::Label^ labelName1;
	private: System::Windows::Forms::TextBox^ idTextBox1;
	private: System::Windows::Forms::TextBox^ nameTextBox1;
	private: System::Windows::Forms::TextBox^ idTextBox2;
	private: System::Windows::Forms::Label^ labelId2;


	private: System::Windows::Forms::Label^ labelName2;
	private: System::Windows::Forms::TextBox^ nameTextBox2;
	private: System::Windows::Forms::Label^ labelName3;
	private: System::Windows::Forms::TextBox^ nameTextBox3;
	private: System::Windows::Forms::Label^ labelName4;
	private: System::Windows::Forms::TextBox^ nameTextBox4;
	private: System::Windows::Forms::Label^ labelName5;
	private: System::Windows::Forms::TextBox^ nameTextBox5;

	public:
		Form^ obj;
		AppManager* app;
		int currentAction = 0;
		AppointmentManagement(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		AppointmentManagement(Form^ obj1, AppManager* app, int action)
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
				this->titleLbl->Text = "Insertar Visita";
				this->labelId1->Text = "Id de Visita";
				this->labelId2->Text = "Id de Mascota";
				
				this->labelName1->Text = "Anio de visita";
				this->labelName2->Text = "Mes  de visita";
				this->labelName3->Text = "Dia  de visita";
				this->labelName4->Text = "Total factura";
				this->labelName5->Text = "Pago 1 Contado o 2 Credito";
				break;
			case SEARCH_ACTION:
				this->actionBtn->Text = "Buscar";
				this->titleLbl->Text = "Buscar Visita";
				this->labelId1->Text = "Id de Visita";
				this->labelId2->Text = "Id de Mascota";
				this->labelName1->Hide();
				this->labelName2->Hide();
				this->labelName3->Hide();
				this->labelName4->Hide();
				this->labelName5->Hide();
				this->nameTextBox1->Hide();
				this->nameTextBox2->Hide();
				this->nameTextBox3->Hide();
				this->nameTextBox4->Hide();
				this->nameTextBox5->Hide();
				break;
			case UPDATE_ACTION:
				this->actionBtn->Text = "Modificar";
				this->titleLbl->Text = "Modificar Visita";
				this->labelId1->Text = "Id de Mascota";
				this->labelId2->Text = "Id de Visita";
				this->labelName5->Text = "Pago 1 Contado o 2 Credito";
				this->labelName1->Hide();
				this->labelName2->Hide();
				this->labelName3->Hide();
				this->labelName4->Hide();
				this->nameTextBox1->Hide();
				this->nameTextBox2->Hide();
				this->nameTextBox3->Hide();
				this->nameTextBox4->Hide();
				break;
			default:
				break;
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AppointmentManagement()
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
			this->viewer = (gcnew System::Windows::Forms::TextBox());
			this->resultLbl = (gcnew System::Windows::Forms::Label());
			this->actionBtn = (gcnew System::Windows::Forms::Button());
			this->labelId1 = (gcnew System::Windows::Forms::Label());
			this->labelName1 = (gcnew System::Windows::Forms::Label());
			this->idTextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->nameTextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->idTextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->labelId2 = (gcnew System::Windows::Forms::Label());
			this->labelName2 = (gcnew System::Windows::Forms::Label());
			this->nameTextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->labelName3 = (gcnew System::Windows::Forms::Label());
			this->nameTextBox3 = (gcnew System::Windows::Forms::TextBox());
			this->labelName4 = (gcnew System::Windows::Forms::Label());
			this->nameTextBox4 = (gcnew System::Windows::Forms::TextBox());
			this->labelName5 = (gcnew System::Windows::Forms::Label());
			this->nameTextBox5 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// titleLbl
			// 
			this->titleLbl->AutoSize = true;
			this->titleLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.875F));
			this->titleLbl->Location = System::Drawing::Point(1036, 44);
			this->titleLbl->Name = L"titleLbl";
			this->titleLbl->Size = System::Drawing::Size(83, 39);
			this->titleLbl->TabIndex = 87;
			this->titleLbl->Text = L"Title";
			this->titleLbl->UseMnemonic = false;
			// 
			// viewer
			// 
			this->viewer->Location = System::Drawing::Point(953, 249);
			this->viewer->Multiline = true;
			this->viewer->Name = L"viewer";
			this->viewer->Size = System::Drawing::Size(678, 564);
			this->viewer->TabIndex = 88;
			// 
			// resultLbl
			// 
			this->resultLbl->AutoSize = true;
			this->resultLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->resultLbl->Location = System::Drawing::Point(947, 151);
			this->resultLbl->Name = L"resultLbl";
			this->resultLbl->Size = System::Drawing::Size(151, 31);
			this->resultLbl->TabIndex = 89;
			this->resultLbl->Text = L"Resultados";
			// 
			// actionBtn
			// 
			this->actionBtn->Location = System::Drawing::Point(953, 853);
			this->actionBtn->Name = L"actionBtn";
			this->actionBtn->Size = System::Drawing::Size(221, 84);
			this->actionBtn->TabIndex = 111;
			this->actionBtn->Text = L"Action";
			this->actionBtn->UseVisualStyleBackColor = true;
			this->actionBtn->Click += gcnew System::EventHandler(this, &AppointmentManagement::actionBtn_Click);
			// 
			// labelId1
			// 
			this->labelId1->AutoSize = true;
			this->labelId1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelId1->Location = System::Drawing::Point(234, 245);
			this->labelId1->Name = L"labelId1";
			this->labelId1->Size = System::Drawing::Size(118, 31);
			this->labelId1->TabIndex = 90;
			this->labelId1->Text = L"LabelId1";
			// 
			// labelName1
			// 
			this->labelName1->AutoSize = true;
			this->labelName1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelName1->Location = System::Drawing::Point(234, 454);
			this->labelName1->Name = L"labelName1";
			this->labelName1->Size = System::Drawing::Size(167, 31);
			this->labelName1->TabIndex = 91;
			this->labelName1->Text = L"LabelName1";
			// 
			// idTextBox1
			// 
			this->idTextBox1->Location = System::Drawing::Point(632, 249);
			this->idTextBox1->Name = L"idTextBox1";
			this->idTextBox1->Size = System::Drawing::Size(221, 31);
			this->idTextBox1->TabIndex = 92;
			// 
			// nameTextBox1
			// 
			this->nameTextBox1->Location = System::Drawing::Point(632, 456);
			this->nameTextBox1->Name = L"nameTextBox1";
			this->nameTextBox1->Size = System::Drawing::Size(221, 31);
			this->nameTextBox1->TabIndex = 96;
			// 
			// idTextBox2
			// 
			this->idTextBox2->Location = System::Drawing::Point(632, 319);
			this->idTextBox2->Name = L"idTextBox2";
			this->idTextBox2->Size = System::Drawing::Size(221, 31);
			this->idTextBox2->TabIndex = 93;
			// 
			// labelId2
			// 
			this->labelId2->AutoSize = true;
			this->labelId2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelId2->Location = System::Drawing::Point(234, 317);
			this->labelId2->Name = L"labelId2";
			this->labelId2->Size = System::Drawing::Size(118, 31);
			this->labelId2->TabIndex = 95;
			this->labelId2->Text = L"LabelId2";
			// 
			// labelName2
			// 
			this->labelName2->AutoSize = true;
			this->labelName2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelName2->Location = System::Drawing::Point(234, 531);
			this->labelName2->Name = L"labelName2";
			this->labelName2->Size = System::Drawing::Size(167, 31);
			this->labelName2->TabIndex = 100;
			this->labelName2->Text = L"LabelName2";
			// 
			// nameTextBox2
			// 
			this->nameTextBox2->Location = System::Drawing::Point(632, 533);
			this->nameTextBox2->Name = L"nameTextBox2";
			this->nameTextBox2->Size = System::Drawing::Size(221, 31);
			this->nameTextBox2->TabIndex = 97;
			// 
			// labelName3
			// 
			this->labelName3->AutoSize = true;
			this->labelName3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelName3->Location = System::Drawing::Point(234, 597);
			this->labelName3->Name = L"labelName3";
			this->labelName3->Size = System::Drawing::Size(167, 31);
			this->labelName3->TabIndex = 102;
			this->labelName3->Text = L"LabelName3";
			// 
			// nameTextBox3
			// 
			this->nameTextBox3->Location = System::Drawing::Point(632, 599);
			this->nameTextBox3->Name = L"nameTextBox3";
			this->nameTextBox3->Size = System::Drawing::Size(221, 31);
			this->nameTextBox3->TabIndex = 99;
			// 
			// labelName4
			// 
			this->labelName4->AutoSize = true;
			this->labelName4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelName4->Location = System::Drawing::Point(234, 662);
			this->labelName4->Name = L"labelName4";
			this->labelName4->Size = System::Drawing::Size(167, 31);
			this->labelName4->TabIndex = 105;
			this->labelName4->Text = L"LabelName4";
			// 
			// nameTextBox4
			// 
			this->nameTextBox4->Location = System::Drawing::Point(632, 664);
			this->nameTextBox4->Name = L"nameTextBox4";
			this->nameTextBox4->Size = System::Drawing::Size(221, 31);
			this->nameTextBox4->TabIndex = 101;
			// 
			// labelName5
			// 
			this->labelName5->AutoSize = true;
			this->labelName5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelName5->Location = System::Drawing::Point(234, 384);
			this->labelName5->Name = L"labelName5";
			this->labelName5->Size = System::Drawing::Size(167, 31);
			this->labelName5->TabIndex = 109;
			this->labelName5->Text = L"LabelName5";
			// 
			// nameTextBox5
			// 
			this->nameTextBox5->Location = System::Drawing::Point(632, 386);
			this->nameTextBox5->Name = L"nameTextBox5";
			this->nameTextBox5->Size = System::Drawing::Size(221, 31);
			this->nameTextBox5->TabIndex = 94;
			// 
			// AppointmentManagement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(1894, 1009);
			this->Controls->Add(this->nameTextBox5);
			this->Controls->Add(this->labelName5);
			this->Controls->Add(this->nameTextBox4);
			this->Controls->Add(this->labelName4);
			this->Controls->Add(this->nameTextBox3);
			this->Controls->Add(this->labelName3);
			this->Controls->Add(this->nameTextBox2);
			this->Controls->Add(this->labelName2);
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
			this->Name = L"AppointmentManagement";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AppointmentManagement";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &AppointmentManagement::AppointmentManagement_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AppointmentManagement_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		obj->Show();
	}
	private: System::Void actionBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		string res = "";
		Pet* pet = NULL;
		Appointment* appointment = NULL;
		Client* client = NULL;
		Invoice* invoice = NULL;
		bool success = false;
		int id = -1;
		int id2 = -1;
		int id3 = -1;
		int id4 = -1;
		int id5 = -1;
		float totalDue = 0.00;
		switch (this->currentAction)
		{
		case INSERT_ACTION:
			try
			{
				totalDue = (float)(Convert::ToDouble(this->nameTextBox4->Text));
				if (
					System::Int32::TryParse(this->idTextBox1->Text, id) && id > 0 && //Visit Id
					System::Int32::TryParse(this->idTextBox2->Text, id2) && id2 > 0 && // Pet Id
					!System::String::IsNullOrEmpty(this->nameTextBox1->Text) && // Year of visit
					!System::String::IsNullOrEmpty(this->nameTextBox2->Text) && // Month of visit
					!System::String::IsNullOrEmpty(this->nameTextBox3->Text) && // day of visit
					System::Int32::TryParse(this->nameTextBox5->Text, id3) && id3 > 0 && // PaymentType
					totalDue >= 0 // Payment type
					)
				{
					pet = static_cast<Pet*>(this->app->getStore().GetPets()->SearchById(id2, this->app->getStore().GetPets()->GetRoot()));

					if (pet != NULL && (id3 == 1 || id3 == 2))
					{
						appointment = new Appointment(id, "", id2
							, msclr::interop::marshal_as<string>(this->nameTextBox3->Text)
							, msclr::interop::marshal_as<string>(this->nameTextBox2->Text)
							, msclr::interop::marshal_as<string>(this->nameTextBox1->Text)
							, id3
							, 0.00
							, totalDue);
						success = this->app->getStore().GetAppointments()->Insert(appointment);

						if (success)
						{
							res = "Se Inserto Visita";
							res.append("\n\rDe la Mascota " + pet->getName() + " Con ");

							Client* client = static_cast<Client*>(this->app->getStore().GetClients()->SearchById(pet->getClientId(), this->app->getStore().GetClients()->GetRoot()));
							if (!this->app->getStore().getInvoices()->HasInvoiceId(client->getId()))
							{
								if (client != NULL)
								{
									invoice = new Invoice(client->getId(), client, pet, appointment);
									this->app->getStore().getInvoices()->Push(invoice);
								}
							}
							else {
								invoice = static_cast<Invoice*>(this->app->getStore().getInvoices()->GetObjectById(pet->getClientId()));
								invoice->setAppointment(appointment);
								this->app->getStore().getInvoices()->UpdateObject(invoice);
							}

							this->viewer->Text = gcnew String((res.append(appointment->ToString())).c_str());
						}
						else {
							this->viewer->Text = "La visita ya Existe o Id no es valido";
						}
					}
					else {
						this->viewer->Text = "El Id de la Mascota no es valido o Ya Existe o Algun Dato No es Correcto";
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
			this->nameTextBox2->Text = "";
			this->nameTextBox3->Text = "";
			this->nameTextBox4->Text = "";
			this->nameTextBox5->Text = "";
			break;
		case SEARCH_ACTION:
			this->actionBtn->Text = "Buscar";
			this->titleLbl->Text = "Buscar Visita";
			try
			{
				if (System::Int32::TryParse(this->idTextBox1->Text, id) && id > 0 &&
					System::Int32::TryParse(this->idTextBox2->Text, id2) && id2 > 0
					)
				{
					pet = static_cast<Pet*>(this->app->getStore().GetPets()->SearchById(id2, this->app->getStore().GetPets()->GetRoot()));
					appointment = static_cast<Appointment*>(this->app->getStore().GetAppointments()->SearchById(id, this->app->getStore().GetAppointments()->GetRoot()));
					if (pet != NULL && appointment != NULL && pet->getId() == appointment->getPetId())
					{
						client = static_cast<Client*>(this->app->getStore().GetClients()->SearchById(pet->getClientId(), this->app->getStore().GetClients()->GetRoot()));

						res = "Se Encontro la Mascota del Cliente: ";
						res.append(client->getName()+ "\n\r" );
						res.append("\n\rDe la Mascota " + pet->getName() + " Con ");
						this->viewer->Text = gcnew String((res.append(appointment->ToString())).c_str());
					}
					else {
						this->viewer->Text = "La Mascota no existe para ese cliente\r \n";
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
			this->nameTextBox2->Text = "";
			this->nameTextBox3->Text = "";
			this->nameTextBox4->Text = "";
			this->nameTextBox5->Text = "";
			break;
		case UPDATE_ACTION:
			try
			{
				if (System::Int32::TryParse(this->idTextBox1->Text, id) && id > 0 && //AppointmetId
					System::Int32::TryParse(this->idTextBox2->Text, id2) && id2 > 0 // Pet Id
					)
				{
					pet = static_cast<Pet*>(this->app->getStore().GetPets()->SearchById(id, this->app->getStore().GetPets()->GetRoot()));
					appointment = static_cast<Appointment*>(this->app->getStore().GetAppointments()->SearchById(id2, this->app->getStore().GetAppointments()->GetRoot()));
					if (pet != NULL && appointment != NULL && pet->getId() == appointment->getPetId() &&
						System::Int32::TryParse(this->nameTextBox5->Text, id3) && (id3 == 1 || id3 == 2)
						)
					{
						appointment->setPaymentType(id3);
						this->app->getStore().GetAppointments()->UpdateElementById(id2, appointment, this->app->getStore().GetAppointments()->GetRoot());
						res = "Se Modifico la Visita de la Mascota: ";
						res.append(pet->getName() + " Con " + "\n\r");
						this->viewer->Text = gcnew String((res.append(appointment->ToString())).c_str());
					}
					else {
						this->viewer->Text = "Los Datos Ingresados no son validos\r \n";
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
