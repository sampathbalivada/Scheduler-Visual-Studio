#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;

namespace TestProject {

	/// <summary>
	/// Summary for MyUserControl
	/// </summary>
	public ref class MyUserControl : public System::Windows::Forms::UserControl
	{
	public:
		MyUserControl(void)
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
		~MyUserControl()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Label^  label4;

	protected:


	protected:

	protected:

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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Location = System::Drawing::Point(11, 10);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(243, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Click on dashboard to check for today\'s schedule.";
			// 
			// MyUserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->label4);
			this->Name = L"MyUserControl";
			this->Size = System::Drawing::Size(510, 266);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	/*private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		DateTime datetime = DateTime::Now;
		String^ currentDate = datetime.ToString("ddMMyyyy");

	}*/
	public: System::Void refreshdata() {
		DateTime datetime = DateTime::Now;
		String^ datafromfile;
		String^ currentDate = datetime.ToString("ddMMyyyy");
		String^ pathToFile = "e:\\TestLocation\\";
		String^ finalPath = pathToFile + currentDate + ".txt";
		try
		{
			StreamReader^ din = File::OpenText(finalPath);

			String^ str;
			int count = 0;
			while ((str = din->ReadLine()) != nullptr)
			{
				count++;
				datafromfile = datafromfile + str;
			}
			label4->Text = datafromfile;
		}
		catch (Exception^ e)
		{
			if (dynamic_cast<FileNotFoundException^>(e))
				label4->Text = "No Schedule!!!";
			else
				label4->Text = "problem reading file ";
		}
	}
	};
}
