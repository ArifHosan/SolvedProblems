#include<iostream>
using namespace std;

int main() {
	int chess[5][5] = { 1, 4, 5, 16, 17,2, 3, 6, 15, 18,9, 8, 7, 14, 19,10, 11, 12, 13, 20,	25, 24, 23, 22, 21 };
	int T,i,sec,j,k;
	cin >> T;
	for (i = 0; i < T; i++) {
		cin >> sec;
		if (sec>25)	sec = sec % 25;
		for (j = 0; j < 5; j++) {
			for (k = 0; k < 5; k++) {
				if (sec == chess[j][k])
					cout << "Case " << i + 1 << ": " << k+1 << " " <<j+1 << endl;
			}
		}
	}
	return 0;
}