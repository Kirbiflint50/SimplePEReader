#pragma once
#include "iostream"
#include "SectionHeaders.h"
#include "OptionalHeader.h"
#include "Info.h"
#include "Contact.h"
#include<stdio.h>
#include<windows.h>
#include<time.h>
#include <string.h>
#include<tchar.h>
#include <stdio.h>
#include <msclr\marshal_cppstd.h>
#include <regex>

namespace PEReader3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;


	/// <summary>
	/// Riepilogo per MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: aggiungere qui il codice del costruttore.
			//
		}
		System::String ^ protection;


	public:


	private: System::Windows::Forms::Label^  label6;

	public:
		String^ file;
	protected:
		/// <summary>
		/// Pulire le risorse in uso.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  viewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sectionsHeadersToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  optionalHeaderToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  contactToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  infoToolStripMenuItem;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;


	private:
		/// <summary>
		/// Variabile di progettazione necessaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metodo necessario per il supporto della finestra di progettazione. Non modificare
		/// il contenuto del metodo con l'editor di codice.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sectionsHeadersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->optionalHeaderToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contactToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->infoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->viewToolStripMenuItem, this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(526, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->openToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// viewToolStripMenuItem
			// 
			this->viewToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->sectionsHeadersToolStripMenuItem,
					this->optionalHeaderToolStripMenuItem
			});
			this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
			this->viewToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->viewToolStripMenuItem->Text = L"View";
			// 
			// sectionsHeadersToolStripMenuItem
			// 
			this->sectionsHeadersToolStripMenuItem->Name = L"sectionsHeadersToolStripMenuItem";
			this->sectionsHeadersToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->sectionsHeadersToolStripMenuItem->Text = L"SectionsHeaders";
			this->sectionsHeadersToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::sectionsHeadersToolStripMenuItem_Click);
			// 
			// optionalHeaderToolStripMenuItem
			// 
			this->optionalHeaderToolStripMenuItem->Name = L"optionalHeaderToolStripMenuItem";
			this->optionalHeaderToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->optionalHeaderToolStripMenuItem->Text = L"Optional Header";
			this->optionalHeaderToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::optionalHeaderToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->contactToolStripMenuItem,
					this->infoToolStripMenuItem
			});
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// contactToolStripMenuItem
			// 
			this->contactToolStripMenuItem->Name = L"contactToolStripMenuItem";
			this->contactToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->contactToolStripMenuItem->Text = L"Contact";
			this->contactToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::contactToolStripMenuItem_Click);
			// 
			// infoToolStripMenuItem
			// 
			this->infoToolStripMenuItem->Name = L"infoToolStripMenuItem";
			this->infoToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->infoToolStripMenuItem->Text = L"Info";
			this->infoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::infoToolStripMenuItem_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::InfoText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(4, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Filename:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(77, 66);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(444, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(94, 138);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(351, 20);
			this->textBox2->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::InfoText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(4, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 18);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Bulid date:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::InfoText;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(206, 34);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 18);
			this->label6->TabIndex = 11;
			this->label6->Text = L"PEReader";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(526, 201);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(542, 364);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PEReader";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	int i = 0;
	HANDLE hMapObject, hFile;                        //File Mapping Object
	LPVOID lpBase;                                          //Pointer to the base memory of mapped file
	PIMAGE_DOS_HEADER dosHeader;            //Pointer to DOS Header
	PIMAGE_NT_HEADERS ntHeader;                     //Pointer to NT Header
	IMAGE_FILE_HEADER header;                       //Pointer to image file header of NT Header
	IMAGE_OPTIONAL_HEADER opHeader;         //Optional Header of PE files present in NT Header structure
	PIMAGE_SECTION_HEADER pSecHeader;

	OpenFileDialog^ sfd = gcnew OpenFileDialog();
	sfd->Filter = "EXE|*.exe";
	sfd->Title = "Open";
	if (sfd->ShowDialog() != System::Windows::Forms::DialogResult::OK)
	{
	//	textBox1->Text = sfd->FileName;
		return;
	}
	char* nome = (char*)(void*)Marshal::StringToHGlobalAnsi(sfd->FileName);

	hFile = CreateFileA(nome, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0);
	HANDLE hMap = CreateFileMapping(hFile, 0, PAGE_READONLY, 0, 0, 0);
	lpBase = MapViewOfFile(hMap, FILE_MAP_READ, 0, 0, 0);
	dosHeader = (PIMAGE_DOS_HEADER)lpBase;


	ntHeader = (PIMAGE_NT_HEADERS)(dosHeader->e_lfanew + (unsigned long)lpBase);
	char s[1024] = { 0 };
	char a[1024] = { 0 };
	time_t creationTime = ntHeader->FileHeader.TimeDateStamp;

	tm* Time = localtime(&creationTime);
	strftime(s, sizeof(s), "%a %Y-%m-%d %H:%M:%S %Z", Time);
	sprintf(a, "%s",s);
	System::String ^hFileString = gcnew String(a);
	//textBox1->Text = hFileString;
	
	//MessageBox::Show( sfd->FileName );	
	textBox1->Text = sfd->FileName;
	textBox2->Text = hFileString;
////	textBox3->Text = "Ready to scan!";
	
	String ^ name = sfd->FileName;
	file = name;

	//... visual c++
	
	
	

	

}
private: System::Void sectionsHeadersToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	if (textBox1->Text == "")
	{
		MessageBox::Show("First load the EXE file!", "PEReader", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}





	String^ flnm = file;
	SectionHeaders^ sections = gcnew SectionHeaders();
	sections->fileName = flnm;
	sections->Show();
}
private: System::Void optionalHeaderToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	if (textBox1->Text == "")
	{
		MessageBox::Show("First load the EXE file!", "PEReader", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	
	

	

	///SectionHeaders^ header = gcnew SectionHeaders();
	//header->fileName = file;
	//header->Show();
	String^ fnm = file;
	OptionalHeader^ optional = gcnew OptionalHeader();
	optional->Name = fnm;
	optional->Show();

	//OptionalHeader^ optional = gcnew OptionalHeader();
///	optional->Show();



}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {


	this->Close();
}
private: System::Void infoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	Info^ info = gcnew Info();
	info->Show();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	SectionHeaders^ scts = gcnew SectionHeaders();
	protection = scts->sectionsprot;
	System::String^ str = protection;


///	textBox3->Text = str;
///	current_cursor = 0;

	/*SectionHeaders^ sect = gcnew SectionHeaders();
	protection = sect->sectionsprot;*/
	/*System::String^ tt = protection;

	std::string unmanaged = msclr::interop::marshal_as<std::string>(tt);
	std::string str = unmanaged;

	std::string x = "([a-z]|[A-Z])+";
	std::string y = "[0-9]+";
	std::string expression = std::string(x).append(".bind").append(y);
	std::tr1::regex rx(expression);
	bool match = std::tr1::regex_match(str.c_str(), rx);
	match = true;
	if (match == true)
	{
		textBox3->Text = "Steam stub detected!.......";
		return;
	}*/
	//SectionHeaders^ k = gcnew SectionHeaders();
	//protection = k->sectionsprot;
	///textBox3->Text = protection;
	/*System::String^ tt = protection;
	std::string unmanaged = msclr::interop::marshal_as<std::string>(tt);
	std::string str = unmanaged;
	std::regex df(".bind");
	bool match = std::regex_match(str, df);*/

}
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {


	



}
private: System::Void contactToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	Contact^ contact = gcnew Contact();
	contact->Show();
}
};
}
