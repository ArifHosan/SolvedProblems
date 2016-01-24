#include<iostream>
using namespace std;

class stack{
public:
	int *stk;
	int index, top;
	stack(){
		index = 0; top = 3; stk = new int;
	}
	stack(int a){
		top = a; stk = new int;
		index = 0;
	}
	void push(int a) {
		if (index == top) cout << "Stack Full" << endl;
		else {
			*stk = a;
			stk++; index++;
		}
	}
	int pop() {
		if (index == 0) {
			cout << "Stack Empty" << endl;
			return -1;
		}
		else {
			stk--; index--;
			return *stk;
		}
	}
};

int main() {
	stack s1, s2(5);
	s2.push(5); s2.push(10); s2.push(155);
	s2.push(588); s2.push(578); s2.push(551);
	cout << s2.pop() << endl; cout << s2.pop() << endl; cout << s2.pop() << endl;
	cout << s2.pop() << endl; cout << s2.pop() << endl; cout << s2.pop() << endl;
	return 0;
}
