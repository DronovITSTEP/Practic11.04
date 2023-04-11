#pragma once
#include <iostream>
using namespace std;

/*
�������� ���������� "���������� �����". ����������
������� ������ �� �������� (���, �������� �������,
������� �������, ��������� �������, ��������������
���������� � ��������) ������ ���������������� ������.
��������� ����� �����������-�������, ���������-�������, ��������������,
inline-���������-�������,
����������� ��������������, ���������� ����������.
����������� ���������� �������� ����������� ������
��� ���. ������������ ������������ ����������� ��������� ����� ���������,
������� ���������, ������ ��������� �� ���, ���������� ���� ���������,
��������� ���������� � ���� � ��������� �� �����
*/

class PhoneBook
{
	// ���, �������� �������, ������� �������, ��������� �������, �������������� ���������� � ��������
	char* FIO;
	char* homePhone;
	char* workPhone;
	char* mobilePhone;
	char* info;

public:
	PhoneBook();
	PhoneBook(const char* fio, const char* w, const char* m);
	PhoneBook(const char* f, const char* h, const char* w, const char* m, const char* i);
	~PhoneBook();

	// �������� - ������, ������� ��������������
	void SetFIO(const char* f);
	void SetHPhone(const char* h);
	void SetWPhone(const char* w);
	void SetMPhone(const char* m);
	void SetInfo(const char* i);

	// inline - ������. ��������� (������, ������� ���������� ��������)
	char* GetFIO() { return FIO; }
	char* GetHPhone() { return homePhone; }
	char* GetWPhone() { return workPhone; }
	char* GetMPhone() { return mobilePhone; }
	char* GetInfo() { return info; }

	void PrintAbonent();
	static PhoneBook AddAbonent();
	static void DeleteAbonent(PhoneBook* p, int index, int size);
	void SaveAbonent();
	void LoadAbonent();
};

