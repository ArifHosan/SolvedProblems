#include<iostream>
#include<stdio.h>
using namespace std;

int main()  {
	int number, hour;
	float salary;
	cin >> number >> hour >> salary;
	cout << "NUMBER = " << number << endl;
	printf("SALARY = U$ %.2f\n", salary*hour);
	return 0;
}