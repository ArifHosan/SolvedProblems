#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;

bool p[501];
void prime() {
    p[1]=1; p[0]=1;
    for(int i=4;i<=500;i+=2) p[i]=1;
    for(int i=3;i<=500;i+=2) {
        int rt=sqrt(i);
        for(int j=3;j<=rt;j+=2) {
            if(i%j==0) {
                p[i]=1;
                break;
            }
        }
    }
}

int main() {
    prime();
    int t,L,R,cn=1;
    scanf("%d", &t);
    //cout<<p[499]<<endl;
    while(t--) {
        scanf("%d%d", &L,&R);
        int c=0;
        if(R<L) swap(R,L);
        for(int i=L;i<=R;i++) {
            //cout<<p[i]<<endl;
            if(!p[i]) c++;
        }
        printf("Case %d: There are %d numbers between %d and %d.\n", cn++,c,L,R);
    }
    return 0;
}
