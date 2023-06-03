#pragma once
#include "AppManager.h"
#include "Constants.h"
#include "Helpers.h"
#include "TreatmentMenu.h"
#include "PrescribedTreatment.h"

namespace PetStore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MedicationManagement
	/// </summary>
	public ref class MedicationManagement : public System::Windows::Forms::Form
	{
	public:
		MedicationManagement(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Form^ obj;
		AppManager* app;
		int currentAction = 0;
		List* medicationList;
		MedicationManagement(Form^ obj1, AppManager* app, int action)
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
				this->titleLbl->Text = "Insertar Medicacion";
				this->labelId1->Text = "Id de Mascota";
				this->labelId2->Text = "Id de Medicacion";
				this->labelName1->Text = "Anio de Ultima visita";
				this->labelName2->Text = "Mes de Ultima visita";
				this->labelName3->Text = "Dia de Ultima visita";
				this->labelName4->Text = "Tratamientos";
				this->totalPrice->Hide();
				this->totalPriceLabel->Hide();
				break;
			case SEARCH_ACTION:
				this->actionBtn->Text = "Buscar";
				this->titleLbl->Text = "Buscar Medicacion";
				this->labelId1->Text = "Id de Mascota";
				this->labelId2->Text = "Id de Medicacion";
				this->labelName1->Hide();
				this->labelName2->Hide();
				this->labelName3->Hide();
				this->labelName4->Hide();
				this->nameTextBox1->Hide();
				this->nameTextBox2->Hide();
				this->nameTextBox3->Hide();
				this->addTreatmentBtn->Hide();
				this->totalPrice->Hide();
				this->totalPriceLabel->Hide();
				break;
			case UPDATE_ACTION:
				this->actionBtn->Text = "Modificar";
				this->titleLbl->Text = "Modificar Medicacion";
				this->labelId1->Text = "Id de Mascota";
				this->labelId2->Text = "Id de Medicacion";
				this->totalPriceLabel->Text = " Precio Total";
				this->labelName1->Hide();
				this->labelName2->Hide();
				this->labelName3->Hide();
				this->labelName4->Hide();
				this->nameTextBox1->Hide();
				this->nameTextBox2->Hide();
				this->nameTextBox3->Hide();
				this->addTreatmentBtn->Hide();
				break;
			default:
				break;
			}
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MedicationManagement()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ totalPriceLabel;
	private: System::Windows::Forms::TextBox^ totalPrice;
	private: System::Windows::Forms::Button^ addTreatmentBtn;
	private: System::Windows::Forms::TextBox^ nameTextBox3;
	private: System::Windows::Forms::Label^ labelName3;
	private: System::Windows::Forms::Label^ labelName4;
	private: System::Windows::Forms::TextBox^ nameTextBox2;
	private: System::Windows::Forms::Label^ labelName2;
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
			this->labelName4 = (gcnew System::Windows::Forms::Label());
			this->nameTextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->labelName2 = (gcnew System::Windows::Forms::Label());
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
			this->nameTextBox3 = (gcnew System::Windows::Forms::TextBox());
			this->labelName3 = (gcnew System::Windows::Forms::Label());
			this->addTreatmentBtn = (gcnew System::Windows::Forms::Button());
			this->totalPriceLabel = (gcnew System::Windows::Forms::Label());
			this->totalPrice = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// labelName4
			// 
			this->labelName4->AutoSize = true;
			this->labelName4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelName4->Location = System::Drawing::Point(151, 693);
			this->labelName4->Name = L"labelName4";
			this->labelName4->Size = System::Drawing::Size(167, 31);
			this->labelName4->TabIndex = 75;
			this->labelName4->Text = L"LabelName4";
			// 
			// nameTextBox2
			// 
			this->nameTextBox2->Location = System::Drawing::Point(470, 550);
			this->nameTextBox2->Name = L"nameTextBox2";
			this->nameTextBox2->Size = System::Drawing::Size(221, 31);
			this->nameTextBox2->TabIndex = 64;
			// 
			// labelName2
			// 
			this->labelName2->AutoSize = true;
			this->labelName2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelName2->Location = System::Drawing::Point(151, 550);
			this->labelName2->Name = L"labelName2";
			this->labelName2->Size = System::Drawing::Size(167, 31);
			this->labelName2->TabIndex = 67;
			this->labelName2->Text = L"LabelName2";
			// 
			// labelId2
			// 
			this->labelId2->AutoSize = true;
			this->labelId2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelId2->Location = System::Drawing::Point(151, 342);
			this->labelId2->Name = L"labelId2";
			this->labelId2->Size = System::Drawing::Size(128, 31);
			this->labelId2->TabIndex = 62;
			this->labelId2->Text = L"totalPrice";
			// 
			// idTextBox2
			// 
			this->idTextBox2->Location = System::Drawing::Point(470, 344);
			this->idTextBox2->Name = L"idTextBox2";
			this->idTextBox2->Size = System::Drawing::Size(221, 31);
			this->idTextBox2->TabIndex = 61;
			// 
			// nameTextBox1
			// 
			this->nameTextBox1->Location = System::Drawing::Point(470, 478);
			this->nameTextBox1->Name = L"nameTextBox1";
			this->nameTextBox1->Size = System::Drawing::Size(221, 31);
			this->nameTextBox1->TabIndex = 63;
			// 
			// idTextBox1
			// 
			this->idTextBox1->Location = System::Drawing::Point(470, 273);
			this->idTextBox1->Name = L"idTextBox1";
			this->idTextBox1->Size = System::Drawing::Size(221, 31);
			this->idTextBox1->TabIndex = 60;
			// 
			// labelName1
			// 
			this->labelName1->AutoSize = true;
			this->labelName1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelName1->Location = System::Drawing::Point(151, 476);
			this->labelName1->Name = L"labelName1";
			this->labelName1->Size = System::Drawing::Size(167, 31);
			this->labelName1->TabIndex = 58;
			this->labelName1->Text = L"LabelName1";
			// 
			// labelId1
			// 
			this->labelId1->AutoSize = true;
			this->labelId1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelId1->Location = System::Drawing::Point(151, 271);
			this->labelId1->Name = L"labelId1";
			this->labelId1->Size = System::Drawing::Size(118, 31);
			this->labelId1->TabIndex = 57;
			this->labelId1->Text = L"LabelId1";
			// 
			// actionBtn
			// 
			this->actionBtn->Location = System::Drawing::Point(1005, 851);
			this->actionBtn->Name = L"actionBtn";
			this->actionBtn->Size = System::Drawing::Size(221, 84);
			this->actionBtn->TabIndex = 76;
			this->actionBtn->Text = L"Action";
			this->actionBtn->UseVisualStyleBackColor = true;
			this->actionBtn->Click += gcnew System::EventHandler(this, &MedicationManagement::actionBtn_Click);
			// 
			// resultLbl
			// 
			this->resultLbl->AutoSize = true;
			this->resultLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->resultLbl->Location = System::Drawing::Point(1075, 215);
			this->resultLbl->Name = L"resultLbl";
			this->resultLbl->Size = System::Drawing::Size(151, 31);
			this->resultLbl->TabIndex = 56;
			this->resultLbl->Text = L"Resultados";
			// 
			// viewer
			// 
			this->viewer->Location = System::Drawing::Point(780, 271);
			this->viewer->Multiline = true;
			this->viewer->Name = L"viewer";
			this->viewer->Size = System::Drawing::Size(774, 564);
			this->viewer->TabIndex = 55;
			// 
			// titleLbl
			// 
			this->titleLbl->AutoSize = true;
			this->titleLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.875F));
			this->titleLbl->Location = System::Drawing::Point(1089, 21);
			this->titleLbl->Name = L"titleLbl";
			this->titleLbl->Size = System::Drawing::Size(83, 39);
			this->titleLbl->TabIndex = 54;
			this->titleLbl->Text = L"Title";
			this->titleLbl->UseMnemonic = false;
			// 
			// nameTextBox3
			// 
			this->nameTextBox3->Location = System::Drawing::Point(470, 621);
			this->nameTextBox3->Name = L"nameTextBox3";
			this->nameTextBox3->Size = System::Drawing::Size(221, 31);
			this->nameTextBox3->TabIndex = 81;
			// 
			// labelName3
			// 
			this->labelName3->AutoSize = true;
			this->labelName3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->labelName3->Location = System::Drawing::Point(151, 621);
			this->labelName3->Name = L"labelName3";
			this->labelName3->Size = System::Drawing::Size(167, 31);
			this->labelName3->TabIndex = 82;
			this->labelName3->Text = L"LabelName3";
			// 
			// addTreatmentBtn
			// 
			this->addTreatmentBtn->Location = System::Drawing::Point(470, 700);
			this->addTreatmentBtn->Name = L"addTreatmentBtn";
			this->addTreatmentBtn->Size = System::Drawing::Size(221, 69);
			this->addTreatmentBtn->TabIndex = 85;
			this->addTreatmentBtn->Text = L"Agregar Tratamientos";
			this->addTreatmentBtn->UseVisualStyleBackColor = true;
			this->addTreatmentBtn->Click += gcnew System::EventHandler(this, &MedicationManagement::addTreatmentBtn_Click);
			// 
			// totalPriceLabel
			// 
			this->totalPriceLabel->AutoSize = true;
			this->totalPriceLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->totalPriceLabel->Location = System::Drawing::Point(151, 405);
			this->totalPriceLabel->Name = L"totalPriceLabel";
			this->totalPriceLabel->Size = System::Drawing::Size(118, 31);
			this->totalPriceLabel->TabIndex = 86;
			this->totalPriceLabel->Text = L"LabelId2";
			// 
			// totalPrice
			// 
			this->totalPrice->Location = System::Drawing::Point(470, 407);
			this->totalPrice->Name = L"totalPrice";
			this->totalPrice->Size = System::Drawing::Size(221, 31);
			this->totalPrice->TabIndex = 87;
			// 
			// MedicationManagement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(1894, 1009);
			this->Controls->Add(this->totalPrice);
			this->Controls->Add(this->totalPriceLabel);
			this->Controls->Add(this->addTreatmentBtn);
			this->Controls->Add(this->labelName3);
			this->Controls->Add(this->nameTextBox3);
			this->Controls->Add(this->labelName4);
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
			this->MaximumSize = System::Drawing::Size(1920, 1080);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(1920, 1080);
			this->Name = L"MedicationManagement";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MedicationManagement";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MedicationManagement::MedicationManagement_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MedicationManagement_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		obj->Show();
	}
	private: System::Void actionBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		string res = "";
		Appointment* appointment = NULL;
		Treatment* treatment = NULL;
		Pet* pet = NULL;
		Invoice* invoice = NULL;
		bool successAction = false;
		float totalDue = 0.00;
		int id = -1;
		int id2 = -1;
		int id3 = -1;
		int id4 = -1;
		int visitDay = -1;
		int visitMonth = -1;
		int visitYear = -1;
		int newStockQty = 0;
		int countUpdateStockItems = 0;
		bool success = false;
		float totalPrice = 0.00;
		switch (this->currentAction)
		{
		case INSERT_ACTION:
			try
			{
				if (System::Int32::TryParse(this->idTextBox1->Text, id) && id > 0 &&   // Pet Id
					System::Int32::TryParse(this->idTextBox2->Text, id2) && id2 > 0 && // Medication Id
					!System::String::IsNullOrEmpty(this->nameTextBox1->Text) && this->nameTextBox1->Text->Length == 4 && System::Int32::TryParse(this->nameTextBox1->Text, visitYear) && visitYear > 1900 && // Year
					!System::String::IsNullOrEmpty(this->nameTextBox2->Text) && this->nameTextBox2->Text->Length > 0 && this->nameTextBox2->Text->Length <= 2 && System::Int32::TryParse(this->nameTextBox2->Text, visitMonth) && visitMonth > 0 && visitMonth < 13 &&//Month
					!System::String::IsNullOrEmpty(this->nameTextBox3->Text) && this->nameTextBox3->Text->Length > 0 && this->nameTextBox3->Text->Length <= 2 && System::Int32::TryParse(this->nameTextBox3->Text, visitDay) && visitDay > 0 && visitDay < 32  //Day
					&& medicationList != NULL
					)
				{
					pet = static_cast<Pet*>(this->app->getStore().GetPets()->SearchById(id, this->app->getStore().GetPets()->GetRoot()));

					if (pet != NULL )
					{
						int diffInDays = Helpers::GetDateDifferenceInDays(stoi(pet->getBirthDay()), stoi(pet->getBirthMonth()), stoi(pet->getBirthYear()), visitDay, visitMonth, visitYear);
						if (diffInDays >= 0)
						{

							//Update Stock
							PointerNode aux = this->medicationList->GetHead();
							while (aux) {

								Treatment* searchTreatment = static_cast<Treatment*>(this->app->getStore().GetTreatments()->SearchById(aux->GetObj()->getId()));
								PrescribedTreatment* currentTreatment = static_cast<PrescribedTreatment*>(aux->GetObj());
								this->app->getStore().getLastTreatments()->Push(currentTreatment);
								totalPrice = totalPrice + currentTreatment->getTotalPrice();
								newStockQty = searchTreatment->getStockQuantity() - currentTreatment->getQuantity();
								searchTreatment->setStockQuantity(newStockQty);
								this->app->getStore().GetTreatments()->UpdateElementById(searchTreatment->getId(), searchTreatment);
								aux = aux->GetNextNode();
							}

							Medication* medication = new Medication(id2, "", id, visitDay, visitMonth, visitYear, this->medicationList, totalPrice);

							success = this->app->getStore().GetMedications()->Insert(medication);

							if (success)
							{
								res = "Se Inserto la Medicacion de Mascota : ";
								res.append(pet->getName());
								this->viewer->Text = gcnew String((res.append(medication->ToString())).c_str());

								if (!this->app->getStore().getInvoices()->HasInvoiceId(pet->getClientId()))
								{
									Client* client = static_cast<Client*>(this->app->getStore().GetClients()->SearchById(pet->getClientId(), this->app->getStore().GetClients()->GetRoot()));
									if (client != NULL)
									{
										invoice = new Invoice(this->app->getStore().getInvoices()->Length() + 1, client, pet, appointment);
										invoice->setMedication(medication);
										this->app->getStore().getInvoices()->Push(invoice);

										PointerNode hotItems = this->medicationList->GetHead();
										while (hotItems) {
											if (!this->app->getStore().getHotItems()->ExistsElement(hotItems->GetObj()->getId()))
											{
												hotItems->GetObj()->setVisits(1);
												this->app->getStore().getHotItems()->Push(hotItems->GetObj());
											}
											else {
												hotItems->GetObj()->setVisits(hotItems->GetObj()->getVisits() + 1);
												this->app->getStore().getHotItems()->UpdateObject(hotItems->GetObj());
											}
											hotItems = hotItems->GetNextNode();
										}
										
									}
								}
								else {
									
									invoice = static_cast<Invoice*>(this->app->getStore().getInvoices()->GetObjectById(pet->getClientId()));
									if (invoice != NULL)
									{
										invoice->setMedication(medication);
										this->app->getStore().getInvoices()->UpdateObject(invoice);
									}
								}
							}
							else {
								this->viewer->Text = "Error Insertar Medicamento Algun Dato no es valido";
							}
						}
						else {
							this->viewer->Text = "La fecha de ultima visita No es posterior a la fecha de nacimiento de Mascota\n";
						}

					}
					else {
						this->viewer->Text = "El Id Mascota no es valido o NO Existe";
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
			this->idTextBox2->Text = "";
			this->nameTextBox1->Text = "";
			this->nameTextBox2->Text = "";
			this->nameTextBox3->Text = "";
			break;
		case SEARCH_ACTION:
			try
			{
				if (System::Int32::TryParse(this->idTextBox1->Text, id) && id > 0 &&   // Pet Id
					System::Int32::TryParse(this->idTextBox2->Text, id2) && id2 > 0  // Medication Id
					) 
				{
					pet = static_cast<Pet*>(this->app->getStore().GetPets()->SearchById(id, this->app->getStore().GetPets()->GetRoot()));

					if (pet != NULL && !pet->getIsDeleted())
					{
						Medication* medication = this->app->getStore().GetMedications()->SearchLastMedication(id2, id, this->app->getStore().GetMedications()->GetRoot());
						if (medication != NULL)
						{
							res = "Se Encontro la Medicacion de Mascota : ";
							res.append(pet->getName());
							this->viewer->Text = gcnew String((res.append(medication->ToString()).append(medication->getTreatmentId()->ToString("prescribedTreatment"))).c_str());
						}
						else {
							this->viewer->Text = "Error al Buscar Medicamento Algun Dato no es valido";
						}

					}
					else {
						this->viewer->Text = "El Id Mascota no es valido o NO Existe";
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
			this->idTextBox2->Text = "";
			break;
		case UPDATE_ACTION:
			try
			{
				totalDue = (float)(Convert::ToDouble(this->totalPrice->Text));
				if (System::Int32::TryParse(this->idTextBox1->Text, id) && id > 0 &&   // Pet Id
					System::Int32::TryParse(this->idTextBox2->Text, id2) && id2 > 0 // Medication Id
					)
				{
					pet = static_cast<Pet*>(this->app->getStore().GetPets()->SearchById(id, this->app->getStore().GetPets()->GetRoot()));

					Medication* medication = static_cast<Medication*>(this->app->getStore().GetMedications()->SearchById(id2, this->app->getStore().GetMedications()->GetRoot()));
					if (pet != NULL && medication != NULL && pet->getId() == medication->getPetId())
					{
						medication->setTotalPrice(totalDue);
						this->app->getStore().GetMedications()->UpdateElementById(id2, medication, this->app->getStore().GetMedications()->GetRoot());
						res = "Se Modifico la Medicacion Con ";
						this->viewer->Text = gcnew String((res.append(medication->ToString())).c_str());
					}
					else {
						this->viewer->Text = "El Id Mascota no es valido o NO Existe";
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
			this->idTextBox2->Text = "";
			this->nameTextBox1->Text = "";
			this->nameTextBox2->Text = "";
			this->nameTextBox3->Text = "";
			this->totalPrice->Text = "";
			break;
		default:
			break;
		}
	}

	private: System::Void addTreatmentBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Enabled = false;

		if (medicationList == NULL)
		{
			medicationList = new List();
		}
		
		TreatmentMenu^ medicationManagementWindow = gcnew TreatmentMenu(this, this->app, this->medicationList);
		medicationManagementWindow->ShowDialog();
	}
};
}
