#include<iostream>
using namespace std;

class stack{
public:
	char stk[5][20];
	int index = 0;
	void push(char A[20]) {
		strcpy_s(stk[index], A);
		index++;
	}
	void pop() {
		index--;
		cout << stk[index];
	}
};

int main() {
	stack s;
	s.push("Good work");
	s.pop();
}