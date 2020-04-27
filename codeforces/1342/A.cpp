#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void fun(){
    ll x,y,a,b;
    cin>>x>>y>>a>>b;
    
    ll ans1=min(x,y)*b+abs(x-y)*a;
    ll ans2=(x+y)*a;
    cout<<min(ans1,ans2)<<"\n";
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