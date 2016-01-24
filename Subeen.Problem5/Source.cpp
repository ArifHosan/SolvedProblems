#include<iostream>
using namespace std;

int main() {
	int i,x,sum=0;
	char a,b,c;
	cin>>x;
	for(i=0;i<x;i++) {
			cin>>a>>b>>c;
			sum=a+b+c;
			cout<<sum<<endl;
	}
	return 0;
}