#include<iostream>
#include<ctime>
using namespace std;

class stopwatch{
public:
	clock_t begin, end;
	stopwatch() {
		begin = 0; end = 0;
	}
	~stopwatch() {
		show();
	}
	void start() {
		begin = clock();
	}
	void stop() {
		end = clock();
	}
	void show() {
		cout << (end - begin)/1000 << endl;
	}
};

int main() {
	int i;
	time_t t;
	time(&t);
	cout <<ctime(&t)<< endl;
	stopwatch s1, s2;
	s1.start();
	cout << "Started Stopwatch" << endl;
	cin >> i;
	s1.stop();
	s1.show();
	return 0;
}