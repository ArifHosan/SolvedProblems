#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
#define PI 2*acos(0.0)

int x[100000], y[100000],dx[100000];

int main() {
    int n,i,j;
    double d,d1;
    while(scanf("%d", &n)!=EOF) {
            double m=1000, min_i, min_j;
        for(i=0;i<n;i++) {
            scanf("%d%d", &x[i], &y[i]);
            dx[i]= sqrt((x[i]*x[i])+(y[i]*y[i]));
        }
        for(i=0;i<n;i++) {
            for(j=i+1;j<n;j++) {
                    if(i==j) continue;
                d=(x[i]* x[j]) +(y[i]*y[j]);
                d1=d/(dx[i]*dx[j]);
                if(d1>1) d1-=1;
                //if(x[j]==-4) cout<<d1<<endl;
                d=acos(d1);
            if(d> PI/2) d/=2;
                cout<<d<<endl;
                if(d<m ) {
                    m=d;
                    min_i=i;
                    min_j=j;
                }
                //cout<<m<<endl;
            }
        }
        printf("%.0lf %.0lf\n", min_i+1, min_j+1);
    }
    return 0;
}
