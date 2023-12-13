﻿/*
19. Дана строка, содержащая полное имя файла, то есть имя диска,
список каталогов (путь), собственно имя и расширение.
Выделить из этой строки расширение файла (без предшествующей точки).
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	system("chcp 1251");
	// создаем строку
	string str;
	cout << "Введите полное имя файла:\n";
	getline(cin, str);
	// проверка
	if (str.find_last_of('.') == string::npos)
	{
		cerr << "Файл не имеет расширения\n";
		return 1;
	}
	// содаем переменную beg - индекс первого символа расширения
	size_t beg = str.find_last_of('.') + 1;
	// создаем переменную ras, в которую копируем текст расширения
	string ras = str.substr(beg);
	cout << "Файли имеет расширение:\n" << ras;
}