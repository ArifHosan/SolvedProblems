#include<iostream>
#include <time.h>
using namespace std;


int main() {
	clock_t tStart = clock();
	long long int x = 8589869056, sum = 0;
	//cout << "Input Integer:" << endl;
	//cin >> x;
	for (long long int i = 1; i <= x / 2; i++) {
		if (x%i == 0) {
			sum+=i;
		}
	}
	if (sum == x) cout << "Perfect Number!!" << endl;
	else cout<<"\tNot Perfect"<< endl;
	printf("Time taken: %.2fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
	return 0;
}