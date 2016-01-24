#include<iostream>
#include<string>
#include<cstring>
#include<math.h>

#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int u,v, N, i,in;
	int max[1000000],max_c=0;
	bool fu = 0, fv = 0;
	cin >> N;
	in = 0; 
	while (N--) {
		int res ;
		cin >> u >> v;
		fu = 0; fv = 0;
		for (i = 0; i < max_c; i++) {
			if (u == max[i]) fu = 1;
			if (v == max[i])fv = 1;
		}
		if (!fu) max[max_c++] = u;
		if (!fv) max[max_c++] = v;
		in++;
		res = ((max_c - 1)*max_c) / 2;
		cout << res << endl;
	}
	return 0;
}
