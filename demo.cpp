#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int n,cont,total=0;
scanf("%d",&n);
double per_c=0,per_s=0,per_r=0;
int x_c=0,x_r=0,x_s=0,x;
char animal;
for(cont=1;cont<=n;cont++) {
    scanf("%d %c",&x,&animal);
    switch(animal){
    case 'C':
        x_c=x+x_c;
        total=total+x;
       // cout<<x_c<<endl;
       // cout<<total<<endl;
        break;
    case 'R':
        x_r=x+x_r;
        total=total+x;
        //cout<<x_c<<endl;
        //cout<<total<<endl;
        break;
    case 'S':
        x_s=x+x_s;
        total=total+x;
        //cout<<x_c<<endl;
        //cout<<total<<endl;
        break;
    }


 }
 if(n==0){
    per_c=0;
   per_s=0;
   per_r=0;
}
 else{
    per_c = (double)(x_c*100)/total;
    per_r = (double)(x_r*100)/total;
    per_s = (double)(x_s*100)/total;

 }
 printf("Total: %d cobaias\n",total);
 printf("Total de coelhos: %d\n",x_c);
 printf("Total de raptos: %d\n",x_r);
 printf("Total de saptos: %d\n",x_s);
 //cout<<"Percentual de coelhos: "<<per_c<<endl;
   printf("Percentual de coelhos: %.2lf %%\n",per_c);
   printf("Percentual de ratos: %.2lf %%\n",per_r);
   printf("Percentual de sapos: %.2lf %%\n",per_s);
 }






