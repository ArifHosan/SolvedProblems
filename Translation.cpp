#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main() {
    char a[110],b[110];
    while(scanf("%s%s", a,b)!=EOF) {
        int l=strlen(a), f=1;
        for(int i=0,j=l-1;i<l;i++,j--) {
            if(a[i]!=b[j]) {
                f=0;
                break;
            }
        }
        if(f) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
