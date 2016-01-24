#include<iostream>
using namespace std;

void date(char *d) {
	cout<<"Date: "<<d<<'\n';
}
void date(int m,int d,int y) {
	cout<<"Date: "<<m<<'/'<<d<<'/'<<y<<'\n';
}
int main() {
	date("1/23/2015");
	date(1,23,2015);
	getchar();
	return 0;
}