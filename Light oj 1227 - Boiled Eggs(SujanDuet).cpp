#include<bits/stdc++.h>
using namespace std;
int arr[31];
int main()
{
  //freopen("input.txt","r",stdin);
   //freopen("output.txt","w",stdout);
   int n,p,q,t,numberofegg=0,cnt=1;
   cin>>t;
   while(t--){
         numberofegg=0;
         cout<<"Case "<<cnt++<<": ";
   cin>>n>>p>>q;
   for(int i=0;i<n;i++)
      cin>>arr[i];
   if(n<p)
   {
      int temp=min(n,p);
      n=max(n,p);
      p=temp;
   }
   for(int i=p-1;i>=0;i--){
      for(int j=0;j<=i;j++){
numberofegg+=arr[j];
      }
      if(numberofegg<=q){
         cout<<i+1<<endl;
 numberofegg=0;
         break;
      }
      else{
          numberofegg=0;
          if(i==0)
            cout<<i<<endl;
          }


         }

}
}
