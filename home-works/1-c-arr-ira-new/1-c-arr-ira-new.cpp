// 1-c-arr-ira-new.cpp: определяет точку входа для консольного приложения.
//

/*
Тема: Работа с двухмерными массивами с исползьзованием оператора new - для динамического выделения памяти под массивы
Домашка: Создать двухмерный динамический массив с рандомным количеством элементов - ввод с клавиатуры
*/


#include "stdafx.h"
#include <iostream>
#include "conio.h"
using namespace std;


void main()
{
	setlocale(LC_ALL, "Russian");
	// создаем двумерный массив

	int rows, cols;
	cout << "Введите количество столбцов (ячеек родительского массива) =" << "\n";
	cin >> rows;
	cout << "Введите количество строк (ячеек дочерненго массива) =" << "\n";
	cin >> cols;


	int **arr = new int*[rows];

	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}



	// Заполняем массив рандомными числами
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}

	// Выводим массив на экран

	for (int i = 0; i < rows; i++)
	{
		cout << "\t\n"; //для красоты

		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}

	}

	// Освобождаем память, удаляя массивы
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}

	delete[] arr;


	system("pause");
}
