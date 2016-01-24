#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

int main() {
	char str[100000];
	int i,c=1;
	gets_s(str);
	for (i = 0; i < 100000; i++) {
		if (str[i] == 34 && c % 2 == 0) {
			str[i] = '`'; str[i + 1] = '`';
			c++;
		}
		if (str[i] ==34 && c % 2 == 0) {
			str[i] = 39; str[i + 1] = 39;
			c++;
		}
	}
	cout << str<<endl;
	return 0;
}
