#include <iostream>
using namespace std;
unsigned long findValue(unsigned int min, unsigned max)
{
	unsigned long k = min;
	for (int i = min; i <= max; i++)
	{
		if (k % i != 0)
		{
			for (int j = 2; j <= i; j++)
			{
				if ((k*j) % i == 0)
				{
					k = k * j;
					break;
				}
				else
					continue;

			}

		}
	}

	return k;
}