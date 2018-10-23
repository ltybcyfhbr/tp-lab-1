#include<iostream>

using namespace std;

unsigned long long sumPrime(unsigned int hbound)
{
	int p, summ = 2;
	double k;
	int f = 0;
	for (int i = 3; i<hbound + 1; i++)
	{
		if (i % 2 != 0)
		{
			k = sqrt(i);
			p = ceil(k);
			f++;
			for (int j = 2; j <= p; j++)
			{
				if (i%j == 0)
				{
					f++;
				}
			}
			if (f<2)
			{
				summ += i;
			}
			f = 0;
		}
	}return summ;
}