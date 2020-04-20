#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void fun(){
   int n;
   cin>>n;
   int a[n+3];
   for(int i=1;i<=n;i++)
      cin>>a[i];
   for(int i=1;i<=n;i++){
      int c=1,k=a[i];
      while(k!=i){
         k=a[k];
         c++;
      }
      cout<<c<<" ";
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