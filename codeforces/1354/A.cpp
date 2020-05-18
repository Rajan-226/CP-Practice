#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n";
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a<=b){
        cout<<b<<"\n";
        return ;
    }
    if(c-d<=0){
        cout<<"-1\n";
        return ;
    }
    ll req=a-b,sleep_per=c-d;
    ll ans=b+ceil((double)req/sleep_per)*c;
    cout<<ans<<"\n";
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