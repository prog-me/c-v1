// 4-c-files-yana-struct_to_file.cpp: определяет точку входа для консольного приложения.
//

/*
Тема: Работа с файлами - Запись и чтение структур в файл без испльзования специальных функцийы
Домашка: записать структуру в файл считать с файла и вывести в консоль
*/




#include "stdafx.h"
#include <iostream>
#include "stdio.h"
#include "io.h"
#include "stdafx.h"
#include "locale.h"
#include "iostream"
#include <string.h>

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <malloc.h>
#include <conio.h>
#include <string.h>
#include <windows.h>



using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода



	FILE *file;
	const char* file_name = "Yana-txt.txt";


	file = fopen(file_name, "w");
	if ((file = fopen(file_name, "w")) == NULL) {
		printf("Cannot open file.\n");
		exit(1);
	}




	struct subject {
		int maths;
		int physics;
		int philosophy;
	};

	struct student
	{
		char name[100];
		int age;
		subject subjects;
	};



	struct student Students[3];
	struct subject subjects[3];
	float ball = 0;

	for (int i = 0; i <= 2; i++) {
		cout << "\nВведите имя " << i + 1 << "-го студента: \t";
		cin >> Students[i].name;
		const char *string1 = Students[i].name;
		cout << "\nВведите возраст " << i + 1 << "-го студента: \t";
		cin >> Students[i].age;
		cout << "\nВведите оценку по математике " << i + 1 << "-го студента: \t";
		cin >> Students[i].subjects.maths;
		cout << "\nВведите оценку по физике " << i + 1 << "-го студента: \t";
		cin >> Students[i].subjects.physics;
		cout << "\nВведите оценку по философии " << i + 1 << "-го студента: \t";
		cin >> Students[i].subjects.philosophy;

	}


	fprintf(file, "%s", "\n----ИМЯ--------ВОЗРАСТ--------МАТЕМАТИКА--------ФИЗИКА--------ФИЛОСОФИЯ--------СРЕДНИЙ БАЛЛ--\n");

	for (int i = 0; i <= 2; i++) {
		ball = (Students[i].subjects.maths + Students[i].subjects.physics + Students[i].subjects.philosophy) / 3;
		cout << "\n---" << Students[i].name << "-----------" << Students[i].age << "---------------" << Students[i].subjects.maths << "----------------" << Students[i].subjects.physics << "----------------" << Students[i].subjects.philosophy << "----------------" << ball << "\n";
		fprintf(file, "\n------%s-------------%s-------------------%s--------------------%s--------------------%f-------------------\n", Students[i].name, Students[i].age, Students[i].subjects.maths, Students[i].subjects.physics, Students[i].subjects.philosophy, ball);
	}







	system("pause");
	return 0;
}