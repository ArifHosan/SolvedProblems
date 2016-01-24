#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
    int N,T,dif,tmp,i,x,y,cn=1;
    scanf("%d", &T);
    while(T--) {
        dif=-1000000;
        scanf("%d", &N);
        for(i=0;i<N;i++) {
            scanf("%d%d", &x,&y);
            tmp=abs(x-y);
            if(tmp>dif) dif=tmp;
        }
        printf("Case %d: %d\n", cn++,dif);
    }
    return 0;
}
