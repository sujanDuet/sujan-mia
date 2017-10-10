#include<bits/stdc++.h>
using namespace std;typedef long long ll;
int main()
{
  // freopen("input.txt","r",stdin);
   //freopen("output.txt","w",stdout);
     ll  N,M,T,W,cnt=1;
      cin>>T;
      while(T--)
      {
         int cnter=2;
         cin>>W;
         cout<<"Case "<<cnt++<<": ";
         if(W%2!=0)
            cout<<"Impossible"<<endl;
         else
         {
            while(1){
               ll c=W/cnter;

               if(c%2!=0){
               cout<<c<<" "<<cnter<<endl;
               break;
               }
               cnter*=2;



            }

         }
      }
}
