#include<iostream>
using namespace std;

class rect {
	int a, b;
public:
	rect() {
		a = 0; b = 0;
	}
	rect(int aa, int bb) {
		a = aa; b = bb;
	}
	void show() {
		cout << "A: " << a << endl;
		cout << "B: " << b << endl;
	}
	rect operator+ (rect a) {
		rect tmp;
		tmp.a = this->a + a.a;
		tmp.b = b + a.b;
		return tmp;
	}
	rect operator- (rect a) {
		rect tmp;
		tmp.a = this->a - a.a;
		tmp.b = b - a.b;
		return tmp;
	}
	void operator++ (int) {
		this->a++;
		this->b++;
	}
	friend rect operator+ (int x, rect r);
};
rect operator+(int x, rect r) {
	r.a += x; r.b += x;
	return r;
}

int main() {
	rect r1(20, 10), r2(2, 1), r3(12, 7), r4;
	r4 = r1 + r2 -r3;
	r4.show();
	r4++; r4.show();
	rect r;
	r = 10 + r4;
	r.show();


}