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