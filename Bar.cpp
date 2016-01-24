#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main() {
    int i,n;
    char a[110],*p;
    char key[]="ABSINTH BEER BRANDY CHAMPAGNE GIN RUM SAKE TEQUILA VODKA WHISKEY WINE";
    while(scanf("%d", &n)!=EOF) {
        int c=0;
        for(i=0;i<n;i++) {
            scanf("%s", a);
            int l=strlen(a);
            //if(strcmp(a,"ABSINTH")==0 || strcmp(a,"BEER")==0 || strcmp(a,"BRANDY")==0 || strcmp(a,"CHAMPAGNE")==0 || strcmp(a,"GIN")==0) c++;
            //else if(strcmp(a,"RUM")==0 || strcmp(a,"SAKE")==0 || strcmp(a,"TEQUILA")==0 || strcmp(a,"VODKA")==0 || strcmp(a,"WHISKEY")==0) c++;
            //else if(strcmp(a,"WINE")==0) c++;
            if(l==1 && a[0]<=57) c++;
            else if(a[0]=='1' && a[1]<='7') c++;
            else {

                //printf("%s\n",a);
                p=strstr(a,key);
                //printf("%c", *p);
                //if(p=strstr(a,key)) c++;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
