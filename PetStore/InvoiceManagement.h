#pragma once

namespace PetStore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for InvoiceManagement
	/// </summary>
	public ref class InvoiceManagement : public System::Windows::Forms::Form
	{
	public:
		InvoiceManagement(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Form^ obj;

		AppManager* app;

		InvoiceManagement(Form^ obj1, AppManager* app)
		{
			this->obj = obj1;
			this->app = app;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~InvoiceManagement()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ actionBtn;
	private: System::Windows::Forms::Label^ resultLbl;
	private: System::Windows::Forms::TextBox^ viewer;
	private: System::Windows::Forms::Label^ titleLbl;
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->actionBtn = (gcnew System::Windows::Forms::Button());
			this->resultLbl = (gcnew System::Windows::Forms::Label());
			this->viewer = (gcnew System::Windows::Forms::TextBox());
			this->titleLbl = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// actionBtn
			// 
			this->actionBtn->Location = System::Drawing::Point(239, 297);
			this->actionBtn->Name = L"actionBtn";
			this->actionBtn->Size = System::Drawing::Size(221, 84);
			this->actionBtn->TabIndex = 80;
			this->actionBtn->Text = L"Generar ";
			this->actionBtn->UseVisualStyleBackColor = true;
			this->actionBtn->Click += gcnew System::EventHandler(this, &InvoiceManagement::actionBtn_Click);
			// 
			// resultLbl
			// 
			this->resultLbl->AutoSize = true;
			this->resultLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->resultLbl->Location = System::Drawing::Point(847, 240);
			this->resultLbl->Name = L"resultLbl";
			this->resultLbl->Size = System::Drawing::Size(151, 31);
			this->resultLbl->TabIndex = 79;
			this->resultLbl->Text = L"Resultados";
			// 
			// viewer
			// 
			this->viewer->Location = System::Drawing::Point(560, 297);
			this->viewer->Multiline = true;
			this->viewer->Name = L"viewer";
			this->viewer->Size = System::Drawing::Size(774, 564);
			this->viewer->TabIndex = 78;
			// 
			// titleLbl
			// 
			this->titleLbl->AutoSize = true;
			this->titleLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.875F));
			this->titleLbl->Location = System::Drawing::Point(803, 47);
			this->titleLbl->Name = L"titleLbl";
			this->titleLbl->Size = System::Drawing::Size(289, 39);
			this->titleLbl->TabIndex = 77;
			this->titleLbl->Text = L"Generar Facturas";
			this->titleLbl->UseMnemonic = false;
			// 
			// InvoiceManagement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(1894, 1009);
			this->Controls->Add(this->actionBtn);
			this->Controls->Add(this->resultLbl);
			this->Controls->Add(this->viewer);
			this->Controls->Add(this->titleLbl);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1920, 1080);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(1920, 1080);
			this->Name = L"InvoiceManagement";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"InvoiceManagement";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &InvoiceManagement::InvoiceManagement_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void InvoiceManagement_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		this->obj->Show();
	}
	private: System::Void actionBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		string res = this->app->getStore().getInvoices()->ToString("invoice");

		this->viewer->Text = gcnew String((res).c_str());
	}
};
}
