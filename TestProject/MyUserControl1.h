#pragma once
#include <fstream>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;


namespace TestProject {

	/// <summary>
	/// Summary for MyUserControl1
	/// </summary>
	public ref class MyUserControl1 : public System::Windows::Forms::UserControl
	{
	public:
		MyUserControl1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyUserControl1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	protected:

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
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Checked = false;
			this->dateTimePicker1->Location = System::Drawing::Point(128, 87);
			this->dateTimePicker1->MaxDate = System::DateTime(2160, 12, 31, 0, 0, 0, 0);
			this->dateTimePicker1->MinDate = System::DateTime(2018, 4, 20, 0, 0, 0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 1;
			this->dateTimePicker1->Value = System::DateTime(2018, 4, 20, 0, 0, 0, 0);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(183, 171);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyUserControl1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(213, 131);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"label1";
			// 
			// MyUserControl1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dateTimePicker1);
			this->Name = L"MyUserControl1";
			this->Size = System::Drawing::Size(467, 250);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	/*private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		label1->Text = dateTimePicker1->Value.ToString("yyyy-MM-dd");
	}*/
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ nameOfFile = dateTimePicker1->Value.ToString("ddMMyyyy");
		String^ txt = ".txt";
		String^ finalName = nameOfFile + txt;
		//label1->Text = finalName;
		//String^ fileName = "textfile.txt";
		String^ dataInFile;
		try
		{
			StreamReader^ din = File::OpenText("E:\21022019.txt");

			String^ str;
			int count = 0;
			while ((str = din->ReadLine()) != nullptr)
			{
				count++;
				dataInFile = str + dataInFile;
			}
			label1->Text = dataInFile;
		}
		catch (Exception^ e)
		{
			if (dynamic_cast<FileNotFoundException^>(e))
				label1->Text = "file not found";
			else
				label1->Text = "problem reading file";
		}
	}
};
}
