#include<bits/stdc++.h>
using namespace std;
int main()
{
   //freopen("input.txt","r",stdin);
 //  freopen("output.txt","w",stdout);
   int T,cnt=1;
   double r1,r2,r3,a,b,c,Area,s,ra,rb,rc,d,result;
   cin>>T;
   while(T--)
   {
      cin>>r1>>r2>>r3;
      cout<<"Case "<<cnt++<<": ";
      d=2*acos(0.0);
      ra=2*acos(0.0)*r1*r1;

      rb=2*acos(0.0)*r2*r2;
      rc=2*acos(0.0)*r3*r3;
     //  cout<<ra<<" "<<rb<<" "<<rc<<endl;
      a=r1+r3;
      c=r1+r2;
      b=r3+r2;
     // cout<<a<<" "<<b<<" "<<c<<endl;
      s=(a+b+c)/2;
      Area=sqrt(s*(s-a)*(s-b)*(s-c));
      //cout<<Area<<endl;
      double x1=acos((a*a+c*c-b*b)/(2*a*c));
      double z3=acos((a*a+b*b-c*c)/(2*a*b));
      double y2=acos((b*b+c*c-a*a)/(2*b*c));
     // cout<<x1<<" "<<y2<<" "<<z3<<endl;
      result=Area-(0.5*ra*x1/d+0.5*rb*y2/d+0.5*rc*z3/d);
      printf("%.6lf\n",result);

   }
}
