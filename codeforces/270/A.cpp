#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
bool fun(){
   int n;
   cin>>n;
   if(360%(180-n))
      return 0;
   else
      return 1;
}
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   #ifndef ONLINE_JUDGE
      freopen("/ATOM/input.txt", "r", stdin);
      freopen("/ATOM/output.txt", "w", stdout);
   #endif
   int t;
   cin>>t;
   while(t--){
      if(fun())
         cout<<"YES\n";
      else
         cout<<"NO\n";
   }
}