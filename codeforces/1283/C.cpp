#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
   int n;
   cin>>n;
   int a[n];
   UM mp;
   vector<int> v;
   for(int i=1;i<=n;i++){
      cin>>a[i];
      mp[a[i]]=1;
   }
   for(int i=1;i<=n;i++)
      if(mp[i]==0)      v.push_back(i);
   int j=0;
   for(int i=1;i<=n;i++){
      if(a[i]==0){
         if(v[j]==i&&j==v.size()-1){
            swap(v[j],v[j-1]);
         }
         else if(v[j]==i){
            swap(v[j],v[j+1]);
         }
         j++;
      }
   }
   j=0;
   for(int i=1;i<=n;i++){
      if(a[i]!=0)
         cout<<a[i]<<" ";
      else
         cout<<v[j++]<<" ";
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
   // int t;
   // cin>>t;
   // while(t--){
      fun();
   // }
}