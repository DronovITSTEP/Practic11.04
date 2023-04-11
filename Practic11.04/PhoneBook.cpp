#include "PhoneBook.h"


PhoneBook::PhoneBook(const char* f, const char* h, const char* w, const char* m, const char* i) :
	FIO{ nullptr },
	homePhone{ nullptr },
	workPhone{ nullptr },
	mobilePhone{ nullptr },
	info{ nullptr }
{
	SetFIO(f);
	SetHPhone(h);
	SetWPhone(w);
	SetMPhone(m);
	SetInfo(i);

}
PhoneBook::PhoneBook(const char* f, const char* w, const char* m) :
	PhoneBook(f, nullptr, w, m, nullptr)
{}
PhoneBook::PhoneBook() :
	PhoneBook(nullptr, nullptr, nullptr, nullptr, nullptr)
{}
PhoneBook::~PhoneBook() {
	delete[]FIO;
	delete[]homePhone;
	delete[]workPhone;
	delete[]mobilePhone;
	delete[]info;
}

void PhoneBook::SetFIO(const char* f) {
	if (f) {
		if (FIO) delete[]FIO;
		FIO = new char[strlen(f) + 1];
		strcpy_s(FIO, strlen(f) + 1, f);
	}
}
void PhoneBook::SetHPhone(const char* h) {
	if (h) {
		if (homePhone) delete[]homePhone;
		homePhone = new char[strlen(h) + 1];
		strcpy_s(homePhone, strlen(h) + 1, h);
	}
}
void PhoneBook::SetWPhone(const char* w) {
	if (w) {
		if (workPhone) delete[]workPhone;
		workPhone = new char[strlen(w) + 1];
		strcpy_s(workPhone, strlen(w) + 1, w);
	}
}
void PhoneBook::SetMPhone(const char* m) {
	if (m) {
		if (mobilePhone) delete[]mobilePhone;
		mobilePhone = new char[strlen(m) + 1];
		strcpy_s(mobilePhone, strlen(m) + 1, m);
	}
}
void PhoneBook::SetInfo(const char* i) {
	if (i) {
		if (info) delete[]info;
		info = new char[strlen(i) + 1];
		strcpy_s(info, strlen(i) + 1, i);
	}
}

void PhoneBook::PrintAbonent() {
	if (FIO)
	{
		cout << "ФИО абонента: "; puts(FIO); cout << "\n";
	}
	if (homePhone)
	{
		cout << "Номер домашнего телефона: " << homePhone << "\n";
	}
	if (workPhone)
	{
		cout << "Номер рабочего телефона: " << workPhone << "\n";
	}
	if (mobilePhone)
	{
		cout << "Номер мобильного телефона: " << mobilePhone << "\n";
	}
	if (info)
	{
		cout << "Дополнительная информация: "; puts(info); cout << "\n";
	}
}
PhoneBook PhoneBook::AddAbonent() {
	char* f = new char[150];
	char* h = new char[150];
	char* w = new char[150];
	char* m = new char[150];
	char* i = new char[150];
	cout << "Введите ФИО абонента: "; gets_s(f, 100);
	cout << "Введите Номер домашнего телефона: ";
	gets_s(h, 20);
	cout << "Введите Номер рабочего телефона: ";
	gets_s(w, 20);
	cout << "Введите Номер мобильного телефона: ";
	gets_s(m, 20);
	cout << "Введите Дополнительную информацию: ";
	gets_s(i, 20);

	return PhoneBook(f, h, w, m, i);
}
void PhoneBook::DeleteAbonent(PhoneBook* p, int index, int size) {
	for (int i = index; i < size-1; i++) {
		strcpy_s(p[i].FIO, strlen(p[i].FIO) + 1, p[i + 1].FIO);
		strcpy_s(p[i].homePhone, strlen(p[i].homePhone) + 1, p[i + 1].homePhone);
		strcpy_s(p[i].workPhone, strlen(p[i].workPhone) + 1, p[i + 1].workPhone);
		strcpy_s(p[i].mobilePhone, strlen(p[i].mobilePhone) + 1, p[i + 1].mobilePhone);
		strcpy_s(p[i].info, strlen(p[i].info) + 1, p[i + 1].info);
	}
	delete[]p[size - 1].FIO;
	delete[]p[size - 1].homePhone;
	delete[]p[size - 1].workPhone;
	delete[]p[size - 1].mobilePhone;
	delete[]p[size - 1].info;
}
//void PhoneBook::SaveAbonent() {}
//void PhoneBook::LoadAbonent() {}