#pragma once
#include "AppManager.h"
#include "Places.h"
#include "Constants.h"
#include "ClientManagement.h"
#include "PetManagement.h"
#include "AppointmentManagement.h"
#include "TreatmentManagement.h"
#include "MedicationManagement.h"
#include "ReportManagement.h"
#include "InvoiceManagement.h"

namespace PetStore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainPetStore
	/// </summary>
	public ref class MainPetStore : public System::Windows::Forms::Form
	{
		AppManager* app = new AppManager;

	public:
		MainPetStore(void)
		{
			app->InitStoreLoad();
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainPetStore()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ locationBtn;
	private: System::Windows::Forms::Button^ customerBtn;
	private: System::Windows::Forms::Button^ clinicBtn;
	private: System::Windows::Forms::Button^ paymentBtn;
	private: System::Windows::Forms::ContextMenuStrip^ countryContextMenuStrip;

	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ insertarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ paisToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ buscarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ paisToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ paisToolStripMenuItem2;

	private: System::Windows::Forms::ToolStripMenuItem^ facturacionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saldosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ descuentosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ facturarToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip;

	private: System::Windows::Forms::ToolStripMenuItem^ paisesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ insertCountryToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ searchCountryToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ ciudadesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ insertCityToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ searchCityToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ sucursalesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ acercaDeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ contactoToolStripMenuItem;
	private: System::Windows::Forms::Button^ branchBtn;
	private: System::Windows::Forms::ContextMenuStrip^ customerContextMenuStrip;

	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ insertarToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ buscarToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ mascotasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ insertarToolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ buscarToolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ visitasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ insertarToolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^ buscarToolStripMenuItem5;
	private: System::Windows::Forms::ContextMenuStrip^ clinicContextMenuStrip;

	private: System::Windows::Forms::ToolStripMenuItem^ tratamientosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ insertarToolStripMenuItem6;
	private: System::Windows::Forms::ToolStripMenuItem^ buscarToolStripMenuItem6;
	private: System::Windows::Forms::ToolStripMenuItem^ medicamentosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ insertarToolStripMenuItem7;
	private: System::Windows::Forms::ToolStripMenuItem^ buscarToolStripMenuItem7;
	private: System::Windows::Forms::ContextMenuStrip^ paymentContextMenuStrip;

	private: System::Windows::Forms::ToolStripMenuItem^ facturacionToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ descuentoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saldoToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ mascotasToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ visitasToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ tratamientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ medicacionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mascotasToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ visitasToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ tratamientoToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ medicacionToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ eliminarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modificarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ eliminarToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ modificarToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ eliminarToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ modificarToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ eliminarToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ mascotaToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ modificarToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ modificarToolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ modificarToolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^ eliminarToolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ modficarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ paisToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ mascotasToolStripMenuItem3;

	private: System::Windows::Forms::ToolStripMenuItem^ paisToolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadToolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ mascotasToolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ visitasToolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ tratamientoToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ medicacionToolStripMenuItem2;



















	private: System::ComponentModel::IContainer^ components;



	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainPetStore::typeid));
			this->locationBtn = (gcnew System::Windows::Forms::Button());
			this->customerBtn = (gcnew System::Windows::Forms::Button());
			this->clinicBtn = (gcnew System::Windows::Forms::Button());
			this->paymentBtn = (gcnew System::Windows::Forms::Button());
			this->countryContextMenuStrip = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->paisesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->insertCountryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->searchCountryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eliminarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->insertCityToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->searchCityToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eliminarToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->insertarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paisToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mascotasToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->visitasToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tratamientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->medicacionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buscarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paisToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mascotasToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->visitasToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tratamientoToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->medicacionToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eliminarToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paisToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mascotasToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modficarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paisToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mascotasToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->visitasToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tratamientoToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->medicacionToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paisToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facturacionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saldosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->descuentosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facturarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->sucursalesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->acercaDeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contactoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->branchBtn = (gcnew System::Windows::Forms::Button());
			this->customerContextMenuStrip = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->clientesToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->insertarToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buscarToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eliminarToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mascotasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->insertarToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buscarToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eliminarToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mascotaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->visitasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->insertarToolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buscarToolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clinicContextMenuStrip = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->tratamientosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->insertarToolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buscarToolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->medicamentosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->insertarToolStripMenuItem7 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buscarToolStripMenuItem7 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarToolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paymentContextMenuStrip = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->facturacionToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->descuentoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saldoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->countryContextMenuStrip->SuspendLayout();
			this->menuStrip->SuspendLayout();
			this->customerContextMenuStrip->SuspendLayout();
			this->clinicContextMenuStrip->SuspendLayout();
			this->paymentContextMenuStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// locationBtn
			// 
			this->locationBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->locationBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"locationBtn.Image")));
			this->locationBtn->Location = System::Drawing::Point(200, 200);
			this->locationBtn->Name = L"locationBtn";
			this->locationBtn->Size = System::Drawing::Size(200, 200);
			this->locationBtn->TabIndex = 0;
			this->locationBtn->Text = L"Lugares";
			this->locationBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->locationBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->locationBtn->UseVisualStyleBackColor = true;
			this->locationBtn->Click += gcnew System::EventHandler(this, &MainPetStore::locationBtn_Click);
			// 
			// customerBtn
			// 
			this->customerBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->customerBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"customerBtn.Image")));
			this->customerBtn->Location = System::Drawing::Point(1000, 200);
			this->customerBtn->Name = L"customerBtn";
			this->customerBtn->Size = System::Drawing::Size(200, 200);
			this->customerBtn->TabIndex = 1;
			this->customerBtn->Text = L"Clientes";
			this->customerBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->customerBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->customerBtn->UseVisualStyleBackColor = true;
			this->customerBtn->Click += gcnew System::EventHandler(this, &MainPetStore::customerBtn_Click);
			// 
			// clinicBtn
			// 
			this->clinicBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clinicBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clinicBtn.Image")));
			this->clinicBtn->Location = System::Drawing::Point(200, 600);
			this->clinicBtn->Name = L"clinicBtn";
			this->clinicBtn->Size = System::Drawing::Size(200, 200);
			this->clinicBtn->TabIndex = 2;
			this->clinicBtn->Text = L"Clinica";
			this->clinicBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->clinicBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->clinicBtn->UseVisualStyleBackColor = true;
			this->clinicBtn->Click += gcnew System::EventHandler(this, &MainPetStore::clinicBtn_Click);
			// 
			// paymentBtn
			// 
			this->paymentBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->paymentBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"paymentBtn.Image")));
			this->paymentBtn->Location = System::Drawing::Point(1000, 600);
			this->paymentBtn->Name = L"paymentBtn";
			this->paymentBtn->Size = System::Drawing::Size(200, 200);
			this->paymentBtn->TabIndex = 3;
			this->paymentBtn->Text = L"Facturar";
			this->paymentBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->paymentBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->paymentBtn->UseVisualStyleBackColor = true;
			this->paymentBtn->Click += gcnew System::EventHandler(this, &MainPetStore::paymentBtn_Click);
			// 
			// countryContextMenuStrip
			// 
			this->countryContextMenuStrip->ImageScalingSize = System::Drawing::Size(32, 32);
			this->countryContextMenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->paisesToolStripMenuItem,
					this->ciudadesToolStripMenuItem
			});
			this->countryContextMenuStrip->Name = L"contextMenuStrip1";
			this->countryContextMenuStrip->Size = System::Drawing::Size(203, 84);
			// 
			// paisesToolStripMenuItem
			// 
			this->paisesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->insertCountryToolStripMenuItem,
					this->searchCountryToolStripMenuItem, this->eliminarToolStripMenuItem, this->modificarToolStripMenuItem
			});
			this->paisesToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"paisesToolStripMenuItem.Image")));
			this->paisesToolStripMenuItem->Name = L"paisesToolStripMenuItem";
			this->paisesToolStripMenuItem->Size = System::Drawing::Size(202, 40);
			this->paisesToolStripMenuItem->Text = L"Paises";
			// 
			// insertCountryToolStripMenuItem
			// 
			this->insertCountryToolStripMenuItem->Name = L"insertCountryToolStripMenuItem";
			this->insertCountryToolStripMenuItem->Size = System::Drawing::Size(248, 44);
			this->insertCountryToolStripMenuItem->Text = L"Insertar";
			this->insertCountryToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainPetStore::insertCountryToolStripMenuItem_Click);
			// 
			// searchCountryToolStripMenuItem
			// 
			this->searchCountryToolStripMenuItem->Name = L"searchCountryToolStripMenuItem";
			this->searchCountryToolStripMenuItem->Size = System::Drawing::Size(248, 44);
			this->searchCountryToolStripMenuItem->Text = L"Buscar";
			this->searchCountryToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainPetStore::searchCountryToolStripMenuItem_Click);
			// 
			// eliminarToolStripMenuItem
			// 
			this->eliminarToolStripMenuItem->Name = L"eliminarToolStripMenuItem";
			this->eliminarToolStripMenuItem->Size = System::Drawing::Size(248, 44);
			this->eliminarToolStripMenuItem->Text = L"Eliminar";
			this->eliminarToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainPetStore::eliminarToolStripMenuItem_Click);
			// 
			// modificarToolStripMenuItem
			// 
			this->modificarToolStripMenuItem->Name = L"modificarToolStripMenuItem";
			this->modificarToolStripMenuItem->Size = System::Drawing::Size(248, 44);
			this->modificarToolStripMenuItem->Text = L"Modificar";
			this->modificarToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainPetStore::modificarToolStripMenuItem_Click);
			// 
			// ciudadesToolStripMenuItem
			// 
			this->ciudadesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->insertCityToolStripMenuItem,
					this->searchCityToolStripMenuItem, this->eliminarToolStripMenuItem1, this->modificarToolStripMenuItem1
			});
			this->ciudadesToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ciudadesToolStripMenuItem.Image")));
			this->ciudadesToolStripMenuItem->Name = L"ciudadesToolStripMenuItem";
			this->ciudadesToolStripMenuItem->Size = System::Drawing::Size(202, 40);
			this->ciudadesToolStripMenuItem->Text = L"Ciudades";
			// 
			// insertCityToolStripMenuItem
			// 
			this->insertCityToolStripMenuItem->Name = L"insertCityToolStripMenuItem";
			this->insertCityToolStripMenuItem->Size = System::Drawing::Size(248, 44);
			this->insertCityToolStripMenuItem->Text = L"Insertar";
			this->insertCityToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainPetStore::insertCityToolStripMenuItem_Click);
			// 
			// searchCityToolStripMenuItem
			// 
			this->searchCityToolStripMenuItem->Name = L"searchCityToolStripMenuItem";
			this->searchCityToolStripMenuItem->Size = System::Drawing::Size(248, 44);
			this->searchCityToolStripMenuItem->Text = L"Buscar";
			this->searchCityToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainPetStore::searchCityToolStripMenuItem_Click);
			// 
			// eliminarToolStripMenuItem1
			// 
			this->eliminarToolStripMenuItem1->Name = L"eliminarToolStripMenuItem1";
			this->eliminarToolStripMenuItem1->Size = System::Drawing::Size(248, 44);
			this->eliminarToolStripMenuItem1->Text = L"Eliminar";
			this->eliminarToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainPetStore::eliminarToolStripMenuItem1_Click);
			// 
			// modificarToolStripMenuItem1
			// 
			this->modificarToolStripMenuItem1->Name = L"modificarToolStripMenuItem1";
			this->modificarToolStripMenuItem1->Size = System::Drawing::Size(248, 44);
			this->modificarToolStripMenuItem1->Text = L"Modificar";
			this->modificarToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainPetStore::modificarToolStripMenuItem1_Click);
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->insertarToolStripMenuItem,
					this->buscarToolStripMenuItem, this->eliminarToolStripMenuItem4, this->modficarToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(199, 36);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// insertarToolStripMenuItem
			// 
			this->insertarToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->paisToolStripMenuItem,
					this->ciudadToolStripMenuItem, this->clientesToolStripMenuItem, this->mascotasToolStripMenuItem1, this->visitasToolStripMenuItem1,
					this->tratamientoToolStripMenuItem, this->medicacionToolStripMenuItem
			});
			this->insertarToolStripMenuItem->Name = L"insertarToolStripMenuItem";
			this->insertarToolStripMenuItem->Size = System::Drawing::Size(242, 44);
			this->insertarToolStripMenuItem->Text = L"Insertar";
			// 
			// paisToolStripMenuItem
			// 
			this->paisToolStripMenuItem->Name = L"paisToolStripMenuItem";
			this->paisToolStripMenuItem->Size = System::Drawing::Size(274, 44);
			this->paisToolStripMenuItem->Text = L"Pais";
			this->paisToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainPetStore::paisToolStripMenuItem_Click);
			// 
			// ciudadToolStripMenuItem
			// 
			this->ciudadToolStripMenuItem->Name = L"ciudadToolStripMenuItem";
			this->ciudadToolStripMenuItem->Size = System::Drawing::Size(274, 44);
			this->ciudadToolStripMenuItem->Text = L"Ciudad";
			this->ciudadToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainPetStore::ciudadToolStripMenuItem_Click);
			// 
			// clientesToolStripMenuItem
			// 
			this->clientesToolStripMenuItem->Name = L"clientesToolStripMenuItem";
			this->clientesToolStripMenuItem->Size = System::Drawing::Size(274, 44);
			this->clientesToolStripMenuItem->Text = L"Clientes";
			this->clientesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainPetStore::clientesToolStripMenuItem_Click);
			// 
			// mascotasToolStripMenuItem1
			// 
			this->mascotasToolStripMenuItem1->Name = L"mascotasToolStripMenuItem1";
			this->mascotasToolStripMenuItem1->Size = System::Drawing::Size(274, 44);
			this->mascotasToolStripMenuItem1->Text = L"Mascotas";
			this->mascotasToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainPetStore::mascotasToolStripMenuItem1_Click);
			// 
			// visitasToolStripMenuItem1
			// 
			this->visitasToolStripMenuItem1->Name = L"visitasToolStripMenuItem1";
			this->visitasToolStripMenuItem1->Size = System::Drawing::Size(274, 44);
			this->visitasToolStripMenuItem1->Text = L"Visitas";
			this->visitasToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainPetStore::visitasToolStripMenuItem1_Click);
			// 
			// tratamientoToolStripMenuItem
			// 
			this->tratamientoToolStripMenuItem->Name = L"tratamientoToolStripMenuItem";
			this->tratamientoToolStripMenuItem->Size = System::Drawing::Size(274, 44);
			this->tratamientoToolStripMenuItem->Text = L"Tratamiento";
			this->tratamientoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainPetStore::tratamientoToolStripMenuItem_Click);
			// 
			// medicacionToolStripMenuItem
			// 
			this->medicacionToolStripMenuItem->Name = L"medicacionToolStripMenuItem";
			this->medicacionToolStripMenuItem->Size = System::Drawing::Size(274, 44);
			this->medicacionToolStripMenuItem->Text = L"Medicacion";
			this->medicacionToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainPetStore::medicacionToolStripMenuItem_Click);
			// 
			// buscarToolStripMenuItem
			// 
			this->buscarToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->paisToolStripMenuItem1,
					this->ciudadToolStripMenuItem1, this->clientesToolStripMenuItem1, this->mascotasToolStripMenuItem2, this->visitasToolStripMenuItem2,
					this->tratamientoToolStripMenuItem1, this->medicacionToolStripMenuItem1
			});
			this->buscarToolStripMenuItem->Name = L"buscarToolStripMenuItem";
			this->buscarToolStripMenuItem->Size = System::Drawing::Size(242, 44);
			this->buscarToolStripMenuItem->Text = L"Buscar";
			// 
			// paisToolStripMenuItem1
			// 
			this->paisToolStripMenuItem1->Name = L"paisToolStripMenuItem1";
			this->paisToolStripMenuItem1->Size = System::Drawing::Size(274, 44);
			this->paisToolStripMenuItem1->Text = L"Pais";
			this->paisToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainPetStore::paisToolStripMenuItem1_Click);
			// 
			// ciudadToolStripMenuItem1
			// 
			this->ciudadToolStripMenuItem1->Name = L"ciudadToolStripMenuItem1";
			this->ciudadToolStripMenuItem1->Size = System::Drawing::Size(274, 44);
			this->ciudadToolStripMenuItem1->Text = L"Ciudad";
			this->ciudadToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainPetStore::ciudadToolStripMenuItem1_Click);
			// 
			// clientesToolStripMenuItem1
			// 
			this->clientesToolStripMenuItem1->Name = L"clientesToolStripMenuItem1";
			this->clientesToolStripMenuItem1->Size = System::Drawing::Size(274, 44);
			this->clientesToolStripMenuItem1->Text = L"Clientes";
			this->clientesToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainPetStore::clientesToolStripMenuItem1_Click);
			// 
			// mascotasToolStripMenuItem2
			// 
			this->mascotasToolStripMenuItem2->Name = L"mascotasToolStripMenuItem2";
			this->mascotasToolStripMenuItem2->Size = System::Drawing::Size(274, 44);
			this->mascotasToolStripMenuItem2->Text = L"Mascotas";
			this->mascotasToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MainPetStore::mascotasToolStripMenuItem2_Click);
			// 
			// visitasToolStripMenuItem2
			// 
			this->visitasToolStripMenuItem2->Name = L"visitasToolStripMenuItem2";
			this->visitasToolStripMenuItem2->Size = System::Drawing::Size(274, 44);
			this->visitasToolStripMenuItem2->Text = L"Visitas";
			this->visitasToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MainPetStore::visitasToolStripMenuItem2_Click);
			// 
			// tratamientoToolStripMenuItem1
			// 
			this->tratamientoToolStripMenuItem1->Name = L"tratamientoToolStripMenuItem1";
			this->tratamientoToolStripMenuItem1->Size = System::Drawing::Size(274, 44);
			this->tratamientoToolStripMenuItem1->Text = L"Tratamiento";
			this->tratamientoToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainPetStore::tratamientoToolStripMenuItem1_Click);
			// 
			// medicacionToolStripMenuItem1
			// 
			this->medicacionToolStripMenuItem1->Name = L"medicacionToolStripMenuItem1";
			this->medicacionToolStripMenuItem1->Size = System::Drawing::Size(274, 44);
			this->medicacionToolStripMenuItem1->Text = L"Medicacion";
			this->medicacionToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainPetStore::medicacionToolStripMenuItem1_Click);
			// 
			// eliminarToolStripMenuItem4
			// 
			this->eliminarToolStripMenuItem4->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->paisToolStripMenuItem3,
					this->ciudadToolStripMenuItem3, this->clientesToolStripMenuItem3, this->mascotasToolStripMenuItem3
			});
			this->eliminarToolStripMenuItem4->Name = L"eliminarToolStripMenuItem4";
			this->eliminarToolStripMenuItem4->Size = System::Drawing::Size(242, 44);
			this->eliminarToolStripMenuItem4->Text = L"Eliminar";
			// 
			// paisToolStripMenuItem3
			// 
			this->paisToolStripMenuItem3->Name = L"paisToolStripMenuItem3";
			this->paisToolStripMenuItem3->Size = System::Drawing::Size(246, 44);
			this->paisToolStripMenuItem3->Text = L"Pais";
			this->paisToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MainPetStore::paisToolStripMenuItem3_Click);
			// 
			// ciudadToolStripMenuItem3
			// 
			this->ciudadToolStripMenuItem3->Name = L"ciudadToolStripMenuItem3";
			this->ciudadToolStripMenuItem3->Size = System::Drawing::Size(246, 44);
			this->ciudadToolStripMenuItem3->Text = L"Ciudad";
			this->ciudadToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MainPetStore::ciudadToolStripMenuItem3_Click);
			// 
			// clientesToolStripMenuItem3
			// 
			this->clientesToolStripMenuItem3->Name = L"clientesToolStripMenuItem3";
			this->clientesToolStripMenuItem3->Size = System::Drawing::Size(246, 44);
			this->clientesToolStripMenuItem3->Text = L"Clientes";
			this->clientesToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MainPetStore::clientesToolStripMenuItem3_Click);
			// 
			// mascotasToolStripMenuItem3
			// 
			this->mascotasToolStripMenuItem3->Name = L"mascotasToolStripMenuItem3";
			this->mascotasToolStripMenuItem3->Size = System::Drawing::Size(246, 44);
			this->mascotasToolStripMenuItem3->Text = L"Mascotas";
			this->mascotasToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MainPetStore::mascotasToolStripMenuItem3_Click);
			// 
			// modficarToolStripMenuItem
			// 
			this->modficarToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->paisToolStripMenuItem4,
					this->ciudadToolStripMenuItem4, this->clientesToolStripMenuItem4, this->mascotasToolStripMenuItem4, this->visitasToolStripMenuItem4,
					this->tratamientoToolStripMenuItem2, this->medicacionToolStripMenuItem2
			});
			this->modficarToolStripMenuItem->Name = L"modficarToolStripMenuItem";
			this->modficarToolStripMenuItem->Size = System::Drawing::Size(242, 44);
			this->modficarToolStripMenuItem->Text = L"Modficar";
			// 
			// paisToolStripMenuItem4
			// 
			this->paisToolStripMenuItem4->Name = L"paisToolStripMenuItem4";
			this->paisToolStripMenuItem4->Size = System::Drawing::Size(305, 44);
			this->paisToolStripMenuItem4->Text = L"Pais";
			this->paisToolStripMenuItem4->Click += gcnew System::EventHandler(this, &MainPetStore::paisToolStripMenuItem4_Click);
			// 
			// ciudadToolStripMenuItem4
			// 
			this->ciudadToolStripMenuItem4->Name = L"ciudadToolStripMenuItem4";
			this->ciudadToolStripMenuItem4->Size = System::Drawing::Size(305, 44);
			this->ciudadToolStripMenuItem4->Text = L"Ciudad";
			this->ciudadToolStripMenuItem4->Click += gcnew System::EventHandler(this, &MainPetStore::ciudadToolStripMenuItem4_Click);
			// 
			// clientesToolStripMenuItem4
			// 
			this->clientesToolStripMenuItem4->Name = L"clientesToolStripMenuItem4";
			this->clientesToolStripMenuItem4->Size = System::Drawing::Size(305, 44);
			this->clientesToolStripMenuItem4->Text = L"Clientes";
			this->clientesToolStripMenuItem4->Click += gcnew System::EventHandler(this, &MainPetStore::clientesToolStripMenuItem4_Click);
			// 
			// mascotasToolStripMenuItem4
			// 
			this->mascotasToolStripMenuItem4->Name = L"mascotasToolStripMenuItem4";
			this->mascotasToolStripMenuItem4->Size = System::Drawing::Size(305, 44);
			this->mascotasToolStripMenuItem4->Text = L"Mascotas";
			this->mascotasToolStripMenuItem4->Click += gcnew System::EventHandler(this, &MainPetStore::mascotasToolStripMenuItem4_Click);
			// 
			// visitasToolStripMenuItem4
			// 
			this->visitasToolStripMenuItem4->Name = L"visitasToolStripMenuItem4";
			this->visitasToolStripMenuItem4->Size = System::Drawing::Size(305, 44);
			this->visitasToolStripMenuItem4->Text = L"Visitas";
			this->visitasToolStripMenuItem4->Click += gcnew System::EventHandler(this, &MainPetStore::visitasToolStripMenuItem4_Click);
			// 
			// tratamientoToolStripMenuItem2
			// 
			this->tratamientoToolStripMenuItem2->Name = L"tratamientoToolStripMenuItem2";
			this->tratamientoToolStripMenuItem2->Size = System::Drawing::Size(305, 44);
			this->tratamientoToolStripMenuItem2->Text = L"Tratamiento";
			this->tratamientoToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MainPetStore::tratamientoToolStripMenuItem2_Click);
			// 
			// medicacionToolStripMenuItem2
			// 
			this->medicacionToolStripMenuItem2->Name = L"medicacionToolStripMenuItem2";
			this->medicacionToolStripMenuItem2->Size = System::Drawing::Size(305, 44);
			this->medicacionToolStripMenuItem2->Text = L"Medicamentos";
			this->medicacionToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MainPetStore::medicacionToolStripMenuItem2_Click);
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->paisToolStripMenuItem2 });
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(127, 36);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// paisToolStripMenuItem2
			// 
			this->paisToolStripMenuItem2->Name = L"paisToolStripMenuItem2";
			this->paisToolStripMenuItem2->Size = System::Drawing::Size(399, 44);
			this->paisToolStripMenuItem2->Text = L"Mostrar Menu Reportes";
			this->paisToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MainPetStore::paisToolStripMenuItem2_Click);
			// 
			// facturacionToolStripMenuItem
			// 
			this->facturacionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->saldosToolStripMenuItem,
					this->descuentosToolStripMenuItem, this->facturarToolStripMenuItem
			});
			this->facturacionToolStripMenuItem->Name = L"facturacionToolStripMenuItem";
			this->facturacionToolStripMenuItem->Size = System::Drawing::Size(155, 36);
			this->facturacionToolStripMenuItem->Text = L"Facturacion";
			// 
			// saldosToolStripMenuItem
			// 
			this->saldosToolStripMenuItem->Name = L"saldosToolStripMenuItem";
			this->saldosToolStripMenuItem->Size = System::Drawing::Size(271, 44);
			this->saldosToolStripMenuItem->Text = L"Saldos";
			// 
			// descuentosToolStripMenuItem
			// 
			this->descuentosToolStripMenuItem->Name = L"descuentosToolStripMenuItem";
			this->descuentosToolStripMenuItem->Size = System::Drawing::Size(271, 44);
			this->descuentosToolStripMenuItem->Text = L"Descuentos";
			// 
			// facturarToolStripMenuItem
			// 
			this->facturarToolStripMenuItem->Name = L"facturarToolStripMenuItem";
			this->facturarToolStripMenuItem->Size = System::Drawing::Size(271, 44);
			this->facturarToolStripMenuItem->Text = L"Facturar";
			// 
			// menuStrip
			// 
			this->menuStrip->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->mantenimientoToolStripMenuItem,
					this->reportesToolStripMenuItem, this->facturacionToolStripMenuItem, this->sucursalesToolStripMenuItem, this->acercaDeToolStripMenuItem,
					this->contactoToolStripMenuItem
			});
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Size = System::Drawing::Size(1894, 40);
			this->menuStrip->TabIndex = 4;
			this->menuStrip->Text = L"menuStrip1";
			// 
			// sucursalesToolStripMenuItem
			// 
			this->sucursalesToolStripMenuItem->Name = L"sucursalesToolStripMenuItem";
			this->sucursalesToolStripMenuItem->Size = System::Drawing::Size(145, 36);
			this->sucursalesToolStripMenuItem->Text = L"Sucursales";
			// 
			// acercaDeToolStripMenuItem
			// 
			this->acercaDeToolStripMenuItem->Name = L"acercaDeToolStripMenuItem";
			this->acercaDeToolStripMenuItem->Size = System::Drawing::Size(138, 36);
			this->acercaDeToolStripMenuItem->Text = L"Acerca de";
			// 
			// contactoToolStripMenuItem
			// 
			this->contactoToolStripMenuItem->Name = L"contactoToolStripMenuItem";
			this->contactoToolStripMenuItem->Size = System::Drawing::Size(130, 36);
			this->contactoToolStripMenuItem->Text = L"Contacto";
			// 
			// branchBtn
			// 
			this->branchBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->branchBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"branchBtn.Image")));
			this->branchBtn->Location = System::Drawing::Point(1496, 393);
			this->branchBtn->Name = L"branchBtn";
			this->branchBtn->Size = System::Drawing::Size(200, 200);
			this->branchBtn->TabIndex = 5;
			this->branchBtn->Text = L"Sucursales";
			this->branchBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->branchBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->branchBtn->UseVisualStyleBackColor = true;
			// 
			// customerContextMenuStrip
			// 
			this->customerContextMenuStrip->ImageScalingSize = System::Drawing::Size(32, 32);
			this->customerContextMenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->clientesToolStripMenuItem2,
					this->mascotasToolStripMenuItem, this->visitasToolStripMenuItem
			});
			this->customerContextMenuStrip->Name = L"contextMenuStrip2";
			this->customerContextMenuStrip->Size = System::Drawing::Size(204, 124);
			// 
			// clientesToolStripMenuItem2
			// 
			this->clientesToolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->insertarToolStripMenuItem3,
					this->buscarToolStripMenuItem3, this->eliminarToolStripMenuItem2, this->modificarToolStripMenuItem2
			});
			this->clientesToolStripMenuItem2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clientesToolStripMenuItem2.Image")));
			this->clientesToolStripMenuItem2->Name = L"clientesToolStripMenuItem2";
			this->clientesToolStripMenuItem2->Size = System::Drawing::Size(203, 40);
			this->clientesToolStripMenuItem2->Text = L"Clientes";
			// 
			// insertarToolStripMenuItem3
			// 
			this->insertarToolStripMenuItem3->Name = L"insertarToolStripMenuItem3";
			this->insertarToolStripMenuItem3->Size = System::Drawing::Size(248, 44);
			this->insertarToolStripMenuItem3->Text = L"Insertar";
			this->insertarToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MainPetStore::insertarToolStripMenuItem3_Click);
			// 
			// buscarToolStripMenuItem3
			// 
			this->buscarToolStripMenuItem3->Name = L"buscarToolStripMenuItem3";
			this->buscarToolStripMenuItem3->Size = System::Drawing::Size(248, 44);
			this->buscarToolStripMenuItem3->Text = L"Buscar";
			this->buscarToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MainPetStore::buscarToolStripMenuItem3_Click);
			// 
			// eliminarToolStripMenuItem2
			// 
			this->eliminarToolStripMenuItem2->Name = L"eliminarToolStripMenuItem2";
			this->eliminarToolStripMenuItem2->Size = System::Drawing::Size(248, 44);
			this->eliminarToolStripMenuItem2->Text = L"Eliminar";
			this->eliminarToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MainPetStore::eliminarToolStripMenuItem2_Click);
			// 
			// modificarToolStripMenuItem2
			// 
			this->modificarToolStripMenuItem2->Name = L"modificarToolStripMenuItem2";
			this->modificarToolStripMenuItem2->Size = System::Drawing::Size(248, 44);
			this->modificarToolStripMenuItem2->Text = L"Modificar";
			this->modificarToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MainPetStore::modificarToolStripMenuItem2_Click);
			// 
			// mascotasToolStripMenuItem
			// 
			this->mascotasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->insertarToolStripMenuItem4,
					this->buscarToolStripMenuItem4, this->eliminarToolStripMenuItem3, this->mascotaToolStripMenuItem
			});
			this->mascotasToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mascotasToolStripMenuItem.Image")));
			this->mascotasToolStripMenuItem->Name = L"mascotasToolStripMenuItem";
			this->mascotasToolStripMenuItem->Size = System::Drawing::Size(203, 40);
			this->mascotasToolStripMenuItem->Text = L"Mascotas";
			// 
			// insertarToolStripMenuItem4
			// 
			this->insertarToolStripMenuItem4->Name = L"insertarToolStripMenuItem4";
			this->insertarToolStripMenuItem4->Size = System::Drawing::Size(248, 44);
			this->insertarToolStripMenuItem4->Text = L"Insertar";
			this->insertarToolStripMenuItem4->Click += gcnew System::EventHandler(this, &MainPetStore::insertarToolStripMenuItem4_Click);
			// 
			// buscarToolStripMenuItem4
			// 
			this->buscarToolStripMenuItem4->Name = L"buscarToolStripMenuItem4";
			this->buscarToolStripMenuItem4->Size = System::Drawing::Size(248, 44);
			this->buscarToolStripMenuItem4->Text = L"Buscar";
			this->buscarToolStripMenuItem4->Click += gcnew System::EventHandler(this, &MainPetStore::buscarToolStripMenuItem4_Click);
			// 
			// eliminarToolStripMenuItem3
			// 
			this->eliminarToolStripMenuItem3->Name = L"eliminarToolStripMenuItem3";
			this->eliminarToolStripMenuItem3->Size = System::Drawing::Size(248, 44);
			this->eliminarToolStripMenuItem3->Text = L"Eliminar";
			this->eliminarToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MainPetStore::eliminarToolStripMenuItem3_Click);
			// 
			// mascotaToolStripMenuItem
			// 
			this->mascotaToolStripMenuItem->Name = L"mascotaToolStripMenuItem";
			this->mascotaToolStripMenuItem->Size = System::Drawing::Size(248, 44);
			this->mascotaToolStripMenuItem->Text = L"Modificar";
			this->mascotaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainPetStore::mascotaToolStripMenuItem_Click);
			// 
			// visitasToolStripMenuItem
			// 
			this->visitasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->insertarToolStripMenuItem5,
					this->buscarToolStripMenuItem5, this->modificarToolStripMenuItem3
			});
			this->visitasToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"visitasToolStripMenuItem.Image")));
			this->visitasToolStripMenuItem->Name = L"visitasToolStripMenuItem";
			this->visitasToolStripMenuItem->Size = System::Drawing::Size(203, 40);
			this->visitasToolStripMenuItem->Text = L"Visitas";
			// 
			// insertarToolStripMenuItem5
			// 
			this->insertarToolStripMenuItem5->Name = L"insertarToolStripMenuItem5";
			this->insertarToolStripMenuItem5->Size = System::Drawing::Size(248, 44);
			this->insertarToolStripMenuItem5->Text = L"Insertar";
			this->insertarToolStripMenuItem5->Click += gcnew System::EventHandler(this, &MainPetStore::insertarToolStripMenuItem5_Click);
			// 
			// buscarToolStripMenuItem5
			// 
			this->buscarToolStripMenuItem5->Name = L"buscarToolStripMenuItem5";
			this->buscarToolStripMenuItem5->Size = System::Drawing::Size(248, 44);
			this->buscarToolStripMenuItem5->Text = L"Buscar";
			this->buscarToolStripMenuItem5->Click += gcnew System::EventHandler(this, &MainPetStore::buscarToolStripMenuItem5_Click);
			// 
			// modificarToolStripMenuItem3
			// 
			this->modificarToolStripMenuItem3->Name = L"modificarToolStripMenuItem3";
			this->modificarToolStripMenuItem3->Size = System::Drawing::Size(248, 44);
			this->modificarToolStripMenuItem3->Text = L"Modificar";
			this->modificarToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MainPetStore::modificarToolStripMenuItem3_Click);
			// 
			// clinicContextMenuStrip
			// 
			this->clinicContextMenuStrip->ImageScalingSize = System::Drawing::Size(32, 32);
			this->clinicContextMenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->tratamientosToolStripMenuItem,
					this->medicamentosToolStripMenuItem
			});
			this->clinicContextMenuStrip->Name = L"contextMenuStrip3";
			this->clinicContextMenuStrip->Size = System::Drawing::Size(263, 84);
			// 
			// tratamientosToolStripMenuItem
			// 
			this->tratamientosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->insertarToolStripMenuItem6,
					this->buscarToolStripMenuItem6, this->modificarToolStripMenuItem4
			});
			this->tratamientosToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tratamientosToolStripMenuItem.Image")));
			this->tratamientosToolStripMenuItem->Name = L"tratamientosToolStripMenuItem";
			this->tratamientosToolStripMenuItem->Size = System::Drawing::Size(262, 40);
			this->tratamientosToolStripMenuItem->Text = L"Tratamientos";
			// 
			// insertarToolStripMenuItem6
			// 
			this->insertarToolStripMenuItem6->Name = L"insertarToolStripMenuItem6";
			this->insertarToolStripMenuItem6->Size = System::Drawing::Size(248, 44);
			this->insertarToolStripMenuItem6->Text = L"Insertar";
			this->insertarToolStripMenuItem6->Click += gcnew System::EventHandler(this, &MainPetStore::insertarToolStripMenuItem6_Click);
			// 
			// buscarToolStripMenuItem6
			// 
			this->buscarToolStripMenuItem6->Name = L"buscarToolStripMenuItem6";
			this->buscarToolStripMenuItem6->Size = System::Drawing::Size(248, 44);
			this->buscarToolStripMenuItem6->Text = L"Buscar";
			this->buscarToolStripMenuItem6->Click += gcnew System::EventHandler(this, &MainPetStore::buscarToolStripMenuItem6_Click);
			// 
			// modificarToolStripMenuItem4
			// 
			this->modificarToolStripMenuItem4->Name = L"modificarToolStripMenuItem4";
			this->modificarToolStripMenuItem4->Size = System::Drawing::Size(248, 44);
			this->modificarToolStripMenuItem4->Text = L"Modificar";
			this->modificarToolStripMenuItem4->Click += gcnew System::EventHandler(this, &MainPetStore::modificarToolStripMenuItem4_Click);
			// 
			// medicamentosToolStripMenuItem
			// 
			this->medicamentosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->insertarToolStripMenuItem7,
					this->buscarToolStripMenuItem7, this->modificarToolStripMenuItem5
			});
			this->medicamentosToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"medicamentosToolStripMenuItem.Image")));
			this->medicamentosToolStripMenuItem->Name = L"medicamentosToolStripMenuItem";
			this->medicamentosToolStripMenuItem->Size = System::Drawing::Size(262, 40);
			this->medicamentosToolStripMenuItem->Text = L"Medicamentos";
			// 
			// insertarToolStripMenuItem7
			// 
			this->insertarToolStripMenuItem7->Name = L"insertarToolStripMenuItem7";
			this->insertarToolStripMenuItem7->Size = System::Drawing::Size(248, 44);
			this->insertarToolStripMenuItem7->Text = L"Insertar";
			this->insertarToolStripMenuItem7->Click += gcnew System::EventHandler(this, &MainPetStore::insertarToolStripMenuItem7_Click);
			// 
			// buscarToolStripMenuItem7
			// 
			this->buscarToolStripMenuItem7->Name = L"buscarToolStripMenuItem7";
			this->buscarToolStripMenuItem7->Size = System::Drawing::Size(248, 44);
			this->buscarToolStripMenuItem7->Text = L"Buscar";
			this->buscarToolStripMenuItem7->Click += gcnew System::EventHandler(this, &MainPetStore::buscarToolStripMenuItem7_Click);
			// 
			// modificarToolStripMenuItem5
			// 
			this->modificarToolStripMenuItem5->Name = L"modificarToolStripMenuItem5";
			this->modificarToolStripMenuItem5->Size = System::Drawing::Size(248, 44);
			this->modificarToolStripMenuItem5->Text = L"Modificar";
			this->modificarToolStripMenuItem5->Click += gcnew System::EventHandler(this, &MainPetStore::modificarToolStripMenuItem5_Click);
			// 
			// paymentContextMenuStrip
			// 
			this->paymentContextMenuStrip->ImageScalingSize = System::Drawing::Size(32, 32);
			this->paymentContextMenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->facturacionToolStripMenuItem1,
					this->descuentoToolStripMenuItem, this->saldoToolStripMenuItem
			});
			this->paymentContextMenuStrip->Name = L"contextMenuStrip4";
			this->paymentContextMenuStrip->Size = System::Drawing::Size(317, 168);
			// 
			// facturacionToolStripMenuItem1
			// 
			this->facturacionToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"facturacionToolStripMenuItem1.Image")));
			this->facturacionToolStripMenuItem1->Name = L"facturacionToolStripMenuItem1";
			this->facturacionToolStripMenuItem1->Size = System::Drawing::Size(316, 40);
			this->facturacionToolStripMenuItem1->Text = L"Facturacion";
			this->facturacionToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainPetStore::facturacionToolStripMenuItem1_Click);
			// 
			// descuentoToolStripMenuItem
			// 
			this->descuentoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"descuentoToolStripMenuItem.Image")));
			this->descuentoToolStripMenuItem->Name = L"descuentoToolStripMenuItem";
			this->descuentoToolStripMenuItem->Size = System::Drawing::Size(316, 40);
			this->descuentoToolStripMenuItem->Text = L"Descuento";
			// 
			// saldoToolStripMenuItem
			// 
			this->saldoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saldoToolStripMenuItem.Image")));
			this->saldoToolStripMenuItem->Name = L"saldoToolStripMenuItem";
			this->saldoToolStripMenuItem->Size = System::Drawing::Size(316, 40);
			this->saldoToolStripMenuItem->Text = L"Saldo";
			// 
			// MainPetStore
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(1894, 1009);
			this->Controls->Add(this->branchBtn);
			this->Controls->Add(this->paymentBtn);
			this->Controls->Add(this->clinicBtn);
			this->Controls->Add(this->customerBtn);
			this->Controls->Add(this->locationBtn);
			this->Controls->Add(this->menuStrip);
			this->MainMenuStrip = this->menuStrip;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1920, 1080);
			this->MinimumSize = System::Drawing::Size(1920, 1080);
			this->Name = L"MainPetStore";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainPetStore";
			this->countryContextMenuStrip->ResumeLayout(false);
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->customerContextMenuStrip->ResumeLayout(false);
			this->clinicContextMenuStrip->ResumeLayout(false);
			this->paymentContextMenuStrip->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void locationBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		countryContextMenuStrip->Show(locationBtn, Point(locationBtn->Width, 0));
	}
	private: System::Void customerBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		customerContextMenuStrip->Show(customerBtn, Point(customerBtn->Width, 0));
	}
	private: System::Void clinicBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		clinicContextMenuStrip->Show(clinicBtn, Point(clinicBtn->Width, 0));
	}
	private: System::Void paymentBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		paymentContextMenuStrip->Show(paymentBtn, Point(paymentBtn->Width, 0));
	}

	private: System::Void insertCountryToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Places^ placesWindow = gcnew Places(this, this->app, COUNTRY_TYPE, INSERT_ACTION);
		placesWindow->ShowDialog();
	}
	private: System::Void searchCountryToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Places^ placesWindow = gcnew Places(this, this->app, COUNTRY_TYPE, SEARCH_ACTION);
		placesWindow->ShowDialog();
	}

	private: System::Void insertCityToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Places^ placesWindow = gcnew Places(this, this->app, CITY_TYPE, INSERT_ACTION);
		placesWindow->ShowDialog();
	}
	private: System::Void searchCityToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Places^ placesWindow = gcnew Places(this, this->app, CITY_TYPE, SEARCH_ACTION);
		placesWindow->ShowDialog();
	}
	private: System::Void paisToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Places^ placesWindow = gcnew Places(this, this->app, COUNTRY_TYPE, INSERT_ACTION);
		placesWindow->ShowDialog();
	}
	private: System::Void ciudadToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Places^ placesWindow = gcnew Places(this, this->app, CITY_TYPE, INSERT_ACTION);
		placesWindow->ShowDialog();
	}
	private: System::Void paisToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Places^ placesWindow = gcnew Places(this, this->app, COUNTRY_TYPE, SEARCH_ACTION);
		placesWindow->ShowDialog();
	}
	private: System::Void ciudadToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Places^ placesWindow = gcnew Places(this, this->app, CITY_TYPE, SEARCH_ACTION);
		placesWindow->ShowDialog();
	}
	private: System::Void insertarToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ClientManagement^ clientManagementWindow = gcnew ClientManagement(this, this->app, CLIENT_TYPE, INSERT_ACTION);
		clientManagementWindow->ShowDialog();
	}
	private: System::Void buscarToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ClientManagement^ clientManagementWindow = gcnew ClientManagement(this, this->app, CLIENT_TYPE, SEARCH_ACTION);
		clientManagementWindow->ShowDialog();
	}
	private: System::Void insertarToolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		PetManagement^ petManagementWindow = gcnew PetManagement(this, this->app, INSERT_ACTION);
		petManagementWindow->ShowDialog();
	}
	private: System::Void buscarToolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		PetManagement^ petManagementWindow = gcnew PetManagement(this, this->app, SEARCH_ACTION);
		petManagementWindow->ShowDialog();
	}
	private: System::Void insertarToolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		AppointmentManagement^ appointmentManagementWindow = gcnew AppointmentManagement(this, this->app, INSERT_ACTION);
		appointmentManagementWindow->ShowDialog();
	}
	private: System::Void buscarToolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		AppointmentManagement^ appointmentManagementWindow = gcnew AppointmentManagement(this, this->app, SEARCH_ACTION);
		appointmentManagementWindow->ShowDialog();
	}
	private: System::Void insertarToolStripMenuItem6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		TreatmentManagement^ treatmentManagementWindow = gcnew TreatmentManagement(this, this->app, INSERT_ACTION);
		treatmentManagementWindow->ShowDialog();
	}
	private: System::Void buscarToolStripMenuItem6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		TreatmentManagement^ treatmentManagementWindow = gcnew TreatmentManagement(this, this->app, SEARCH_ACTION);
		treatmentManagementWindow->ShowDialog();
	}
	private: System::Void clientesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ClientManagement^ clientManagementWindow = gcnew ClientManagement(this, this->app, CLIENT_TYPE, INSERT_ACTION);
		clientManagementWindow->ShowDialog();
	}
	private: System::Void mascotasToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		PetManagement^ petManagementWindow = gcnew PetManagement(this, this->app, SEARCH_ACTION);
		petManagementWindow->ShowDialog();
	}
	private: System::Void visitasToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		AppointmentManagement^ appointmentManagementWindow = gcnew AppointmentManagement(this, this->app, SEARCH_ACTION);
		appointmentManagementWindow->ShowDialog();
	}
	private: System::Void tratamientoToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		TreatmentManagement^ treatmentManagementWindow = gcnew TreatmentManagement(this, this->app, SEARCH_ACTION);
		treatmentManagementWindow->ShowDialog();
	}
	private: System::Void clientesToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ClientManagement^ clientManagementWindow = gcnew ClientManagement(this, this->app, CLIENT_TYPE, SEARCH_ACTION);
		clientManagementWindow->ShowDialog();
	}
	private: System::Void mascotasToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		PetManagement^ petManagementWindow = gcnew PetManagement(this, this->app, INSERT_ACTION);
		petManagementWindow->ShowDialog();
	}
	private: System::Void visitasToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		AppointmentManagement^ appointmentManagementWindow = gcnew AppointmentManagement(this, this->app, INSERT_ACTION);
		appointmentManagementWindow->ShowDialog();
	}
	private: System::Void tratamientoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		TreatmentManagement^ treatmentManagementWindow = gcnew TreatmentManagement(this, this->app, INSERT_ACTION);
		treatmentManagementWindow->ShowDialog();
	}
	private: System::Void insertarToolStripMenuItem7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MedicationManagement^ medicationManagementWindow = gcnew MedicationManagement(this, this->app, INSERT_ACTION);
		medicationManagementWindow->ShowDialog();
	}
	private: System::Void buscarToolStripMenuItem7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MedicationManagement^ medicationManagementWindow = gcnew MedicationManagement(this, this->app, SEARCH_ACTION);
		medicationManagementWindow->ShowDialog();
	}
	private: System::Void medicacionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MedicationManagement^ medicationManagementWindow = gcnew MedicationManagement(this, this->app, INSERT_ACTION);
		medicationManagementWindow->ShowDialog();
	}
	private: System::Void medicacionToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MedicationManagement^ medicationManagementWindow = gcnew MedicationManagement(this, this->app, SEARCH_ACTION);
		medicationManagementWindow->ShowDialog();
	}
	private: System::Void eliminarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Places^ placesWindow = gcnew Places(this, this->app, COUNTRY_TYPE, DELETE_ACTION);
		placesWindow->ShowDialog();
	}
	private: System::Void modificarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Places^ placesWindow = gcnew Places(this, this->app, COUNTRY_TYPE, UPDATE_ACTION);
		placesWindow->ShowDialog();
	}
	private: System::Void eliminarToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ClientManagement^ clientManagementWindow = gcnew ClientManagement(this, this->app, CLIENT_TYPE, DELETE_ACTION);
		clientManagementWindow->ShowDialog();
	}
	private: System::Void modificarToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ClientManagement^ clientManagementWindow = gcnew ClientManagement(this, this->app, CLIENT_TYPE, UPDATE_ACTION);
		clientManagementWindow->ShowDialog();
	}
	private: System::Void eliminarToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		PetManagement^ petManagementWindow = gcnew PetManagement(this, this->app, DELETE_ACTION);
		petManagementWindow->ShowDialog();
	}
	private: System::Void mascotaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		PetManagement^ petManagementWindow = gcnew PetManagement(this, this->app, UPDATE_ACTION);
		petManagementWindow->ShowDialog();
	}
	private: System::Void modificarToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		AppointmentManagement^ appointmentManagementWindow = gcnew AppointmentManagement(this, this->app, UPDATE_ACTION);
		appointmentManagementWindow->ShowDialog();
	}
	private: System::Void modificarToolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		TreatmentManagement^ treatmentManagementWindow = gcnew TreatmentManagement(this, this->app, UPDATE_ACTION);
		treatmentManagementWindow->ShowDialog();
	}
	private: System::Void modificarToolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MedicationManagement^ medicationManagementWindow = gcnew MedicationManagement(this, this->app, UPDATE_ACTION);
		medicationManagementWindow->ShowDialog();
	}
	private: System::Void paisToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Places^ placesWindow = gcnew Places(this, this->app, COUNTRY_TYPE, DELETE_ACTION);
		placesWindow->ShowDialog();
	}
	private: System::Void ciudadToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Places^ placesWindow = gcnew Places(this, this->app, CITY_TYPE, DELETE_ACTION);
		placesWindow->ShowDialog();
	}
	private: System::Void clientesToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ClientManagement^ clientManagementWindow = gcnew ClientManagement(this, this->app, CLIENT_TYPE, DELETE_ACTION);
		clientManagementWindow->ShowDialog();
	}
	private: System::Void mascotasToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		PetManagement^ petManagementWindow = gcnew PetManagement(this, this->app, DELETE_ACTION);
		petManagementWindow->ShowDialog();
	}
	private: System::Void visitasToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		AppointmentManagement^ appointmentManagementWindow = gcnew AppointmentManagement(this, this->app, DELETE_ACTION);
		appointmentManagementWindow->ShowDialog();
	}
	private: System::Void paisToolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Places^ placesWindow = gcnew Places(this, this->app, COUNTRY_TYPE, UPDATE_ACTION);
		placesWindow->ShowDialog();
	}
	private: System::Void ciudadToolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Places^ placesWindow = gcnew Places(this, this->app, CITY_TYPE, UPDATE_ACTION);
		placesWindow->ShowDialog();
	}
	private: System::Void mascotasToolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		PetManagement^ petManagementWindow = gcnew PetManagement(this, this->app, UPDATE_ACTION);
		petManagementWindow->ShowDialog();
	}

	private: System::Void tratamientoToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		TreatmentManagement^ treatmentManagementWindow = gcnew TreatmentManagement(this, this->app, UPDATE_ACTION);
		treatmentManagementWindow->ShowDialog();
	}
	private: System::Void medicacionToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MedicationManagement^ medicationManagementWindow = gcnew MedicationManagement(this, this->app, UPDATE_ACTION);
		medicationManagementWindow->ShowDialog();
	}
	private: System::Void clientesToolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ClientManagement^ clientManagementWindow = gcnew ClientManagement(this, this->app, CLIENT_TYPE, UPDATE_ACTION);
		clientManagementWindow->ShowDialog();
	}
	private: System::Void visitasToolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		AppointmentManagement^ appointmentManagementWindow = gcnew AppointmentManagement(this, this->app, UPDATE_ACTION);
		appointmentManagementWindow->ShowDialog();
	}
	private: System::Void eliminarToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Places^ placesWindow = gcnew Places(this, this->app, CITY_TYPE, DELETE_ACTION);
		placesWindow->ShowDialog();
	}
	private: System::Void modificarToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Places^ placesWindow = gcnew Places(this, this->app, CITY_TYPE, UPDATE_ACTION);
		placesWindow->ShowDialog();
	}
	private: System::Void paisToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ReportManagement^ reportWindow = gcnew ReportManagement(this, this->app);
		reportWindow->ShowDialog();
	}
	private: System::Void facturacionToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		InvoiceManagement^ invoiceWindow = gcnew InvoiceManagement(this, this->app);
		invoiceWindow->ShowDialog();
	}
	};
}
