#include<bits/stdc++.h>
using namespace std;
   char s;
int main()
         {
   //freopen("input.txt","r",stdin);
   //freopen("output.txt","w",stdout);

   int arr[101],n,m,t,sum=0,cnt=1,x,y,z,j,arr1[101];
   cin>>t;
   while(t--)
   {
      cin>>n>>m;
      for(int i=0;i<n;i++)
         cin>>arr[i];
         for(int i=0;i<m;i++){
      cin>>s;
      if(s=='S'){
    cin>>sum;
     for(int i=0;i<n;i++)
      arr[i]+=sum;

      }
      else if(s=='D')
      {
         cin>>sum;
     for(int i=0;i<n;i++)
      arr[i]/=sum;
      }
        else if(s=='M')
      {
         cin>>sum;
     for(int i=0;i<n;i++)
      arr[i]*=sum;
      }
       else if(s=='R')
      {

     for(int i=0;i<n;i++)
      arr1[i]=arr[i];
      for(int i=n-1,j=0;i>=0;i--,j++)
      arr[j]=arr1[i];
      }
      else if(s=='P'){

      cin>>x>>y;
      z=arr[y];
      arr[y]=arr[x];
      arr[x]=z;

      }
      }
       cout<<"Case "<<cnt++<<":"<<endl;
        for(int i=0;i<n;i++){
            if(i==n-1)
        cout<<arr[i]<<endl;
      else
            cout<<arr[i]<<" ";
        }
         //cout<<arr[i];
   }
return 0;
         }
