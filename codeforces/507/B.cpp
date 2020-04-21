#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void fun(){
   int r,x,y,x1,y1;
   cin>>r>>x>>y>>x1>>y1;
   double dis=sqrt(pow(x-x1,2)+pow(y-y1,2));
   cout<<ceil(dis/(2*r));
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