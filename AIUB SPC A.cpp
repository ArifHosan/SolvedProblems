#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main() {
    int T,i,c,j,cn=1;
    char in[1000];
    scanf("%d", &T);
    while(T--) {
        scanf("%s",in);
        c=0;
        for(i=0;in[i]!='\0';i++) {
            if(in[i]=='I') {
                if(in[i+1]!='\0' && in[i+1]=='V') {
                    c+=4;
                    i++;
                }
                else if(in[i+1]!='\0' && in[i+1]=='X') {
                    c+=9;
                    i++;
                }
                else c+=1;
            }
            else if(in[i]=='V') c+=5;
            else if(in[i]=='X') {
                if(in[i+1]!='\0' && in[i+1]=='L') {
                    c+=40;
                    i++;
                }
                else if(in[i+1]!='\0' && in[i+1]=='C') {
                    c+=90;
                    i++;
                }
                else c+=10;
            }
            else if(in[i]=='L') c+=50;
            else if(in[i]=='C') {
                if(in[i+1]!='\0' && in[i+1]=='D') {
                    c+=400;
                    i++;
                }
                else if(in[i+1]!='\0' && in[i+1]=='M') {
                    c+=900;
                    i++;
                }
                else c+=100;
            }
            else if(in[i]=='D') c+=500;
            else if(in[i]=='M') c+=1000;
        }
        printf("Case %d: %d\n", cn++,c);
    }
    return 0;
}
