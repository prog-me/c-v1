// 3-c-struct.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include "string.h"
#include "locale.h"
#define col 1


using namespace std;
int main()
{

	setlocale(LC_ALL, "Rus");


	struct person {
		const char *name=NULL;
		int old;
	};



	struct car 
	{
		char color[200] = {0};
		int speed;
		char model[200] = {0};
		person owner;
	};



	
	struct car cars[col];



	for (int i = 0; i < col; i++) 
	{
		cout << "Введите цвет машины:" << endl;
		cin >> cars[i].color;
		cout << "Введите максимальную скорость:" << endl;
		cin >> cars[i].speed;
		cout << "Введите модель:" << endl;
		cin >> cars[i].model;


		cars[i].owner.name="Misha";
		cars[i].owner.old=27;
	}



	for (int i = 0; i < col; i++)
	{
		cout << "Цвет машины:" << cars[i].color << endl;
		cout << "Vаксимальную скорость:" << cars[i].speed << endl;
		cout << "Модель:" << cars[i].model<<endl;
		cout << "Владелец:" << cars[i].owner.name<<endl;
	}




	system("pause");
    return 0;
}

