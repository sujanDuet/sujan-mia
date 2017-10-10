#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
void init(){
mp["January"]=1;
mp["February"]=2;
mp["March"]=3;
mp["April"]=4;
mp["May"]=5;
mp["June"]=6;
mp["July"]=7;
mp["August"]=8;
mp["September"]=9;
mp["October"]=10;
mp["November"]=11;
mp["December"]=12;
}
int main()
{
  // freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    int  t,year1,month1,date1,year2,month2,date2,cnt=1;
   string m1,m2;
   cin>>t;

   while(t--)
   {
         init();
      cin>>m1;
            scanf("%d,%d",&date1,&year1);
            cin>>m2;
            scanf("%d,%d",&date2,&year2);
            year1--;
            if(mp[m1]>2)
               year1++;
            if((mp[m2]<2)||(mp[m2]==2&&date2<29))
               year2--;
               cout<<"Case "<<cnt++<<": "<<(year2/4-year2/100+year2/400)-(year1/4-year1/100+year1/400)<<endl;

   }

}
