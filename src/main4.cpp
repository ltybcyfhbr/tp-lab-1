#include<iostream>
#include<stdlib.h>
#include"task3.h"
using namespace std;


int main()
{
	int hbound, res;
	cin >> hbound;

	sumPrime(hbound);
	res= sumPrime(hbound);
	cout << res;
	system("pause");
}