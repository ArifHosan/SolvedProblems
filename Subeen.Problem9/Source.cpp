#include<iostream>
#include <iomanip>
using namespace std;

int main() {
	int N,i,j,s,sum=0;
	double a,avg=0;
	cin>>N;
	for(i=0;i<N;i++) {
		cin>>s;
		for(j=0;j<s;j++) {
			cin>>a;
			sum+=a;
		}
		avg=sum/(double)s;
		cout<<fixed<<setprecision(2)<<avg<<endl;
		sum=0;
	}
	return 0;
}