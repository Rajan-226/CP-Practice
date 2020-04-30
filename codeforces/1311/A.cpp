#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
int fun(){
   ll a,b;
   cin>>a>>b;
   if(a==b)
      return 0;
   if((b%2==0&&a%2==1)||(b%2==1&&a%2==0)){
      if(b>a)
         return 1;
      else
         return 2;
   }
   else{
      if(b>a)
         return 2;
      else
         return 1;
   }
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
      cout<<fun()<<"\n";
   }
}