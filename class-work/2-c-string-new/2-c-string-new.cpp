// timer-project.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include "string.h"
#include "locale.h"



//Рассмотриваем специальную функцию в языке СИ для перевода типа int в string
//Подробности тут - http://www.c-cpp.ru/content/sprintf
void inttostring() {

	int integer = 2;
	char string[50] = { 0 };
	sprintf(string, "%d", integer);

}









using namespace std;
int main()
{

	char * string = new char[20];

	cin >> string;

	cout << string;



	system("pause");
	return 0;
}

