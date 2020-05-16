#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n";
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
    int n,k,m;
    cin>>n>>m>>k;
    int a[m+1],ans=0;
    for(int i=0;i<=m;i++)
        cin>>a[i];
    for(int i=0;i<m;i++){
        int x=a[i]^a[m];
        if(__builtin_popcount(x)<=k){
            ans++;
        }
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
    // int t;
    // cin>>t;
    // while(t--){
        fun();
    // }
}