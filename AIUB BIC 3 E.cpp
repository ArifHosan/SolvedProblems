#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cstdlib>
using namespace std;

int main() {
    int A[51],B[51],n,m,i,j;
    int g[51][51];
    while(scanf("%d", &n)==1) {
        for(i=0;i<51;i++)
            for(j=0;j<51;j++) g[i][j]=0;
        for(i=0;i<n;i++) scanf("%d", &A[i]);
        scanf("%d", &m);
        for(i=0;i<m;i++) scanf("%d", &B[i]);
        int mx=0,rt;
        for(i=0;i<n;i++) {
            for(j=0;j<m;j++) {
                //int x,y;
                //x=max(A[i],B[j]);
                //y=min(A[i],B[j]);
                if(B[j]%A[i]==0) {
                    rt=B[j]/A[i];
                    g[i][j]=rt;
                    if(rt>=mx) mx=rt;
                }
            }
        }
        int c=0;
        for(i=0;i<n;i++) {
            for(j=0;j<m;j++) {
                if(g[i][j]==mx) c++;
            }
        }
        printf("%d\n", c);
    }
    return 0;
}
