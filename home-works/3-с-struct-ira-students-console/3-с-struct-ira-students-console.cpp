// 3-с-struct-ira-students-console.cpp: определяет точку входа для консольного приложения.
//

/*
Тема знакомство со структурами
Домашка - создать массив студентов из типа структуры student - заполнить, вывести на диспелей консоли. Рассчитать средний бал за предметы
*/



#include <iostream>
#include "stdio.h"
#include "stdafx.h"
#include "locale.h"
#include "iostream"
#include <string.h>
using namespace std;
#define a 3



int main()
{
	setlocale(LC_ALL, "Russian");

	struct subject {
		int programming;
		int drawing;
		int PT;

	};


	struct student {
		char name[20];
		int age;
		subject subjects;
	};


	struct student klass[a];

	for (int i = 0; i < a; i++) {
		cout << "\n" << "Введите имя студента " << i << "\t";
		cin >> klass[i].name;
		cout << "Введите возраст:" << "\t";
		cin >> klass[i].age;
		cout << "\n" << "Введите оценки:" << endl;
		struct subject subjects[a];



		cout << "\n" << "1. Оценка попрограммированию:" << "\t";
		cin >> klass[i].subjects.programming;
		cout << "2. Оценка по рисованию:" << "\t";
		cin >> klass[i].subjects.drawing;
		cout << "3. Оценка по физкультуре:" << "\t";
		cin >> klass[i].subjects.PT;


	}


	cout << "\n\n\n" << "ФИО - - - ВОЗРАСТ - - - - Программирование - - - - -Рисование  - - - - - Физкультура  - - - - - СРЕДНИЙ БАЛ" << "\n";
	for (int i = 0; i < a; i++) 
	{
		double average = (klass[i].subjects.programming + klass[i].subjects.drawing + klass[i].subjects.PT) / a;

		cout << "\n" << klass[i].name << "- - - - -" << klass[i].age << " - - - - - - - - -" << klass[i].subjects.programming << " - - - - - - - - - - -" << klass[i].subjects.drawing << " - - - - - - - - - -" << klass[i].subjects.PT << " - - - - - - - - - - " << average << "\n";
	}



	system("pause");
	return 0;
}


