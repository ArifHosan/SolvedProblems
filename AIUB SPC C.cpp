#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main() {
    int T,M,N,cn=1,sum,x,i,k,m;
    int C[10000];
    scanf("%d", &T);
    while(T--) {
        scanf("%d%d", &N,&M);
        for(i=0;i<N;i++) scanf("%d", &C[i]);
        i=0; k=0; m=M+1; sum=0;
        while(i<=N && k<=N) {
               // cout<<sum<<endl;
            if(sum>=M) {
                x=i-k;
                sum-=C[k];
                k++;
                if(x<m) m=x;
            }
            else {
                sum+=C[i];
                i++;
            }
        }
        if(m>M) m=-1;
        printf("Case %d: %d\n", cn++,m);
    }
    return 0;
}

