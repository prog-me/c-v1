// 2-c-string-ira-srtlen.cpp: определяет точку входа для консольного приложения.
//

/*
Написать свою функцию которая рассчитывает и отдает длинну строки
*/


/*
Тыжпрограммист Ира:)
*/


#include "stdafx.h"
#include <iostream>
#include "stdio.h"
#include "string.h"


int main()
{
	//1 Фукнция для определение длинны строки
	int marker = 0;
	char Arr[] = { 'h','e','l','l','o',' ','w','o','r','l','d','\0' };


	for (int i = 0;; i++) 
	{

		if (*(Arr+i) != '\0') {
			marker++;
		}
		else {
			break;
		}	
	}



	printf("%i", marker);
	system("pause");
	return 0;
}

