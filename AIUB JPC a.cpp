#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main() {
    int T, cn=1,i,j;
    bool key[26];
    char in[1010];
    scanf("%d", &T);
    cin.ignore();
    while(T--) {
        for(i=0;i<26;i++) key[i]=0;
        gets(in);
        j=0;
        int len=strlen(in);
        for(i=0;i<len;i++) {
            if(in[i]>96) {
                j=in[i]-97;
                key[j]=1;
            }
        }
        printf("Case %d: ", cn++);
        bool f=false;
        for(i=25;i>=0;i--) {
            if(!key[i]) {
                printf("%c", i+97);
                f=true;
            }
        }
        if(!f) printf("Happy Typing Progya!!");
        printf("\n");
    }
    return 0;
}
