// 2-с-string_Потребко_Длина_строки.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include "string.h"
#include "locale.h"

using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");

	//1 Фукнция для определение длинны строки
	//int Mylen=0;




	char buffer[50] = "Hello world3 and 4 hjdahdfkasdjf2fsdfs34";



	//scanf_s("%s", buffer);
	//
	//puts(buffer);



	cin >> buffer;
	cout << buffer;

	//for (int i = 0; string[i]!='\0'; i++ ) 
	//{
	//	Mylen = i+1;
	//}
	// 

	//puts("Введите строку");



	//scanf_s("%s", strings);


	//cin >> string;


	//puts(string);



	//puts("Hello");

	//printf("%s", "Hello");



	system("pause");

	return 0;
}