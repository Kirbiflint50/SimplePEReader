#pragma once
#include<stdio.h>
#include<windows.h>
#include<time.h>
#include <string.h>
#include<tchar.h>
#include <stdio.h>
#include <iostream> 
namespace PEReader3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Runtime::InteropServices;
	using namespace System::Drawing;

	/// <summary>
	/// Riepilogo per OptionalHeader
	/// </summary>
	public ref class OptionalHeader : public System::Windows::Forms::Form
	{
	public:
		OptionalHeader(void)
		{
			InitializeComponent();
			//
			//TODO: aggiungere qui il codice del costruttore.
			//
		}
		System::String ^Name;
	private: System::Windows::Forms::Label^  label5;
	public:
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox8;
			 

	protected:
		/// <summary>
		/// Pulire le risorse in uso.
		/// </summary>
		~OptionalHeader()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(OptionalHeader::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(129, 49);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(94, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"AddressOfEntryPoint:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 142);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"SizeOfCode:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(88, 139);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(94, 20);
			this->textBox2->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"MinorLinkerVersion:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(122, 90);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(94, 20);
			this->textBox3->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 192);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"ImageBase:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(88, 189);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(94, 20);
			this->textBox4->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(317, 195);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"FileAlignment:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(395, 192);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(94, 20);
			this->textBox5->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(317, 97);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Checksum:";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(391, 94);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(94, 20);
			this->textBox6->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(317, 145);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(70, 13);
			this->label7->TabIndex = 11;
			this->label7->Text = L"SizeOfImage:";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(393, 142);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(94, 20);
			this->textBox7->TabIndex = 10;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(317, 55);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(68, 13);
			this->label8->TabIndex = 9;
			this->label8->Text = L"LoaderFlags:";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(391, 52);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(94, 20);
			this->textBox8->TabIndex = 8;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(528, 179);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(151, 13);
			this->label9->TabIndex = 23;
			this->label9->Text = L"MajorOperatingSystemVersion:";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(685, 176);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(94, 20);
			this->textBox9->TabIndex = 22;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(579, 94);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(100, 13);
			this->label10->TabIndex = 21;
			this->label10->Text = L"MajorImageVersion:";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(685, 90);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(94, 20);
			this->textBox10->TabIndex = 20;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(579, 135);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(100, 13);
			this->label11->TabIndex = 19;
			this->label11->Text = L"MajorLinkerVersion:";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(685, 132);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(94, 20);
			this->textBox11->TabIndex = 18;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(629, 51);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(39, 13);
			this->label12->TabIndex = 17;
			this->label12->Text = L"Magic:";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(685, 48);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(94, 20);
			this->textBox12->TabIndex = 16;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(858, 180);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(120, 13);
			this->label13->TabIndex = 31;
			this->label13->Text = L"SizeOfUninitializedData:";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(984, 177);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(94, 20);
			this->textBox13->TabIndex = 30;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(875, 93);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(103, 13);
			this->label14->TabIndex = 29;
			this->label14->Text = L"Win32VersionValue:";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(984, 91);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(94, 20);
			this->textBox14->TabIndex = 28;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(897, 135);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(81, 13);
			this->label15->TabIndex = 27;
			this->label15->Text = L"SizeOfHeaders:";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(984, 133);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(94, 20);
			this->textBox15->TabIndex = 26;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(827, 52);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(151, 13);
			this->label16->TabIndex = 25;
			this->label16->Text = L"MinorOperatingSystemVersion:";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(984, 49);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(94, 20);
			this->textBox16->TabIndex = 24;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(1191, 98);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(91, 13);
			this->label18->TabIndex = 37;
			this->label18->Text = L"DllCharacteristics:";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(1288, 94);
			this->textBox18->Name = L"textBox18";
			this->textBox18->ReadOnly = true;
			this->textBox18->Size = System::Drawing::Size(94, 20);
			this->textBox18->TabIndex = 36;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(1219, 56);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(63, 13);
			this->label20->TabIndex = 33;
			this->label20->Text = L"SubSystem:";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(1288, 52);
			this->textBox20->Name = L"textBox20";
			this->textBox20->ReadOnly = true;
			this->textBox20->Size = System::Drawing::Size(94, 20);
			this->textBox20->TabIndex = 32;
			// 
			// OptionalHeader
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1583, 277);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(1599, 316);
			this->Name = L"OptionalHeader";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"OptionalHeader";
			this->Load += gcnew System::EventHandler(this, &OptionalHeader::OptionalHeader_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void OptionalHeader_Load(System::Object^  sender, System::EventArgs^  e) {

		int i = 0;
		HANDLE hMapObject, hFile;                        //File Mapping Object
		LPVOID lpBase;                                          //Pointer to the base memory of mapped file
		PIMAGE_DOS_HEADER dosHeader;            //Pointer to DOS Header
		PIMAGE_NT_HEADERS ntHeader;                     //Pointer to NT Header
		IMAGE_FILE_HEADER header;                       //Pointer to image file header of NT Header
		IMAGE_OPTIONAL_HEADER opHeader;         //Optional Header of PE files present in NT Header structure
		PIMAGE_SECTION_HEADER pSecHeader;
		

    		System::String^ flnm = Name;
		    char* nome = (char*)(void*)Marshal::StringToHGlobalAnsi(flnm);
			hFile = CreateFileA(nome, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0);
			HANDLE hMap = CreateFileMapping(hFile, 0, PAGE_READONLY, 0, 0, 0);
			lpBase = MapViewOfFile(hMap, FILE_MAP_READ, 0, 0, 0);
			dosHeader = (PIMAGE_DOS_HEADER)lpBase;
			ntHeader = (PIMAGE_NT_HEADERS)(dosHeader->e_lfanew + (unsigned long)lpBase);
			char OEP[1024] = { 0 };
			char Minor[1024] = { 0 };
			char Size[1024] = { 0 };
			char Image[1024] = { 0 };
			char Loaderflags[1024] = { 0 };
			char Chcksum[1024] = { 0 };
			char imgsize[1024] = { 0 };
			char Fileallign[1024] = { 0 };
			char Magic[1024] = { 0 };
			char MajorImageVersion[1024] = { 0 };
			char MajorLinker[1024] = { 0 };
			char MajorOperatingSys[1024] = { 0 };
			char MinorOperatingSys[1024] = { 0 };
			char Win32Version[1024] = { 0 };
			char SizeOfHeaders[1024] = { 0 };
			char SizeOfUnini[1024] = { 0 };
			char Subsystem[1024] = { 0 };
			char DllCharac[1024] = { 0 };
			sprintf(OEP, "0x%x", ntHeader->OptionalHeader.AddressOfEntryPoint);
			sprintf(Minor, "0x%x", ntHeader->OptionalHeader.MinorLinkerVersion);
			sprintf(Size, "0x%x", ntHeader->OptionalHeader.SizeOfCode);
			sprintf(Image, "0x%x", ntHeader->OptionalHeader.ImageBase);
			sprintf(Loaderflags, "0x%x", ntHeader->OptionalHeader.LoaderFlags);
			sprintf(Chcksum, "0x%x", ntHeader->OptionalHeader.CheckSum);
			sprintf(imgsize, "0x%x", ntHeader->OptionalHeader.SizeOfImage);
			sprintf(Fileallign, "0x%x", ntHeader->OptionalHeader.FileAlignment);
			sprintf(Magic, "0x%x", ntHeader->OptionalHeader.Magic);
			sprintf(MajorImageVersion, "0x%x", ntHeader->OptionalHeader.MajorImageVersion);
			sprintf(MajorLinker, "0x%x", ntHeader->OptionalHeader.MajorLinkerVersion);
			sprintf(MajorOperatingSys, "0x%x", ntHeader->OptionalHeader.MajorOperatingSystemVersion);
			sprintf(MinorOperatingSys, "0x%x", ntHeader->OptionalHeader.MinorOperatingSystemVersion);
			sprintf(Win32Version, "0x%x", ntHeader->OptionalHeader.Win32VersionValue);
			sprintf(SizeOfHeaders, "0x%x", ntHeader->OptionalHeader.SizeOfHeaders);
			sprintf(SizeOfUnini, "0x%x", ntHeader->OptionalHeader.SizeOfUninitializedData);
			sprintf(Subsystem, "0x%x", ntHeader->OptionalHeader.Subsystem);
			sprintf(DllCharac, "0x%x", ntHeader->OptionalHeader.DllCharacteristics);
			System::String ^hFileString = gcnew String(OEP);
			System::String ^Mnr = gcnew String(Minor);
			System::String ^Sz = gcnew String(Size);
			System::String ^img = gcnew String(Image);
			System::String ^flags = gcnew String(Loaderflags);
			System::String ^checksumstr = gcnew String(Chcksum);
			System::String ^szimg = gcnew String(imgsize);
			System::String ^flagn = gcnew String(Fileallign);
			System::String ^mgc = gcnew String(Magic);
			System::String ^mjiv = gcnew String(MajorImageVersion);
			System::String ^mjl = gcnew String(MajorLinker);
			System::String ^mjos = gcnew String(MajorOperatingSys);
			System::String ^mnos = gcnew String(MinorOperatingSys);
			System::String ^win32 = gcnew String(Win32Version);
			System::String ^szofhd = gcnew String(SizeOfHeaders);
			System::String ^szofu = gcnew String(SizeOfUnini);
			System::String ^subsys = gcnew String(Subsystem);
			System::String ^dllch = gcnew String(DllCharac);
			textBox1->Text = hFileString;
			textBox3->Text = Mnr;
			textBox2->Text = Sz;
			textBox4->Text = img;
			textBox8->Text = flags;
			textBox6->Text = checksumstr;
			textBox7->Text = szimg;
			textBox5->Text = flagn;
			textBox12->Text = mgc;
			textBox10->Text = mjiv;
			textBox11->Text = mjl;
			textBox9->Text = mjos;
			textBox16->Text = mnos;
			textBox14->Text = win32;
			textBox15->Text = szofhd;
			textBox13->Text = szofu;
			textBox20->Text = subsys;
			textBox18->Text = dllch;



	}
};
}
