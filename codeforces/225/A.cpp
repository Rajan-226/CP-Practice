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
   bool ok=0;
   for(int i=0;i<n;i++){
      int a,b;
      cin>>a>>b;
      if(a==k||a==7-k||b==k||b==7-k)
         ok=1;
   }
   if(ok)
      cout<<"NO";
   else
      cout<<"YES";
}