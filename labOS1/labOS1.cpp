// Laba1OS.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <locale.h>


int _tmain(int argc, _TCHAR* argv[])
{
	_tsetlocale(LC_ALL, _T("Russian"));
	int result = sizeof(TCHAR);
	if (result == 2)
		printf("%s. Size of TCHAR = %d\n", "UNICODE", sizeof(TCHAR));//2 bytes
	else
		printf("%s. Size of TCHAR = %d\n", "ANSI", sizeof(TCHAR)); //1 byte

	char Names[2][35] = { "�������� ������� �����������", "������� ������� �����������" }; // 2 ������ �� 35 �������� ��������
	for (int i = 0; i < sizeof(Names) / sizeof(Names[0]); i++)
		printf("%s\n", Names[i]);
	for (int i = 0; i < sizeof(Names) / sizeof(Names[0]); i++)
		//MultiByteToWideChar();
		;
}