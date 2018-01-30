#pragma once
#include<stdio.h>
#include<windows.h>
#include<time.h>
#include <winbase.h>
#include <winnt.h>
#include <string.h>
#include<tchar.h>
#include <stdio.h>
#include <iostream>  
#include <msclr\marshal_cppstd.h>
#include <regex>
///#include "MyForm.h"
namespace PEReader3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	/// <summary>
	/// Riepilogo per SectionHeaders
	/// </summary>
	public ref class SectionHeaders : public System::Windows::Forms::Form
	{
	public:
		SectionHeaders(void)
		{
			InitializeComponent();
			//
			//TODO: aggiungere qui il codice del costruttore.
			//
		}
		System::String ^fileName;
		System::String ^ sectionsprot;
	private: System::Windows::Forms::Label^  label2;
	public:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
			 
	protected:
		/// <summary>
		/// Pulire le risorse in uso.
		/// </summary>
		~SectionHeaders()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SectionHeaders::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(134, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Headers";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Executable section: ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(137, 69);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(122, 133);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(149, 75);
			this->textBox2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 159);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Other sections:";
			// 
			// SectionHeaders
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(374, 305);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(390, 344);
			this->Name = L"SectionHeaders";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SectionHeaders";
			this->Load += gcnew System::EventHandler(this, &SectionHeaders::SectionHeaders_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		


		
#pragma endregion
	private: System::Void SectionHeaders_Load(System::Object^  sender, System::EventArgs^  e) {

		////String ^ sgf = "C:\\Users\\Simone Inches\\Desktop\\Crackmes\\crackme (1).exe";
		//LPCSTR fileName = "C:\\Users\\Simone Inches\\Desktop\\Crackmes\\crackme (1).exe";
	///	char file = Convert::ToChar(fileName);
		int i = 0;
		HANDLE hMapObject, hFile;                        //File Mapping Object
		LPVOID lpBase;                                          //Pointer to the base memory of mapped file
		PIMAGE_DOS_HEADER dosHeader;            //Pointer to DOS Header
		PIMAGE_NT_HEADERS ntHeader;                     //Pointer to NT Header
		IMAGE_FILE_HEADER header;                       //Pointer to image file header of NT Header
		IMAGE_OPTIONAL_HEADER opHeader;         //Optional Header of PE files present in NT Header structure
		PIMAGE_SECTION_HEADER pSecHeader;
		

			System::String^ flnm = fileName;
			char* nome = (char*)(void*)Marshal::StringToHGlobalAnsi(flnm);







			hFile = CreateFileA(nome, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0);

			
			
			HANDLE hMap = CreateFileMapping(hFile, 0, PAGE_READONLY, 0, 0, 0);
			lpBase = MapViewOfFile(hMap, FILE_MAP_READ, 0, 0, 0);
		
			dosHeader = (PIMAGE_DOS_HEADER)lpBase;
			ntHeader = (PIMAGE_NT_HEADERS)(dosHeader->e_lfanew + (unsigned long)lpBase);
			
			char s[1024] = { 0 };
			char a[1024] = { 0 };

			char f[1024] = { 0 };
			
			//fatto, le sezioni ok?  ah giusto
			pSecHeader = (PIMAGE_SECTION_HEADER)((DWORD)ntHeader + sizeof(IMAGE_NT_HEADERS));
			for (int i = 1; i < ntHeader->FileHeader.NumberOfSections; i++)
			{
				pSecHeader = (PIMAGE_SECTION_HEADER)((DWORD)pSecHeader + sizeof(IMAGE_SECTION_HEADER) );
				
				strcat(f, (char*)pSecHeader->Name);
			}

			pSecHeader = (PIMAGE_SECTION_HEADER)((DWORD)ntHeader + sizeof(IMAGE_NT_HEADERS));

			sprintf(a, "%s", pSecHeader->Name);
			
			System::String ^hFileString = gcnew String(a);
			System::String ^othersections = gcnew String(f);
			
			//textBox1->Text = "--------------";
			textBox1->Text = hFileString;
			textBox2->Text = othersections;
			sectionsprot = textBox2->Text;
			// Create an instance of a TextBox control.
			
			///textBox2->TextAlign = ;
			//sectionsprot = othersections;
			/*int pos = othersections->IndexOf(".bind");
			if (pos != 1)
			{
				sectionsprot = "Steam Stub detected!... unknwown version.";
				return;

			}*/
			//std::string unmanaged = msclr::interop::marshal_as<std::string>(othersections);
			//std::string str = unmanaged;

			//std::string x = "([a-z]|[A-Z])+";
			//std::string y = "[0-9]+";
			//std::string expression = std::string(x).append(".bind").append(y);
			//std::tr1::regex rx(expression);
			//bool match = std::tr1::regex_match(str.c_str(), rx);
			//match = true;
			////if (unmanaged.find(".bind") != std::string::npos)
			////{

			////	sectionsprot = "Steam stub detected!... Unknwn version.";
			////	//MyForm^ m = gcnew MyForm();
			////	//m->protection = sectionsprot;
			////	//m->Close();
			////	return;



			////}
			//if (match == true)
			//{
			//	sectionsprot = "Steam Stub detected! ";
			//	return;
			//}
			//textBox1->Text = "--------------";
			//un loop e' for mi sento molto in difficolta' , ho lo schermo troppo piccolo, scusami se ingradisco

             


	}            
	};
}
