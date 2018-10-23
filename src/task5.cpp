#include <iostream>

void split(char ***result, int *N, char *buf, char ch) {
	int counter = 0;
	int len = 0;
	for (int i = 0; buf[i] != '\0'; i++)
	{
		if (buf[i] == ch)
			counter++;
		len++;
	}
	counter++;
	char **tmp = new char*[counter];
	for (int i = 0; i < counter; i++)
		tmp[i] = new char[len + 1];
	*N = counter;
	int i = 0, j = 0, k = 0;
	for (; buf[i] != '\0'; i++)
	{
		tmp[j][k] = buf[i];
		k++;
		if (buf[i] == ch) {
			tmp[j][k - 1] = '\0';
			j++;
			k = 0;
		}
	}
	tmp[j][k] = '\0';
	*result = tmp;
}
