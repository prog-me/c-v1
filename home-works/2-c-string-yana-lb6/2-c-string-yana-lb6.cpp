// 2-c-string-yana-lb6.cpp: определяет точку входа для консольного приложения.
//

/*
Тема: Строки и функции
Цель работы: изучить особенности работы со строковыми объектами
как одномерными символьными массивами, научиться использовать массивы
указателей.
ЗАДАНИЕ 1:
Во всех заданиях предусмотреть захват и освобождение динамической
памяти (операции new, delete), решение оформить в виде отдельной
функции, которой передается исходная строка. На печать вывести исходную и
преобразованную строки.
*/


/*
7 - вариант - Ввести строку символов, если ее длина кратна 5, посчитать количество
скобок всех видов, выделив их в отдельную строку.
*/

/*
Тыжпрограммист Яна:)
*/



#include <iostream>
#include "stdio.h"
#include "stdafx.h"
#include "locale.h"
#include "iostream"
#include <string.h>
using namespace std;


int fun1(char *string, int size) {


	char mass[99] = { 0 };
	int marker = 0;
	int count = 0;



	if (size % 5 == 0)
	{


		for (int i = 0; i <= size; i++) {

			if (string[i] == '(' || string[i] == ')' || string[i] == '{' || string[i] == '}' || string[i] == '[' || string[i] == ']')
			{
				mass[marker] = string[i];
				marker++;
			}
			/*else
			{
			cout << "В строке нет никаких скобок";
			}*/
		}

		count = sizeof(mass) / sizeof(mass[0]);
	}

	else
	{
		cout << "Введенная строка НЕ кратка 5" << endl;
	}



	//cout << "Количество скобок всех видов: " << count << endl;
	cout << "Вот моя исходная строка: " << string << endl;
	cout << "Вот моя преобразованная строка: " << mass << endl;
	return 0;
}





int main()
{
	setlocale(LC_ALL, "Russian");

	char *string = new char[100];


	cout << "Введите строку:" << endl;
	cin >> string;


	if (strlen(string) > 100)
	{
		cout << "Вы превысили допустимое значение длинны строки";
		exit(1);
	}


	int size = strlen(string);

	fun1(string, size);

	delete string;
	system("pause");
	return 0;
}