#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n";
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
    ll n,m;
    cin>>n>>m;
    ll min,each=n/m;
    min=each*(each-1)/2;
    min*=(m-n%m);
    min+=(n%m)*(each*(each+1)/2);
    ll max=n-m+1;
    max=max*(max-1)/2;
    cout<<min<<" "<<max<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("/ATOM/input.txt", "r", stdin);
        freopen("/ATOM/output.txt", "w", stdout);
    #endif
    // int t;
    // cin>>t;
    // while(t--){
        fun();
    // }
}