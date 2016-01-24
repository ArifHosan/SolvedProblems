#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
#define S 1000000000

int main() {
    int j,n,i,x,c;
    int N[1001];
    while(scanf("%d", &n)==1) {
        c=0;
        for(i=0;i<n;i++) {
            scanf("%d", &N[i]);
            x=0;
            for(j=0;j<i;j++) {
                if(N[j]==N[i] && N[i]) x++;
            }
            //cout<<x<<endl;
            if(x==1  && c>-1) c++;
            if(x>=2) c=-1;
        }
        printf("%d\n",c);
    }
    return 0;
}
