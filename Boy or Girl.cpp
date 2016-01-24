#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main() {
    char a[110];
    bool f[26];
    int i,x,sum;
    while(scanf("%s",a)!=EOF) {
        sum=0;
        for(i=0;i<26;i++) f[i]=0;
        for(i=0;a[i]!='\0';i++) {
           x=a[i]-97;
           f[x]=1;
        }
        for(i=0;i<26;i++) sum+=f[i];
        if(sum &1) printf("IGNORE HIM!\n");
        else printf("CHAT WITH HER!\n");
    }
    return 0;
}
