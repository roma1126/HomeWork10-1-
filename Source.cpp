#include <iostream>

int main()
{
	system("chcp 1251");
	setlocale(LC_ALL, "Rus");

	std::string name;

	std::cout << "������� ���: ";
	std::cin >> name;
	std::cout << "������������, " << name << "!";
}