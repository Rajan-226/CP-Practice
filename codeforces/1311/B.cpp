#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
   int n,m;
   cin>>n>>m;
   int a[n+3];
   int p[102]={0};
   for(int i=1;i<=n;i++){
      cin>>a[i];
   }
   for(int i=0;i<m;i++){
      int k;
      cin>>k;
      p[k]=1;
   }
   for(int i=1;i<n;i++){
      for(int j=1;j<n;j++){
         if(a[j]>a[j+1]){
            if(p[j]==0){
               cout<<"NO\n";
               return ;
            }
            swap(a[j],a[j+1]);
         }
      }
   }
   cout<<"YES"<<"\n";
   
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