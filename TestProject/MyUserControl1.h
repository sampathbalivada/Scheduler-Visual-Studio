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



	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button3;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyUserControl1::typeid));
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Checked = false;
			this->dateTimePicker1->DropDownAlign = System::Windows::Forms::LeftRightAlignment::Right;
			this->dateTimePicker1->Location = System::Drawing::Point(202, 10);
			this->dateTimePicker1->MaxDate = System::DateTime(2160, 12, 31, 0, 0, 0, 0);
			this->dateTimePicker1->MinDate = System::DateTime(2018, 4, 20, 0, 0, 0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(130, 20);
			this->dateTimePicker1->TabIndex = 1;
			this->dateTimePicker1->Value = System::DateTime(2018, 4, 20, 0, 0, 0, 0);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(118, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Choose a Date";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(3, 106);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(504, 117);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(4, 58);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(503, 20);
			this->textBox2->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 16);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Description:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(7, 37);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 16);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Title:";
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button3->Location = System::Drawing::Point(202, 229);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(77, 34);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Save";
			this->button3->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyUserControl1::button3_Click);
			// 
			// MyUserControl1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dateTimePicker1);
			this->Name = L"MyUserControl1";
			this->Size = System::Drawing::Size(510, 266);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	/*private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		label1->Text = dateTimePicker1->Value.ToString("yyyy-MM-dd");
	}*/
	
	/*private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
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
	}*/
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	
	String^ title = textBox2->Text->ToString();
	String^ description = textBox1->Text->ToString();
	String^ data = title + "#*#*" + description;
	String^ nameOfFile = dateTimePicker1->Value.ToString("ddMMyyyy");
	String^ pathToFile = "e:\\TestLocation\\";
	String^ finalPath = pathToFile + nameOfFile + ".txt";
	StreamWriter^ pwriter = gcnew StreamWriter(finalPath);
	pwriter->WriteLine(data);
	pwriter->Close();
	textBox1->Clear();
	textBox2->Clear();
}
};
}
