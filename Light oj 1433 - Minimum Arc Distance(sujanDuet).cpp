#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   //freopen("input.txt","r",stdin);
   //freopen("output.txt","w",stdout);
   ll ox,oy,ax,ay,bx,by,cnt=1;
   double a,c,b,circumferance,angle,minimum_arc;
   int t;
   cin>>t;
   while(t--)
   {
      cin>>ox>>oy>>ax>>ay>>bx>>by;
      a=sqrt(pow(ox-ax,2)+pow(oy-ay,2));
      c=sqrt(pow(ox-bx,2)+pow(oy-by,2));
      b=sqrt(pow(ax-bx,2)+pow(ay-by,2));
      circumferance=2*2*acos(0.0)*a;
      angle=acos((a*a+c*c-b*b)/(2*a*c))*180/(2*acos(0.0));
      minimum_arc=angle*circumferance/360;
         if((circumferance-minimum_arc)<minimum_arc){
               cout<<"Case "<<cnt++<<": ";
printf("%.8lf\n",circumferance-minimum_arc);
        }
         else{
                cout<<"Case "<<cnt++<<": ";
        printf("%.8lf\n",minimum_arc);

}

   }

}
