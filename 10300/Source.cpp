#include<iostream>
using namespace std;

int main(){
	int n, f, area, animal, degree;
	cin >> n;
	while (n--) {
		int total = 0; 
		cin >> f;
		while (f--) {
			cin >> area >> animal >> degree;
			total += (area*degree);
		}
		cout << total << endl;
	}
	return 0;
}