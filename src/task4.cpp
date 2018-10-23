#include "task4.h"
std::ostream& print(std::ostream & os, char *p)
{
	for (int i = 0; i < strlen(p); i++)
		os << p[i];
	return os;
}
short int atoi(char c)
{
	switch (c)
	{
	case '0':
		return 0;
	case '1':
		return 1;
	case '2':
		return 2;
	case '3':
		return 3;
	case '4':
		return 4;
	case '5':
		return 5;
	case '6':
		return 6;
	case '7':
		return 7;
	case '8':
		return 8;
	case '9':
		return 9;
	}
}
char itoa(short int c)
{
	switch (c)
	{
	case 0:
		return '0';
	case 1:
		return '1';
	case 2:
		return '2';
	case 3:
		return '3';
	case 4:
		return '4';
	case 5:
		return '5';
	case 6:
		return '6';
	case 7:
		return '7';
	case 8:
		return '8';
	case 9:
		return '9';
	}
}
char * sum(char *x, char*y)
{
	int xSize = strlen(x);
	int ySize = strlen(y);
	int dif = abs(xSize - ySize);
	char * buff;
	if (xSize > ySize)
	{
		buff = new char[xSize + 1];
		for (int i = 0; i < dif; i++)
			buff[i] = '0';
		for (int i = dif; i < xSize; i++)
			buff[i] = y[i - dif];
		buff[xSize] = '\0';
	}
	else
	{
		buff = new char[ySize + 1];
		for (int i = 0; i < dif; i++)
			buff[i] = '0';
		for (int i = dif; i < ySize; i++)
			buff[i] = x[i - dif];
		buff[ySize] = '\0';
	}
	int len = std::max(xSize, ySize);
	char *res = new char[len + 1];
	for (int i = 0; i < len; i++)
		res[i] = itoa(0);
	res[len] = '\0';
	char *tmp;
	short int num = 0;
	bool upper = 0;
	for (int i = len - 1; i >= 0; i--)
	{
		if (xSize > ySize)
			num = atoi(x[i]) + atoi(buff[i]);
		else
			num = atoi(y[i]) + atoi(buff[i]);
		if (upper)
		{
			num++;
			upper = 0;
		}
		if (num > 9)
			upper = 1;
		res[i] = itoa(num % 10);
		if (i == 0 && num > 9)
		{
			tmp = new char[len + 1];
			for (int k = len - 1; k >= 0; k--)
			{
				tmp[k] = res[k];
			}
			tmp[len] = '\0';
			delete[] res;
			res = new char[len + 2];
			for (int k = 0; k < len + 1; k++)
				res[k] = itoa(0);
			res[len + 1] = '\0';
			for (int k = len; k > 0; k--)
			{
				res[k] = tmp[k - 1];
			}
			res[1] = itoa(num % 10);
			res[0] = itoa(1);
			delete[] tmp;
			break;
		}
	}
	return res;
}