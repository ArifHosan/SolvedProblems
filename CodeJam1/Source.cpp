#include<iostream>
using namespace std;

int main() {
	int T, a, csn=1;
	char arr[6];
	cin >> T;
	while (T--) {
		int c = 0;
		cin >> a;
		cin >> arr;
		for (int i = 0; i <= a; i++) {
			if (arr[i] == '0') c++;
		}
		cout << "Case #" <<csn++ << ": " << c << endl;
	}
	return 0;
}