#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include "Header.h"

/* Поиск простого числа */
int primeNumber(int n)
{
	int flag = 1;

	for (int i = 2; i <= n/2; i++)
	{
		if (n % i == 0)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}

/*Напишите программу в C, чтобы преобразовать десятичное число в шестнадцатеричное.*/
char hexNum(int x)
{
	switch (x)
	{
	case 0: return '0'; break;
	case 1: return '1'; break;
	case 2: return '2'; break;
	case 3: return '3'; break;
	case 4: return '4'; break;
	case 5: return '5'; break;
	case 6: return '6'; break;
	case 7: return '7'; break;
	case 8: return '8'; break;
	case 9: return '9'; break;
	case 10: return 'A'; break;
	case 11: return 'B'; break;
	case 12: return 'C'; break;
	case 13: return 'D'; break;
	case 14: return 'E'; break;
	case 15: return 'F'; break;
	}
}

void hexNumReverse(int x)
{
	char hex[50] = {};

	int hexNumber = 0, i = 1,k=0;

		while (x != 0)
		{
			hexNumber = (x % 16)*i;
			x /= 16;
			hex[k] = hexNum(hexNumber);
			k++;
			
			//i *= 10;
		}

		for (int i = k-1; i >= 0; i--)
		{
			printf("%c", hex[i]);
		}
}

/*Напишите программу c для чтения времени в формате HH24: MM: SS с использованием оператора
single scanf (), убедитесь, что входное значение должно быть правильным, если входные значения
неверны, прочитайте их рекурсивно; распечатать время в HH24: MM: SS, если значения верны.*/
int rightHour(int HH)
{
	if (HH == 24)
		return 24;
	return rightHour(HH - 1);
}

int rightMinute(int MM)
{
	if (MM == 60)
		return 60;
	return rightMinute(MM - 1);
}

int rightSecond(int SS)
{
	if (SS == 60)
		return 60;
	return rightSecond(SS - 1);
}

/*Напишите программу c для ввода и печати возраста, который должен быть больше 18 и
менее 30 лет, необходимо проверить возрастную проверку и ввести возраст рекурсивно
до тех пор, пока значение возраста не будет действительным.*/
int ageUpward(int age)
{
	if (age == 18)
		return 18;
	return ageUpward(age + 1);
}

int ageDownward(int age)
{
	if (age == 30)
		return 30;
	return ageDownward(age-1);
}

/*Напишите программу c для ввода n чисел, напечатайте их сумму и наибольшее число,
не сохраняя их в массиве.*/
void maxSum(int *b, int *sum, int *max)
{

	if (*max < *b)
		*max = *b;
	*sum += *b;
}

void foo()
{
	char *string, *x;

	string = (char *)malloc(20);

	strcpy(string, "Hello World.");

	x = string;

		for (; *x != '\0'; x++) 
		{
			printf("%c", *x);
		}

	printf("\n");

}

void foo2() 
{
	int x, *y;

	x = 30;
	y = &x;
	y++;

	printf("x=%d y=%d\n", x, *y);
}

