#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007
#define nl cout<<"\n"
#define db(x) cout<<x<<" "
#define fi(a,b) for(int i=a;i<b;i++)
#define fj(a,b) for(int j=a;j<b;j++)
#define fk(a,b) for(int k=a;k<b;k++)
#define F first
#define S second
#define pb push_back
#define UM unordered_map<int,int>
#define mxsize (int)1e6

//If there is a backedge,then there is a cycle.

vector<int> adj[mxsize];    //adjacency list
bool vis[mxsize];   //vis array for node transversal
vector<int> fck;
void dfs(int node){
    vis[node]=1;
    fck.push_back(node);
    for(auto child:adj[node]){
        if(vis[child]==0){
            dfs(child);
        }
    }
}
void fun(){
    int n;  // number of nodes
    int k;  // number of edges
    cin>>n>>k;
    int indegree[n+3]={0};
    fi(0,k){
        int x,y;
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
        indegree[x]++;
        indegree[y]++;
    }
    int ans=0;
    fi(1,n+1){
        if(vis[i]==0){
            dfs(i);
            bool ok=1;
            for(auto i:fck) ok&=indegree[i]==2;
            fck.clear();
            ans+=ok;
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
    int t=1;
    // cin>>t;
    while(t--){
        fun();
    }
}