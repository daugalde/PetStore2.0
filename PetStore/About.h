#pragma once

namespace PetStore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for About
	/// </summary>
	public ref class About : public System::Windows::Forms::Form
	{
	public:
		About(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Form^ obj;
	private: System::Windows::Forms::Label^ label4;
	public:

		AppManager* app;

		About(Form^ obj1, AppManager* app)
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
		~About()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(About::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.875F));
			this->label1->Location = System::Drawing::Point(676, 173);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(353, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Florida Labs Software";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.875F));
			this->label2->Location = System::Drawing::Point(676, 264);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(375, 39);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Veterinaria La Angelina";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.875F));
			this->label3->Location = System::Drawing::Point(818, 345);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 31);
			this->label3->TabIndex = 2;
			this->label3->Text = L"V 1.0.0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->Location = System::Drawing::Point(48, 68);
			this->label4->MaximumSize = System::Drawing::Size(474, 474);
			this->label4->MinimumSize = System::Drawing::Size(474, 474);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(474, 474);
			this->label4->TabIndex = 89;
			// 
			// About
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1341, 603);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"About";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"About";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &About::About_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

	private: System::Void About_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		this->obj->Show();
	}
};
}
