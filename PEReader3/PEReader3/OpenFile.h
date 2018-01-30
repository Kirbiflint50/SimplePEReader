#pragma once
#include "PeReaderform.h"
#include <windows.h>
#include <Commdlg.h>





void Open()
{
	HANDLE hFile;
	DWORD bytesRead;
	OPENFILENAME ofn;
	DWORD problem;
	WCHAR title[260];

	ZeroMemory(&ofn, sizeof(ofn));
	ofn.lStructSize = sizeof(OPENFILENAME);
	///ofn.hwndOwner = hWnd;
	ofn.lpstrFile = (LPWSTR)title;
	ofn.nMaxFile = sizeof(title);
	ofn.lpstrFilter = TEXT("All files(*.*)\0*.*\0");
	ofn.nFilterIndex = 1;
	ofn.lpstrInitialDir = NULL;
	ofn.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST;

	if (GetOpenFileName(&ofn) == false)
	{
		problem = CommDlgExtendedError();
		///return false;
		MessageBox::Show("Sorry!");
	}
}