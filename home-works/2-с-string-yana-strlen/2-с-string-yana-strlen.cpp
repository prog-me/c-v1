// 2-с-string-yana-strlen.cpp: определяет точку входа для консольного приложения.
//


/*
Написать свою функцию которая рассчитывает и отдает длинну строки
*/


/*
Тыжпрограммист Яна:)
*/



#include "stdio.h"
#include "stdafx.h"
#include "stdafx.h"
#include "locale.h"
#include "iostream"

using namespace std;



int f_strlen(char *str) {

	int i = 0;

	int strlen = 0;



	while (*(str + i) != 0) {
		i++;
	}
	strlen = i;
	return strlen;
}




int main()
{
	setlocale(LC_ALL, "Russian");
	char str[] = "Приветик";
	cout << "Длина строки - " << f_strlen(str) << endl;



	system("pause");
	return 0;
}

