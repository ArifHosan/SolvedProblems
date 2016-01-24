#include <iostream>
#include<math.h>
using namespace std;
#define pi 2*acos(0.0)
int main() {
	int T,i;
	float r, area_c, area_s, area;
	cin >> T;
	for (i = 1; i <= T; i++) {
		cin >> r;
		area_c = pi*r*r;
		area_s = 4 * r*r;
		area = area_s - area_c;
		printf("Case %d: %.2f\n", i, area);
	}
	return 0;
}
