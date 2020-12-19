#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,sse,sse2")
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
#define mxsize (int)2e5+5           //Hadd ho gyi😂😂
vector<int> adj[mxsize];
vector<ll> mx;
int dfs(int node,int par,ll w){
    ll sum=0;
    for(auto child:adj[node]){
        if(child==par)  continue;
        sum+=dfs(child,node,w+1);
    }
    mx[node]=w-sum;
    // db(node);db(w);db(sum);nl;
    return sum+1;
}
void fun(){
    int n,k;
    cin>>n>>k;
    mx=vector<ll>(n+1,0);
    mx[0]=INT_MIN;
    fi(0,n-1){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1,0,0);
    // for(auto i:mx){
    //     db(i);
    // }nl;
    sort(mx.begin(),mx.end());
    
    ll ans=0,j=mx.size()-1;
    while(k--){
        ans+=mx[j--];
    }
    cout<<ans<<"\n";
    for(int i=1;i<=n;i++)   adj[i].clear();
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