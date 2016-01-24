#include<iostream>
using namespace std;

int main() {
	int i, j,c=2;
	cin >> i >> j;
	cout << i <<" "<< j;
	while (1) {
		if (j % 2 == 0) j = j / 2;
		else if (j% 2 == 1) j = 3 * j + 1;
		if (j < i) break;
		c++;
		cout << j << endl;
	}
	cout << " " << c <<endl;
}