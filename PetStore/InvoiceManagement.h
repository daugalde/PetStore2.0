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

	private:
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
			this->SuspendLayout();
			// 
			// InvoiceManagement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(1894, 1009);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1920, 1080);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(1920, 1080);
			this->Name = L"InvoiceManagement";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"InvoiceManagement";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &InvoiceManagement::InvoiceManagement_FormClosed);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void InvoiceManagement_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		this->obj->Show();
	}
	};
}
