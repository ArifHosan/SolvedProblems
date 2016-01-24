#include<iostream>
using namespace std;

int find(int a) {
	int sum = 0;
	while (a) {
		sum += (a % 2);
		a = a / 2;
	}
	return sum;
}

int main() {
	int T, case_no = 0,N,value,i,value_2;
	cin >> T;
	while (T--)
	{
		cin >> N;
		value = find(N);
		for (i = N + 1;; i++) {
			value_2 = find(i);
			if (value == value_2) break;
		}
		cout << "Case " << ++case_no << ":" << i << endl;
	}
	return 0;
}