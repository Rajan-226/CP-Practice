#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void fun(){
   int n,k;
   cin>>n>>k;
   int a[n];
   map<int,vector<int>> m;
   for(int i=0;i<n;i++){
      cin>>a[i];
      m[a[i]].push_back(i+1);
   }
   sort(a,a+n);
   ll sum=0,t=0;
   while(sum<=k&&t<n){
      sum+=a[t];
      t++;
   }
   if(sum>k)
      t--;
   cout<<t<<"\n";
   for(int i=0;i<t;i++){
      cout<<m[a[i]].back()<<" ";
      m[a[i]].pop_back();
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
   // int t=1;
   // cin>>t;
   // while(t--){
      fun();
   // }
}