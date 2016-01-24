#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main() {
    int N,i,K,D,T,cn=1;
    scanf("%d", &T);
    while(T--) {
        scanf("%d", &N);
        long long int tot=0;
        for(i=0;i<N;i++) {
            scanf("%d", &K);
            tot+=K;
        }
        scanf("%d%d", &K,&D);
        tot=tot*D;
        tot-=K;
        if(tot<0) tot=0;
        printf("Case %d: %lld\n", cn++,tot);
    }
    return 0;
}
