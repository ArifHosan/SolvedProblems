#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#define PI 2*acos(0.0)
using namespace std;

int main() {
    int T,i,j,m,cn=1,l,k,f;
    char A[2550], B[100];
    scanf("%d", &T);
    while(T--) {
        scanf("%s%s", A,B);
        m=strlen(A)+50;
        for(i=0;A[i]!='\0';i++) {
            k=0; f=0;
            for(j=i;A[j]!='\0';j++) {
                if(A[j]==B[k]) k++;
                if(B[k]=='\0') {
                    f=1;
                    break;
                }
            }
            if(f) {
                l=j-i+1;
                if(l<m) m=l;
            }
        }
        printf("Case %d: ", cn++);
        if(m>strlen(A)) printf("-1\n");
        else printf("%d\n", m);
    }
    return 0;
}
