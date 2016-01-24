#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<cstdio>
using namespace std;

int main() {
    int n,x[101],i,sum,f;
    while(scanf("%d", &n)==1) {
        f=0; sum =0;
        for(i=0;i<n;i++) scanf("%d", &x[i]);
        for(i=1;i<n-1;i++) {
            if(x[i]>x[i+1]) x[i]=x[i]-x[i+1];
            if(x[i]<x[i+1]) x[i-1]=x[i+1]-x[i];
            if(x[i]>x[i-1]) x[i]=x[i]-x[i-1];
            if(x[i]<x[i-1]) x[i-1]=x[i-1]-x[i];
        }
        for(i=0;i<n;i++) sum+=x[i];
        printf("%d\n", sum);
    }
    return 0;
}

