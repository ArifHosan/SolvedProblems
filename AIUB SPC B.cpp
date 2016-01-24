#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main() {
    int T, in,bit[10000][32];
    int i,j,k,c,sum,N,cn=1;
    scanf("%d", &T);
    while(T--) {
        for(i=0;i<10000;i++) {
            for(j=0;j<32;j++) bit[i][j]=0;
        }
        scanf("%d",&N);
        for(i=0;i<N;i++) {
            scanf("%d", &in);
            k=0;
            while(in) {
                bit[i][k++]=(in &1);
                in>>=1;
            }
        }
        sum=0;
        for(i=0;i<32;i++) {
            c=0;
            for(j=0;j<N;j++) {
                if(bit[j][i]) c++;
            }
            c=c*(N-c);
            sum+=c;
        }
        sum*=2;
        sum=sum%10000007;
        printf("Case %d: %d", cn++,sum);
    }
    return 0;
}
