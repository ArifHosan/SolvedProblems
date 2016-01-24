#include<iostream>
using namespace std;

int main() {
	int T,n,N,i,dust,sum=0;
	cin >> T;
	for (n = 1; n <= T; n++) {
		//cout << endl;
		cin >> N;
		sum = 0;
		if (N<=1000) {
			for (i = 0; i < N; i++) {
				cin >> dust;
				if (dust<0) continue;
				sum += dust;
			}
		}
		cout << "Case " << n << " : " << sum << endl;
	}
	return 0;
}