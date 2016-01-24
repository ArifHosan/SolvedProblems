#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main() {
    int M,N;
    while(scanf("%d%d", &M,&N)!=EOF) {
        int x=M*N/2;
        printf("%d\n", x);
    }
    return 0;
}
