#include<iostream>
#include<stdlib.h>
#include"task2.h"
using namespace std;

int main()
{
	int value, n, res,res1,res2;
	cin >> value;
	cin >> n;
	checkPrime(value); //�������� ����� �� ��������
	nPrime(n); //���������� n-��� �������� ����� (� ����)
	nextPrime(value); //���������� ���������� ���������� �������� ����� � value
	res = checkPrime(value);
	res1= nPrime(n);
	res2 = nextPrime(value);
	cout << res<<endl;
	cout << res1<<endl;
	cout << res2<<endl;
	system("pause");
}