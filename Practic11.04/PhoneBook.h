#pragma once
#include <iostream>
using namespace std;

/*
Создайте приложение "Телефонная книга". Необходимо
хранить данные об абоненте (ФИО, домашний телефон,
рабочий телефон, мобильный телефон, дополнительная
информация о контакте) внутри соответствующего класса.
Наполните класс переменными-членами, функциями-членами, конструкторами,
inline-функциями-членами,
используйте инициализаторы, реализуйте деструктор.
Обязательно необходимо выделять динамически память
под ФИО. Предоставьте пользователю возможность добавлять новых абонентов,
удалять абонентов, искать абонентов по ФИО, показывать всех абонентов,
сохранять информацию в файл и загружать из файла
*/

class PhoneBook
{
	// ФИО, домашний телефон, рабочий телефон, мобильный телефон, дополнительная информация о контакте
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

	// мутаторы - методы, которые инициализируют
	void SetFIO(const char* f);
	void SetHPhone(const char* h);
	void SetWPhone(const char* w);
	void SetMPhone(const char* m);
	void SetInfo(const char* i);

	// inline - методы. Аксессоры (методы, которые возвращают значение)
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

