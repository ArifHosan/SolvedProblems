#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main() {
    char in[10005];
    int j,i,l,r,k,m, lt,rt;
    while(scanf("%s", in)!=EOF) {
        scanf("%d", &m);
        char tmp;
        for(i=0;i<m;i++) {
            scanf("%d%d%d", &l,&r, &k);
            l--; r--;
            lt=l; rt=r;
            for(j=0;j<k;j++) {
                m=0;
                while(m<=r-l) {
                lt++;
                if(lt==r+1) {
                    lt=l;
                    swap(in[lt], in[rt]);
                    //break;
                }
                else swap(in[lt-1], in[lt]);
                printf("%s\n", in);
                m++;
            }
            }
        }
        printf("%s\n", in);
    }
    return 0;
}
