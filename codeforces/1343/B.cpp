#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void fun(){
   int n;
   cin>>n;
   if((n/2)%2!=0){
      cout<<"NO"<<"\n";
      return ;
   }
   cout<<"YES"<<"\n";
   ll a=2;
   for(int i=1;i<=n/2;i++){
      cout<<a<<" ";
      a+=2;
   }
   a=1;
   for(int i=1;i<n/2;i++){
      cout<<a<<" ";
      a+=2;
   }
   a+=n/2;
   cout<<a<<"\n";
}
/*
   2+4+6+8=1+3+5+(7+4)
*/
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