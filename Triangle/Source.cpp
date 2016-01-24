#include<iostream>
using namespace std;
class Triangle {
public:
	int a,b,c,base,h;
	void show() {
		cout<<"A: "<<a<<"B: "<<b<<"C: "<<c<<endl;
	}
	void valid() {
		if((a+b)>c && (b+c)>a && (c+a)>b) 
		cout<<"Triangle possible"<<endl;
	}
	void area() {
		cout<<"Area: "<<0.5*base*h<<endl;
	}
};
int main() {
	Triangle t1;
	cout<<"Enter three sides: "<<endl;
	cin>>t1.a>>t1.b>>t1.c;
	cout<<"Enter base & height: "<<endl;
	cin>>t1.base>>t1.h;
	t1.valid();
	t1.show();
	t1.area();
}