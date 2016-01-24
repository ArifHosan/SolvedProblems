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
#define D(x) cout << __LINE__ << " " << #x" = " << (x) << endl
using namespace std;

bool P[SIZE];

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
	static inline char toLower(char c) {return isUpper(c)?c+=32:c;}
	static inline char toUpper(char c) {return isLower(c)?c-=32:c;}
	static inline void primeSieve();
};
inline void T::primeSieve() {
	for(int i=0;i<=SIZE;i++) P[i]=1;
	for(int i=2;i<=SIZE;i++ ) {
        if(P[i]==1) {
            for(int j=2*i;j<=SIZE;j+=i) P[j]=0;
        }
    }
}

int main() {
	int N[10],M[10];
	int j,n,x,m,i,c;
	while(scanf("%d%d", &n,&m)==2 && n>0 && m>0) {
        for(i=0;i<10;i++) N[i]=M[i]=0;
        for(i=0;i<n;i++) {
            scanf("%d", &x);
            for(j=2;j<=x;j++) N[j]++;
        }
        for(i=0;i<m;i++) {
            scanf("%d", &x);
            for(j=2;j<=x;j++) M[j]++;
        }
        for(i=2;i<10;i++) {
            if(N[i] && M[i]) {
                x=T::Min(N[i],M[i]);
                N[i]-=x;
                M[i]-=x;
            }
        }
        long long a=1,b=1;
        for(i=2;i<10;i++) {
            if(N[i]) a*=(i*N[i]);
            if(M[i]) b*=(i*M[i]);
        }
        if(a==b) printf("YES\n");
        else printf("NO\n");
	}
	return 0;
}
