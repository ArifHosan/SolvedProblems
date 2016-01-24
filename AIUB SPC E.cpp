#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#define PI 2*acos(0.0)
using namespace std;

int main() {
    double d,x,y,a,h;
    while(scanf("%lf%lf%lf%lf", &d,&x,&y,&a)!=EOF) {
        a=a*PI/180.0/2;
        a=sin(a);
        h=d-y;
        h=h/a;
        h=h+x;
        printf("%.2lf\n", h);
    }
    return 0;
}
