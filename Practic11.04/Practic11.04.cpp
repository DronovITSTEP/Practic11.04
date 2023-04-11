#include <iostream>
#include "PhoneBook.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "");
	PhoneBook p{ "qwrty", "12346", "23457", "22222", "information" };
	PhoneBook p2{ "eyety", "46847", "14654", "11111", "information"};

	PhoneBook* abonents = new PhoneBook[3]{ p, p2, PhoneBook::AddAbonent() };
	for (int i = 0; i < 3; i++) {
		abonents[i].PrintAbonent();
		cout << endl;
	}

	PhoneBook::DeleteAbonent(abonents, 1, 3);

	for (int i = 0; i < 3; i++) {
		abonents[i].PrintAbonent();
		cout << endl;
	}
}
