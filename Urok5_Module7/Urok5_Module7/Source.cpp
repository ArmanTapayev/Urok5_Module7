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
				int number;
				printf("Введите десятичное число: ");
				scanf("%d", &number);
				//hexNum(number);
				hexNumReverse(number);
				//printf("%d - %c", number, hexNum(number));

			printf("\n");
			system("pause");
			system("cls");
			}
			break;

			case 9:
			{
			/*Напишите программу c для чтения времени в формате HH24: MM: SS с использованием оператора
			single scanf (), убедитесь, что входное значение должно быть правильным, если входные значения 
			неверны, прочитайте их рекурсивно; распечатать время в HH24: MM: SS, если значения верны.*/
				int HH, MM, SS;

				printf("Введите время в формате HH24:MM:SS - ");
				scanf("%d:%d:%d", &HH, &MM, &SS);

				if (HH>24)
				{
					printf("Вы ввели часы HH как %d, правильный формат: %d:%d:%d\n", HH, rightHour(HH), MM, SS);
				}

				else if (MM>60)
				{
					printf("Вы ввели минуты MM как %d, правильный формат: %d:%d:%d\n", MM, HH, rightMinute(MM), SS);
				}

				else if (SS>60)
				{
					printf("Вы ввели секунды SS как %d, правильный формат: %d:%d:%d\n", SS, HH, MM, rightSecond(SS));
				}
				else
					printf("Введенное время %d:%d:%d\n", HH, MM, SS);

				printf("\n");
				system("pause");
				system("cls");

			}break;

			case 10:
			{
			/*Напишите программу c для ввода и печати возраста, который должен быть больше 18 и 
			менее 30 лет, необходимо проверить возрастную проверку и ввести возраст рекурсивно
			до тех пор, пока значение возраста не будет действительным.*/
				int age, rightAge;
				
				printf("Введите возраст: ");
				scanf("%d", &age);

				if (age < 18)
				{
					rightAge = ageUpward(age);
					printf("Ваш возраст %d, необходимый возраст %d", age, rightAge);
				}
				if (age > 30) 
				{
					rightAge = ageDownward(age);
					printf("Ваш возраст %d, необходимый возраст %d", age, rightAge);
				}
				if ((age <= 30) && (age >= 18))
					printf("Ваш возраст %d является легитимным", age);

				printf("\n");
				system("pause");
				system("cls");

			}
			break;

			case 11:
			{
			/*Напишите программу c для ввода n чисел, напечатайте их сумму и наибольшее число,
			не сохраняя их в массиве.*/
				int number, i = 1, max, b, sum;
				printf("Введите количество чисел в последовательности n: ");
				scanf("%d", &number);

					printf("Введите %d число: ", i);
					scanf("%d", &max);

					sum = max;

					while (number > 1)
					{					
						printf("Введите %d число: ", ++i);
						scanf("%d", &b);
						number--;

						maxSum(&b, &sum, &max);
					}

				printf("\nСумма чисел: %d\n", sum);
				printf("Наибольшее число: %d\n", max);

				printf("\n");
				system("pause");
				system("cls");
			}
			break;
		}
	} while (n != 0);
}

