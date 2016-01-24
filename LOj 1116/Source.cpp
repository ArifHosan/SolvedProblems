#include<iostream>
using namespace std;

int main() {
	int T, N, M, W,caseno=0,i,f=0;
	cin >> T;
	while (T--) {
		cin >> W;
		cout << "Case " << ++caseno << ":";
		for (i = 2; i < W; i=i+2) {
			if (W%i == 0) {
				if ((W/i)%2 == 1) {
					M = i;
					N = W / i;
					f = 1;
					break;
				}
			}
		}
		if (f == 1) cout << N << " " << M << endl;
		else cout << "Impossible" << endl;	

	}
	return 0;
}