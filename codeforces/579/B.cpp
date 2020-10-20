#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define pb push_back
#define nl cout<<"\n"
#define db(x) cout<<x<<" "
#define fi(a,b) for(int i=a;i<b;i++)
#define fj(a,b) for(int j=a;j<b;j++)
#define fk(a,b) for(int k=a;k<b;k++)
#define F first
#define S second
#define mxsize (int)1e6+5
ll fastexp(ll a,ll n,ll nod=LLONG_MAX){
    ll ans=1;
    while(n){
        if(n&1)
            ans=(ans*a)%nod;
        a=(a*a)%nod;
        n>>=1;
    }
    return ans;
}
void fun(){
    int n;
    cin>>n;
    n*=2;
    vector<int> ans(n+1,0);
    vector<pair<int,pair<int,int>>> v;
    for(int i=2;i<=n;i++){
        fj(1,i){
            int k;
            cin>>k;
            v.push_back({k,{i,j}});
        }
    }
    sort(v.begin(),v.end(),greater<pair<int,pair<int,int>>>());
    for(int i=0;i<v.size();i++){
        if(ans[v[i].S.F]==0&&ans[v[i].S.S]==0){
            ans[v[i].S.F]=v[i].S.S;
            ans[v[i].S.S]=v[i].S.F;
        }
    }
    for(int i=1;i<=n;i++)   db(ans[i]);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout.precision(20);
    cout<<fixed;
    #ifndef ONLINE_JUDGE
        freopen("/ATOM/input.txt", "r", stdin);
        freopen("/ATOM/output.txt", "w", stdout);
    #endif
    int t=1;
    // cin>>t;
    while(t--){
        fun();
    }
}