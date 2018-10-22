#include<iostream>
using namespace std;

bool checkPrime(unsigned int value)
{
	unsigned long i;
	if (value == 2)
		return 1;
	if (value == 0 || value == 1 || value % 2 == 0)
		return 0;
	for (i = 3; i*i <= value && value % i; i += 2);
	return i * i > value;
}
unsigned long long nPrime(unsigned n)
{
	const int SIZE = 2000100;
	int array[SIZE], i, j, v=0;
	for (i = 0; i < SIZE; i++)
	{
		array[i] = i;     
	}	
	for (i = 2; i < SIZE; i++) 
	{
		if (array[i] != 0)
		{
			for (j = i + 1; j < SIZE; j++) 
			{
				if (array[j] % array[i] == 0)
					array[j] = 0;
			}
		}
	}
	for (i = 2; i < SIZE; i++)
		if (array[i] != 0) {
			v++;
			if (v == n) 
			{
				return i;
				break;
			}
		}
}
unsigned long long nextPrime(unsigned long long value)
{
	int i, j;

	for (i = value + 1; ; ++i)
	{
		for (j = 2; j <= (i / j); j++)
			if (!(i % j))
				break;
		if (j > (i / j))
			break;
	}

	return i;
}