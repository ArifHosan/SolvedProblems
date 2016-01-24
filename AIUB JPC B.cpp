#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main() {
    int N,i,cn=1;
    double q[3],c;
    scanf("%d", &N);
    while(N--) {
        scanf("%lf%lf%lf", &q[0], &q[1],&q[2]);
        sort(q,&q[3]);
        //cout<<q[0]<<q[1]<<q[2];
        if(q[1]<10 && q[0]<10)
            printf("Failed\n");
        else {
            c=q[1]+q[2];
            c/=2.0;
            printf("%0.2lf\n", c);
        }
    }
    return 0;
}
