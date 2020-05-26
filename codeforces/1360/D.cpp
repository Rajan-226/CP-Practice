#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n"
#define dbg(x) cout<<x<<" ";
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
    ll n,k;
    cin>>n>>k;
    ll i=1,ans=INT_MAX;
    while(i*i<=n){
        if(n%i==0){
            ans=min(ans,n/i);
            if(n/i<=k){
                ans=min(ans,n/(n/i));
            }
        }
        i++;
        if(i>k)
            break;
    }
    
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