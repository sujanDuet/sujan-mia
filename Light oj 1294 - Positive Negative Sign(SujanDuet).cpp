#include<stdio.h>

typedef long long ll;
int main()
{

   ll n,m,t,x=1,result=0;
scanf("%lld",&t);
   while(t--)
   {
      scanf("%lld %lld",&n,&m);
       result=m*(n/2);
     printf("Case %lld: %lld\n",x++,result);
   }
   return 0;
}
