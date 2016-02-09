#include<iostream>
#include<cstring>
#include<string>
#include<stack>
#include<queue>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#define PI 2*acos(0.0)
#define SIZE 1000000
#define endl '\n'
int caseno=1;
#define CP() printf("Case %d:\n",caseno++)
#define R() freopen("in.txt","r",stdin)
#define W() freopen("out.txt","w",stdout)
#define sfi(_i) scanf("%d",&_i)
#define sfc(_c) scanf("%c",&_c)
#define pf1(_i) cout<<_i
#define pfl() cout<<endl
#define pfs() printf(" ")
#define FOR(i,a,b) for(i=(a);i<(b);i++)
#define REV(i,a,b) for(i=(a);i>=(b);i--)
using namespace std;

class T {
public:
	template<class X> static inline X Sq(X a) {return a*a;}
	template<class X>static inline X Abs(X a) {return a>0 ? a : a*(-1);}
	template<class X>static inline X Max(X a, X b) {return a>b? a:b;}
	template<class X>static inline X Min(X a, X b) {return (a<b)? a:b;}
	template<class X>static inline X Swap(X &a,X &b) {X c=a; a=b; b=c;}
	static inline bool isNum(char c) {return (c>=48 && c<=57);}
	static inline bool isAlpha(char c) {return ((c>=97 && c<=122)||(c>=65 && c<=90));}
	static inline bool isUpper(char c) {return (c>=65 && c<=90);}
	static inline bool isLower(char c) {return (c>=90 && c<=122);}
	static inline int Gcd(int a, int b) {return (b==0)?a:Gcd(b,a%b);}
	static inline long long int Fact(int x) {return (x==1)?x:(x*Fact(x-1));}
	static inline long long int Atoi(char *s);
	static inline char toLower(char c) {return isUpper(c)?c+=32:c;}
	static inline char toUpper(char c) {return isLower(c)?c-=32:c;}
};
/*bool P[SIZE];
void primeSieve() {
	for(int i=0;i<=SIZE;i++) P[i]=1;
	for(int i=2;i<=SIZE;i++ ) {
        if(P[i]==1) {
            for(int j=2*i;j<=SIZE;j+=i) P[j]=0;
        }
    }
}
*/
inline long long int T::Atoi(char *s) {
    long long int n=0;
    for(int i=0;s[i]!='\0';i++) {
        if(T::isNum(s[i])) {
            n*=10;
            n+=s[i]-48;
        }
    }
    return n;
}

int main() {
    //R(); W();
    int i,sum,x,N;
    while(sfi(N) && N) {
        sum=0;
        FOR(i,0,N) {
            sfi(x);
            sum+=x;
        }
        CP();
        if(sum%N==0) {
            if(sum>=0) pf1(sum/N);
            else {
                pf1('-'); pfs();
                pf1((sum/N)*-1);
            }
        }
        else {
            int t=sum/N;
            sum-=t*N;
            int gc= T::Gcd(sum,N);
            int a=sum/gc;
            int b= N/gc;
            int l_t=0, l_b=0, l_a=0;
            int t_t=t, t_b=b, t_a=a;
            while(t_a) {
                l_a++;
                t_a/=10;
            }
            while(t_t) {
                l_t++;
                t_t/=10;
            }
            while(t_b) {
                l_b++;
                t_b/=10;
            }
            //pf1(l_t); pfs();
            if(t>0) {
                FOR(i,0,l_t+l_b-l_a) pfs();
                pf1(abs(a)); pfl();
                pf1(t);
                FOR(i,0,l_b) pf1('-');
                pfl();
                FOR(i,0,l_t) pfs();
                pf1(abs(b));
            }
            if(t==0 && a>0 && b>0) {
                FOR(i,0,l_b-l_a) pfs();
                pf1(abs(a)); pfl();
                FOR(i,0,l_b) pf1('-');
                pfl();
                pf1(abs(b));
            }
            if(t==0 && (a<0 || b<0)) {
                FOR(i,0,l_b+2-l_a) pfs();
                pf1(abs(a)); pfl();
                pf1('-'); pfs();
                FOR(i,0,l_b) pf1('-');
                pfl();
                FOR(i,0,l_t+2) pfs();
                pf1(abs(b));
            }
            if(t<0) {
                FOR(i,0,l_b+l_t+2-l_a) pfs();
                pf1(abs(a)); pfl();
                pf1('-'); pfs();
                pf1(-t);
                FOR(i,0,l_b) pf1('-');
                pfl();
                FOR(i,0,l_t+2) pfs();
                pf1(abs(b));
            }
        }
        pfl();
    }
	return 0;
}
