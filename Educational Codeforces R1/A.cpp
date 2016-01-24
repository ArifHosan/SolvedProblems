#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

/*bool isPowerOfTwo (long long int x)
{
 return (
   x == 1 || x == 2 || x == 4 || x == 8 || x == 16 || x == 32 ||
   x == 64 || x == 128 || x == 256 || x == 512 || x == 1024 ||
   x == 2048 || x == 4096 || x == 8192 || x == 16384 ||
   x == 32768 || x == 65536 || x == 131072 || x == 262144 ||
   x == 524288 || x == 1048576 || x == 2097152 ||
   x == 4194304 || x == 8388608 || x == 16777216 ||
   x == 33554432 || x == 67108864 || x == 134217728 ||
   x == 268435456 || x == 536870912 || x == 1073741824 ||
   x == 2147483648);
}*/

/*bool power(long long int n) {
    int c=0;
    while(n  && c<=1) {
        if(n&1 ==1) c++;
        n>>=1;
    }
    return c==1;
}*/

int main() {
    long long int i,sum,tmp;
    int t,n;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        sum=0;
        //sum= n*(n+1) /2;
        double x= n/2.0;
        //cout<<x<<endl;
        x=x*(n+1);
        sum=x;
        //cout<<sum<<endl;
        i= floor(log2((double)n));
        //cout<<i<<endl;
        tmp=pow(2,i+1) -1;
        //cout<<tmp<<endl;
        sum-=2*tmp;
       /* for(i=1;i<=n;i++) {
            //if(!isPowerOfTwo(i)) sum+=i;
            //printf("%d", power(i));
            //if(!power(i)) sum+=i;
            else sum-=i;
        }*/
        printf("%I64d\n", sum);
    }
    return 0;
}
