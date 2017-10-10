#include<bits/stdc++.h>
using namespace std;
int main()
{
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   int n;
   cin>>n;
   while(n--)
   {
      int a;
      cin>>a;
      if(a==0)
         cout<<0<<" "<<0<<endl;
      else
      {
         if(a>10){
            int c=a-10;
            cout<<10<<" "<<c<<endl;
         }
         else
            cout<<a<<" "<<0<<endl;
      }
   }
}
