#include<bits/stdc++.h>
using namespace std;
int arr[10005];

int main() {
   //freopen("input.txt","r",stdin);
   //freopen("output.txt","w",stdout);
    int n, caseno = 0, cases,hex=0;
    scanf("%d", &cases);
    while( cases-- ) {
        scanf("%d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &n);
        if(n<=5)
        printf("Case %d: %d\n", ++caseno, arr[n] % 10000007);
        else
        {
           for(int i=6;i<=n;i++){
           arr[i]=arr[i-1]%10000007+arr[i-2]%10000007+arr[i-3]%10000007+arr[i-4]%10000007+arr[i-5]%10000007+arr[i-6]%10000007;
 arr[i]%=10000007;
         }
               printf("Case %d: %d\n", ++caseno, arr[n]);
        }
    }
    return 0;
}
