#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    int a,b,sum;
    while(scanf("%d%d", &a,&b)!=EOF) {
        sum=a+b-1;
        printf("%d %d\n", sum-a, sum-b);
    }
    return 0;
}
