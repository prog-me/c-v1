// 2-c-string-ira-get_int_from_string.cpp: определяет точку входа для консольного приложения.
//

/*
	Тема: Работа со строками - функции для работы со строками
	Домашка: Вычленить из строки цифры и запись их в числовой массив
*/


#include "stdio.h"
#include "stdafx.h"
#include "stdafx.h"
#include "locale.h"
#include "iostream"

using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");



	char string[] = "Hello4543dsf";
	char buffer[50];
	int mass[10] = { 0 };
	int marker = 0;

	for (int i = 0; i <= strlen(string); i++)
	{
		if (isdigit(string[i]))
		{

			sprintf_s(buffer, "%c", string[i]);

			mass[marker] = atoi(buffer);

			marker++;
		}
	}

	for (int i = 0; i <4; i++)
	{
		cout << mass[i] << endl;
	}



	system("pause");

	return 0;
}
