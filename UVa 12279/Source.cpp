#include<iostream>
#include<stdio.h>
using namespace std;


int main() {
	int N, X = 0, i = 0, Y = 0, spsd_trt = 0, trt_given = 0, reason,balance;
	while (1) {
		cin >> N;
		if (N == 0) break;
		for (i = 0; i < N; i++) {
			cin >> reason;
			if (reason == 0) trt_given++;
			if (reason>0 && reason<99) spsd_trt++;
		}
		balance = spsd_trt - trt_given;
		printf("Case %d: %d\n", ++X, balance);
	}
	return 0;
}