#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void fun(){
    int n,k;
    cin>>n>>k;
    if(k==0)
        cout<<(24-n)*60<<"\n";
    else if(n==0)
        cout<<23*60+(60-k)<<"\n";
    else
        cout<<(24-n-1)*60+(60-k)<<"\n";
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