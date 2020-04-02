#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
   #endif
   int n;
   cin>>n;
   for(int i=2;i<=n;i++){
      while(n%i==0){
         cout<<i;
         n/=i;
      }
   }
}