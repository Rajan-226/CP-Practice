#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   #ifndef ONLINE_JUDGE
      freopen("/ATOM/input.txt", "r", stdin);
      freopen("/ATOM/output.txt", "w", stdout);
   #endif
   int n,k;
   cin>>n>>k;
   int inp[2*n+3];
   for(int i=1;i<=2*n+1;i++){
       cin>>inp[i];
   }
   for(int i=1;i<=2*n+1;i++){
       if(i%2==0){
           if(inp[i-1]<inp[i]-1&&inp[i+1]<inp[i]-1&&k){
               inp[i]-=1;
               k--;
           }
       }
   }
   for(int i=1;i<=2*n+1;i++)
    cout<<inp[i]<<" ";
}