#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void fun(){
   ll n;
   cin>>n;
   ll c=2,sum=3,k=1;
   while(1){
      if(n%sum==0){
         cout<<n/sum<<"\n";
         return ;
      }
      c*=2;
      sum+=c;
   }
}
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
//   #ifndef ONLINE_JUDGE
//       freopen("/ATOM/input.txt", "r", stdin);
//       freopen("/ATOM/output.txt", "w", stdout);
//   #endif
   int t;
   cin>>t;
   while(t--){
      fun();
   }
}