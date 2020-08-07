#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007
#define pb push_back
#define nl cout<<"\n"
#define db(x) cout<<x<<" "
#define fi(a,b) for(int i=a;i<b;i++)
#define fj(a,b) for(int j=a;j<b;j++)
#define fk(a,b) for(int k=a;k<b;k++)
#define F first
#define S second
#define UM unordered_map<int,int>
#define MP map<int,int>
#define mxsize (int)1e5+5
vector<pair<ll,ll>> adj[mxsize];
bool vis[mxsize];
ll cnt[mxsize],parent[mxsize],sum=0;
void dfs(ll par){
    if(adj[par].size()==1&&par!=1){
        vis[par]=cnt[par]=1;
        return ;
    }
    vis[par]=1;
    for(auto child:adj[par]){
        if(vis[child.F]==0){
            dfs(child.F);
            parent[child.F]=child.S;
            cnt[par]+=cnt[child.F];
        }
    }
}
struct cmp{
    bool operator()(pair<ll,ll> a,pair<ll,ll> b){
        ll aa=((a.F)-(a.F)/2)*a.S;
        ll bb=((b.F)-(b.F)/2)*b.S;
        return aa<bb;
    }
};
void fun(){
    ll n;
    ll s;
    cin>>n>>s;
    fi(0,n-1){
        ll a,b;
        ll w;
        cin>>a>>b>>w;
        adj[a].push_back({b,w});
        adj[b].push_back({a,w});
    }
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,cmp> q;
    
    dfs(1);
    fi(2,n+1){
        sum+=parent[i]*cnt[i];
        q.push({parent[i],cnt[i]});
    }
    
    ll ans=0;
    while(sum>s){
        pair<ll,ll> p=q.top();
        q.pop();
        sum-=(p.F)*(p.S);
        p.F/=2;
        sum+=(p.F)*(p.S);   
        ans++;
        q.push(p);
    }
    cout<<ans<<"\n";
    sum=0;
    fi(0,n+3){
        parent[i]=vis[i]=cnt[i]=0;
        adj[i].clear();
    }
    while(!q.empty()){
        q.pop();
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("/ATOM/input.txt", "r", stdin);
        freopen("/ATOM/output.txt", "w", stdout);
    #endif
    int t=1;
    cin>>t;
    while(t--){
        fun();
    }
}