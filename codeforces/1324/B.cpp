#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n";
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
    int n;
    cin>>n;
    int a[n];
    unordered_map<int,int> mp;
    bool ok=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i&&mp[a[i]]==1&&a[i]!=a[i-1]){
            ok=1;
        }
        else if(mp[a[i]]==2){
            ok=1;
        }
        mp[a[i]]+=1;
    }
    if(ok)
        cout<<"YES\n";
    else
        cout<<"NO\n";
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