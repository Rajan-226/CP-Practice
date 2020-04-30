#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define UM unordered_map<int,vector<int>>
#define ULL unordered_map<ll,int>
void fun(){
   int n,m;
   cin>>n>>m;
   int ans[27]={0};
   string s;
   cin>>s;
   vector<int> pref(n);
   for (int i = 0; i < m; ++i) {
      int p;
      cin >> p;
      ++pref[p - 1];
   }
   for (int i = n - 1; i > 0; --i) 
      pref[i - 1] += pref[i];
   for (int i = 0; i < n; ++i) {
      ans[s[i] - 'a'] += pref[i]+1;
   }
   for(int i=0;i<26;i++){
      cout<<ans[i]<<" ";
   }
   cout<<"\n";
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