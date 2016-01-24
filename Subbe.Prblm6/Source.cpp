#include<iostream>
using namespace std;

int main() {
	int m[5],X,i,max=0,min=100,j,k;
	cin>>X;
	for(i=0;i<X;i++) {
		for(j=0;j<5;j++) {
			cin>>m[j];
		
		if(m[j]>max)
			max=m[j];
		if(m[j]<min)
			min=m[j];
		}
		cout<<max<<' '<<min<<endl;
	}
	return 0;
}