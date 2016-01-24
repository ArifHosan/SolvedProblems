#include<iostream>
using namespace std;

int main() {
	int N, B, H, W,i,j,np=0;
	int cost[18], bed[13];
	cin >> N >> B >> H >> W;
	for (i = 0; i < H; i++) {
		cin >> cost[i];
		for (j = 0; j < W; j++) {
			cin >> bed[j];
		}
	}
	for (i = 0; i < H; i++) {
		if (cost[i] * N <= B) {
			for (j = 0; j < W; j++) {
				if (bed[j] < N) np = 1;
			}
		}
	}
	if (np == 1) cout << "stay home" << endl;
	if (np == 0) cout << cost[i] * N << endl;
	return 0;
}