#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void fun(){
   int n;            cin>>n;
   ll sum;           cin>>sum;
   int max;      bool ok;
   ok=sum>0?1:0;
   max=sum;
   sum=0;
   for(int i=1;i<n;i++){
      ll k;
      cin>>k;
      if(k<0 && ok){
         sum+=max;
         max=k;
         ok=0;
      }
      else if(!ok && k>0){
         sum+=max;
         max=k;
         ok=1;
      }
      if(k>max)
         max=k;
   }
   sum+=max;
   cout<<sum<<"\n";
   
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