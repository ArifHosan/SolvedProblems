#include<iostream>
using namespace std;


int main() {
    long long int d1,d2,d3;
    while(cin>>d1>>d2>>d3) {
        long long int p1,p2,p3,p4;
        p1=d1+d2+d3;
        p2=d1+d1+d3+d3;
        p3=d1+d2+d1+d2;
        //p4=d3+d3+d1+d1;
        if(p1<=p2 && p1<=p3) cout<<p1<<'\n';
        else if(p2<=p1 && p2<=p3) cout<<p2<<'\n';
        else cout<<p3<<'\n';
    }
    return 0;
}
