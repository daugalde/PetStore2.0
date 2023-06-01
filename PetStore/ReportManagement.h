#pragma once
#include "AppManager.h"
#include <algorithm>

namespace PetStore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ReportManagement
	/// </summary>
	public ref class ReportManagement : public System::Windows::Forms::Form
	{
	public:
		ReportManagement(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Form^ obj;
		AppManager* app;

		ReportManagement(Form^ obj, AppManager* app)
		{
			this->obj = obj;
			this->app = app;
			InitializeComponent();

			this->comboBox1->Items->Add("Paises en Pre Orden");
			this->comboBox1->Items->Add("Ciudades de Un Pais en Pre Orden");
			this->comboBox1->Items->Add("Clientes");
			this->comboBox1->Items->Add("Mascotas de un Cliente");
			this->comboBox1->Items->Add("Visitas de una Mascota");
			this->comboBox1->Items->Add("Tratamientos");
			this->comboBox1->Items->Add("Medicacion de una Mascota");
			this->comboBox1->Items->Add("Cliente con mas Saldo");
			this->comboBox1->Items->Add("Clientes de Credito");
			this->comboBox1->Items->Add("Cliente con mas Descuento");
			this->comboBox1->Items->Add("Ultimos Tratamientos");
			this->comboBox1->Items->Add("Tratamientos mas utilizado");
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ReportManagement()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ reportLabel;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ viewer;
	private: System::Windows::Forms::Button^ runReportBtn;
	private: System::Windows::Forms::TextBox^ idTextbox;
	private: System::Windows::Forms::Label^ idLabel;
	private: System::Windows::Forms::Label^ label1;

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
			this->runReportBtn = (gcnew System::Windows::Forms::Button());
			this->idTextbox = (gcnew System::Windows::Forms::TextBox());
			this->idLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->reportLabel = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// viewer
			// 
			this->viewer->Location = System::Drawing::Point(764, 249);
			this->viewer->Multiline = true;
			this->viewer->Name = L"viewer";
			this->viewer->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->viewer->Size = System::Drawing::Size(1058, 662);
			this->viewer->TabIndex = 61;
			// 
			// runReportBtn
			// 
			this->runReportBtn->Location = System::Drawing::Point(244, 415);
			this->runReportBtn->Name = L"runReportBtn";
			this->runReportBtn->Size = System::Drawing::Size(176, 69);
			this->runReportBtn->TabIndex = 60;
			this->runReportBtn->Text = L"Correr Reporte";
			this->runReportBtn->UseVisualStyleBackColor = true;
			this->runReportBtn->Click += gcnew System::EventHandler(this, &ReportManagement::runReportBtn_Click);
			// 
			// idTextbox
			// 
			this->idTextbox->Location = System::Drawing::Point(312, 337);
			this->idTextbox->Name = L"idTextbox";
			this->idTextbox->Size = System::Drawing::Size(416, 31);
			this->idTextbox->TabIndex = 59;
			this->idTextbox->Visible = false;
			// 
			// idLabel
			// 
			this->idLabel->AutoSize = true;
			this->idLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->idLabel->Location = System::Drawing::Point(127, 335);
			this->idLabel->Name = L"idLabel";
			this->idLabel->Size = System::Drawing::Size(37, 31);
			this->idLabel->TabIndex = 58;
			this->idLabel->Text = L"Id";
			this->idLabel->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->label1->Location = System::Drawing::Point(899, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 31);
			this->label1->TabIndex = 57;
			this->label1->Text = L"Reportes";
			// 
			// reportLabel
			// 
			this->reportLabel->AutoSize = true;
			this->reportLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->reportLabel->Location = System::Drawing::Point(128, 249);
			this->reportLabel->Name = L"reportLabel";
			this->reportLabel->Size = System::Drawing::Size(111, 31);
			this->reportLabel->TabIndex = 62;
			this->reportLabel->Text = L"Reporte";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(312, 249);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(414, 33);
			this->comboBox1->TabIndex = 63;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ReportManagement::comboBox1_SelectedIndexChanged);
			// 
			// ReportManagement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(1894, 1009);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->reportLabel);
			this->Controls->Add(this->viewer);
			this->Controls->Add(this->runReportBtn);
			this->Controls->Add(this->idTextbox);
			this->Controls->Add(this->idLabel);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->Name = L"ReportManagement";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"ReportManagement";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &ReportManagement::ReportManagement_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void runReportBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			string res = "";
			int id = -1;
			switch (this->comboBox1->SelectedIndex)
			{
			case 0:
				res = "";
				this->app->getStore().GetCountries()->PreOrder("country", res);
				this->viewer->Text = gcnew String(res.c_str());
				break;
			case 1:
				if (this->idTextbox->Text->Length != 0 && System::Int32::TryParse(this->idTextbox->Text, id) && id > 0)
				{
					Country* country = static_cast<Country*>(this->app->getStore().GetCountries()->SearchById(id, this->app->getStore().GetCountries()->GetRoot()));
					if (country != NULL)
					{
						res = "El Pais Encontrado\r\n\r\n";
						res.append(country->ToString().append("\r\nSe contro las Ciudades \r\n\r\n"));
						this->app->getStore().GetCities()->SearchAllCitiesByCountryId(id, res);
						this->viewer->Text = gcnew String((res).c_str());
					}
					else {
						this->idTextbox->Text = "";
						this->viewer->Text = "No hay Informacion relacionada a ese Id Pais";
					}
				}
				else {
					this->viewer->Text = "No hay Informacion relacionada a ese Id Pais";
				}
				break;
			case 2: 
				res = "";
				this->app->getStore().GetClients()->InOrder("client", res);
				this->viewer->Text = gcnew String(res.c_str());
				break;
			case 3:
				if (this->idTextbox->Text->Length != 0 && System::Int32::TryParse(this->idTextbox->Text, id) && id > 0)
				{
					res = "";
					this->app->getStore().GetPets()->SearchAllPetsByClientId(id, res);
					this->viewer->Text = gcnew String(res.c_str());
				}
				else {
					this->idTextbox->Text = "";
					this->viewer->Text = "No hay Informacion de mascotas relacionada a ese Id Cliente";
				}
				break;
			case 4:
				if (this->idTextbox->Text->Length != 0 && System::Int32::TryParse(this->idTextbox->Text, id) && id > 0)
				{
					res = "";
					this->app->getStore().GetAppointments()->SearchAppointmentByPetId(id,res);
					this->viewer->Text = gcnew String(res.c_str());
				}
				else {
					this->idTextbox->Text = "";
					this->viewer->Text = "No hay Informacion de mascotas relacionada a ese Id Cliente";
				}
				break;
			case 5:
				res = "El Tratamientos Encontrados\r\n\r\n";
				this->app->getStore().GetTreatments()->inorder(res);
				this->viewer->Text = gcnew String(res.c_str());
				break;
			case 6:
				if (this->idTextbox->Text->Length != 0 && System::Int32::TryParse(this->idTextbox->Text, id) && id > 0)
				{
					vector<string> dates = { };

					this->app->getStore().GetMedications()->SearchLastMedications(id,dates, this->app->getStore().GetMedications()->GetRoot());
					if (dates.size() > 0)
					{
						string lastestDate = dates.at(dates.size() - 1);
						Medication* lastMedication = new Medication();
						this->app->getStore().GetMedications()->SearchLastByDateMedication(id, lastestDate, *(lastMedication), this->app->getStore().GetMedications()->GetRoot());
						if (lastMedication != NULL)
						{
							res = "Las Medicaciones Encontrados\r\n\r\n";
							res = lastMedication->ToString();

							Pet* pet = static_cast<Pet*>(this->app->getStore().GetPets()->SearchById(id, this->app->getStore().GetPets()->GetRoot()));
							if (pet != NULL)
							{
								res.append(pet->ToString());
							}
							
							res.append("\r\n\r\n con los Tratamientos");

							PointerNode aux = lastMedication->getTreatmentId()->GetHead();
							while (aux) {

								PrescribedTreatment* currentTreatment = static_cast<PrescribedTreatment*>(aux->GetObj());
								res.append("\r\n\r\n");
								res.append(currentTreatment->ToString());
								aux = aux->GetNextNode();
							}

							this->viewer->Text = gcnew String(res.c_str());
						}
						else {
							this->viewer->Text = "No se encontro la Medicacion";
						}
					}
					else {
						this->viewer->Text = "No hay Informacion de mascotas relacionada a es a Medicaciones";
					}
				}
				else {
					this->idTextbox->Text = "";
					this->viewer->Text = "No hay Informacion de mascotas relacionada a es a Medicaciones";
				}
				
				break;
			default:
				this->viewer->Text = "Seleccione un Reporte";
				break;
			}
		}
		catch (...)
		{
			this->viewer->Text = "Datos Invalidos";
		}
		this->idTextbox->Text = "";
	}
	private: System::Void ReportManagement_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		obj->Show();
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		this->idTextbox->Text = "";
		switch (this->comboBox1->SelectedIndex)
		{
		case 1:
			this->idLabel->Text = "Id Pais";
			this->idLabel->Show();
			this->idTextbox->Show();
			break;
		case 3:
			this->idLabel->Text = "Id Cliente";
			this->idLabel->Show();
			this->idTextbox->Show();
			break;
		case 4:
		case 6:
			this->idLabel->Text = "Id Mascota";
			this->idLabel->Show();
			this->idTextbox->Show();
			break;

		default:
			this->idLabel->Text = "Id";
			this->idLabel->Hide();
			this->idTextbox->Hide();
			break;
		}
	}
	};
}
