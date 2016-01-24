#include<iostream>
using namespace std;

int main() {
	int N,r,l,w,i;
	cin>>N;
	for(i=0;i<N;i++) {
		cin>>r>>l>>w;
		if(2*r<=l && 2*r<=w) {
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
	return 0;
}