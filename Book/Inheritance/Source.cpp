#include<iostream>
using namespace std;
class gp{
	int g;
public:
	gp(){
		cout << "Empty-gp" << endl;
	}
};

class parent:public gp{
	int p;
public:
	parent() {
		cout << "Empty- parent" << endl; p = 0;
	}
	parent(int y) {
		cout << "Valued -parent" << endl; p = y;
	}

};
class child:public parent{
	int c;
public:
	child(){
		cout << "Empty -child" << endl;
		c = 0;
	}
	child(int x) {
		cout << "Valued-child" << endl;
	}
	child(int x, int y) :parent (x){
		y = c; cout << "Valued-child" << endl;
	}
	~child() {
		cout << "Destroy -child" << endl;
	}
};

int main() {
	child a(10,20);

}