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
	int n,a[100009],i,mn,mn_i;
	while(scanf("%d",&n)==1) {
        mn=100000;
        for(i=0;i<n;i++) {
            scanf("%d", &a[i]);
            if(a[i]<mn) {
                mn=a[i];
                mn_i=i;
            }
        }
        int f=-1;
        int x=mn_i,c=0;
        for(i=1;i<n;i++) {
            if(a[x]>a[((x+1)%n)]){
                f=0;
                break;
            }
            else {
                c++;
                if(x==0) f=i;
            }
            x=(x+1)%n;
        }
        if(f==0) printf("-1\n");
        else if(mn_i==0) printf("0\n");
        else if(f>0) printf("%d\n", f-1);
        else printf("%d\n", c);
	}
	return 0;
}
