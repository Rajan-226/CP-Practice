#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   int ans=0,i=0;
   while(i<n-1){
      int c=0;
      if(s[i]=='A'){
         i++;
         while(i<n && s[i]=='P'){
            i++;
            c++;
         }
      }
      else
         i++;
      ans=max(ans,c);
   }
   cout<<ans<<"\n";
   
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
      fun();
   }
}