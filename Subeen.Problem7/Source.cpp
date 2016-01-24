#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int n,i,a;
	double b;
	cin>>n;
	for(i=0;i<n;i++) {
		cin>>a;
		b=sqrt(a);
		if(b-(int)b==0) {
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
	return 0;
}
