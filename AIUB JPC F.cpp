#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
long long int P[110];
int main() {
    int T,N,M,i,j;
    long long int x;
    scanf("%d", &T);
    while(T--) {
        for(i=0;i<110;i++) P[i]=0;
        scanf("%d%d",&N,&M);
        for(i=0;i<M;i++) {
            for(j=0;j<N;j++) {
                scanf("%lld", &x);
                P[j]+=x;
            }
        }
        sort(P,&P[N]);
        printf("%lld\n", P[N-1]);
    }
    return 0;

}
