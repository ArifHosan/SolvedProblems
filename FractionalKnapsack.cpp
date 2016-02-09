/*
5 100
55 25
5 15
32 28
27 20
15 20
*/
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
#define CP() printf("Case %d: ",caseno++)
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

struct Knapsack{
    int cows;
    int price;
    double unit_price;
}C[20];

bool myCmp(Knapsack A, Knapsack B) {
    return A.unit_price<B.unit_price;
}

int main() {
    //R(); W();
    int n,k,i;
    sfi(n); sfi(k);
    FOR(i,0,n) {
        sfi(C[i].cows);
        sfi(C[i].price);
        C[i].unit_price=(double)C[i].price/C[i].cows;
    }
    sort(C, C+n,myCmp);
    double res=0;
    i=0;
    while(k>0 && i<n) {
        if(k>=C[i].cows) {
            k-=C[i].cows;
            res+=C[i].price;
        }
        else {
            res+=(C[i].unit_price*k);
            k=0;
        }
        i++;
    }
    pf1(res); pfl();
	return 0;
}
