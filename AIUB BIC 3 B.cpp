#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main() {
    char in[110];
    int i,c;
    while(scanf("%s", in)!=EOF) {
        c=0;
        for(i=1;in[i]!='\0';i++) {
            if(in[i]==in[i-1]) c++;
            else c=0;
            if(c==6) break;
        }
        if(c==6) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
