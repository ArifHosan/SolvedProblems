#include<iostream>
using namespace std;

class queue{
public:
	int q[5];
	int size = 5;
	int push_i,pop_i;
	queue() {
		push_i = 0; pop_i = 0;
	}
	void push(int a){
		if (push_i == size) {
			cout << "Queue Full" << endl;
		}
		else q[push_i++] = a;
	}
	void pop() {
		if (pop_i==size) {
			cout << "Queue Empty" << endl;
		}
		else cout << q[pop_i++] << endl;
	}
};

int main() {
	queue q1;
	q1.push(10); q1.push(20); q1.push(30);
	q1.push(40); q1.push(50); q1.push(60);
	q1.pop(); q1.pop(); q1.pop();
	q1.pop(); q1.pop(); q1.pop();
	return 0;
}