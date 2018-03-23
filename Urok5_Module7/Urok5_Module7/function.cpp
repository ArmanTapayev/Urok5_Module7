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