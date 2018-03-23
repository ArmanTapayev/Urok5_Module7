#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include "Header.h"


void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int n;
	do
	{
		printf("Работа содержит 13 заданий.\n");
		printf("Для выхода наберите 0.\n");
		printf("Введите номер задания: ");
		scanf("%d", &n);
		printf("\n");

		switch (n)
		{
			case 1:
			{
			 /* Напишите короткую программу на C, которая объявляет и инициализирует (любому интересующему вас значению)
			 double, int и char. Затем объявите и инициализируйте указатель на каждый из три переменные. 
			 Затем ваша программа должна распечатать адрес и значение сохраненный в памяти и размер памяти (в байтах)
			 каждой из шести переменных. */
			
			double a = 46.5, *ptra;
			int b = 46, *ptrb;
			char c = 'A', *ptrc;

			ptra = &a;
			ptrb = &b;
			ptrc = &c;

			printf("a = %3.2lf, *a = %p, *ptra = %p, sizeof(a) = %d\n", a, &a, &ptra, sizeof(a));
			printf("b = %d, *b = %p, *ptrb = %p, sizeof(b) = %d\n", b, &b, &ptrb, sizeof(b));
			printf("c = %c, *c = %p, *ptrc = %p, sizeof(c) = %d\n", c, &c, &ptrc, sizeof(c));
		

				printf("\n");
				system("pause");
				system("cls");

			}break;

			case 2:
			{
			/* Используйте спецификатор форматирования «0x% x» для печати адресов в шестнадцатеричном формате. 
			Вы должны видеть адреса, которые выглядят примерно так: «0xbfe55918». Начальный символы «0x» говорят вам, 
			что используется шестнадцатеричная нотация; остаток цифр выдает адрес.*/
			
			double a = 46.5, *ptra;
			int b = 46, *ptrb;
			char c = 'A', *ptrc;

			ptra = &a;
			ptrb = &b;
			ptrc = &c;
			
			printf("a = %3.2lf, *a = 0x% x, *ptra = 0x% x, sizeof(a) = %d\n", a, &a, &ptra, sizeof(a));
			printf("b = %d, *b = 0x% x, *ptrb = 0x% x, sizeof(b) = %d\n", b, &b, &ptrb, sizeof(b));
			printf("c = %c, *c = 0x% x, *ptrc = 0x% x, sizeof(c) = %d\n", c, &c, &ptrc, sizeof(c));

			printf("\n");
			system("pause");
			system("cls");
			}
			break;

			case 7:
			{
			/* Напишите программу на C, чтобы проверить, может ли Number быть выражен как сумма двух простых чисел*/

				int Number, flag = 0;

				printf("Введите целое положительное число: ");
				scanf("%d", &Number);

				for (int i = 2; i <= Number/2; i++)
				{
					if (primeNumber(i) == 1)
					{
						if (primeNumber(Number - i) == 1)
						{
							printf("%d = %d + %d\n", Number, i, Number - i);
							flag = 1;
						}
					}
				}
				if (flag == 0)
					printf("%d не может выражено как сумма простых чисел.", Number);


			printf("\n");
			system("pause");
			system("cls");
			}
			break;

			case 8:
			{
			/*Напишите программу в C, чтобы преобразовать десятичное число в шестнадцатеричное.*/



			printf("\n");
			system("pause");
			system("cls");
			}
			break;

		}
	} while (n != 0);
}

