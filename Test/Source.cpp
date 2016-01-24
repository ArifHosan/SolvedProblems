#include<iostream>
using namespace std;

class A{
private:
	int pri;
public:
	int pub;
protected:
	int pro;
};
class B :public A{
public:
	B(){
		pub = 0; pro = 0;
}
};
class C :private A{
public:
	C() {
		pub = 0; pro = 0;
	}
};
class D :protected A{
public:
	D(){
		pub = 0; pro = 0;
	}
};

int main() {
	C x;
	cout << x.pub;
	B y;
	cout << y.pub;
	D z;
	cout << z.pub;
}