// 4-с-files-ira-struct_to_file.cpp: определяет точку входа для консольного приложения.
//


/*
Тема: Работа с файлами - Запись и чтение структур в файл без испльзования специальных функцийы
Домашка: записать структуру в файл считать с файла и вывести в консоль
*/




#include <iostream>
#include "stdio.h"
#include "stdafx.h"
#include "locale.h"
#include "iostream"
#include <string.h>
using namespace std;
#define a 1



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


	FILE *f = NULL;

	if ((f = fopen("file.txt", "w")) == NULL)
	{
		printf("Cannot open directory file.");
		exit(1);
	}


	cout << "\n\n\n" << "ФИО - - - ВОЗРАСТ - - - - Программирование - - - - -Рисование  - - - - - Физкультура  - - - - - СРЕДНИЙ БАЛ" << "\n";
	for (int i = 0; i < a; i++) {

		double average = (klass[i].subjects.programming + klass[i].subjects.drawing + klass[i].subjects.PT) / a;

		cout << "\n" << klass[i].name << "- - - - -" << klass[i].age << " - - - - - - - - -" << klass[i].subjects.programming << " - - - - - - - - - - -" << klass[i].subjects.drawing << " - - - - - - - - - -" << klass[i].subjects.PT << " - - - - - - - - - - " << average << "\n";
	}



	fprintf(f, "%s", "\n\n\nФИО - - - ВОЗРАСТ - - - - Программирование - - - - -Рисование  - - - - - Физкультура  - - - - - СРЕДНИЙ БАЛ\n");






	for (int i = 0; i < a; i++) {

		double average = (klass[i].subjects.programming + klass[i].subjects.drawing + klass[i].subjects.PT) / a;

		fprintf(f, "%s- - - - -%i - - - - - - - - -%i- - - - - - - - - - -%i- - - - - - - - - -%i- - - - - - - - -%lf", klass[i].name, klass[i].age, klass[i].subjects.programming, klass[i].subjects.drawing, klass[i].subjects.PT, average);

	}



	fclose(f);



	system("pause");
	return 0;
}

