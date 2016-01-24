#include<iostream>
using namespace std;

class card{
public:
	char title[50], author[100];
	int no;
	void store(char *t,char *a, int n){
		strcpy_s(title, t);
		strcpy_s(author, a);
		no = n;
	}
	void show() {
		cout <<"Title: "<< title << endl;
		cout <<"Author: "<< author << endl;
		cout <<"No of copies: "<< no << endl;
	}
};

int main() {
	card b1, b2;
	b1.store("Teach Yourself C++", "Herbert S", 50);
	b1.show();
	return 0;
}