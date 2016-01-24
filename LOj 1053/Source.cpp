#include<iostream>
#include<stdio.h>
using namespace std;

int check(int a, int b, int c) {
	if (a*a == b*b + c*c) return 1;
	else return 0;
}

int main() {
	int T, a, b, c, res,caseno=0;
	cin >> T;
	while (T--) {
		cin >> a >> b >> c;
		if (a > b && a > c) res=check(a, b, c);
		else if (b > c && b > a) res=check(b, a, c);
		else if (c > a && c > b) res=check(c, a, b);
		if (res == 1) printf("Case %d: yes\n", ++caseno);
		if (res == 0) printf("Case %d: no\n", ++caseno);
	}
	return 0;
}