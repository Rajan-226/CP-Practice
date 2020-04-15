#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void fun(){
   int n,a,b;
   cin>>n>>a>>b;
   char ch='a';
   for(int i=0;i<n;i++)
      cout<<char(ch+i%b);
   cout<<"\n";
}
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
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
