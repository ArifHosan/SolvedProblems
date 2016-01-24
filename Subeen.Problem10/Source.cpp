#include<iostream>
using namespace std;

int prime(int n) {
	int i;
	for(i=2;i<n;i++) {
		if(n%i==0) break;
	}
	if(i==n) return 1;
	else return 0;
}

int main() {
	int i,n,j,p,f=0,c=0;
	cin>>n;
	for(i=0;i<n;i++) {
		for(j=0;j<10;j++) {
			cin>>p;
			f=prime(p);
			c=c+f;
		}
		cout<<c<<endl;
	}
	return 0;
}