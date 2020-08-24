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
#define mxsize (int)1e6
vector<int> adj[mxsize];    //adjacency list
bool vis[mxsize],colour[mxsize];   //vis array for node transversal
void dfs(int node,int col){
    vis[node]=1;
    colour[node]=col;
    for(auto child:adj[node]){
        if(vis[child]==0){
            int c=!col; 
            dfs(child,c);
        }
    }
}
void fun(){
    int n;  // number of nodes
    int k;  // number of edges
    cin>>n>>k;
    // 1 to n different type of nodes
    fi(0,k){
        int x,y;
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    dfs(1,1);
    int o=0,z=0;
    for(int i=1;i<=n;i++)
        colour[i]==0?z++:o++;
    if(o<=n/2){
        cout<<o<<"\n";
        for(int i=1;i<=n;i++){
            if(colour[i]==1)
                db(i);
        }
    }
    else{
        cout<<z<<"\n";
        for(int i=1;i<=n;i++){
            if(colour[i]==0)
                db(i);
        }
    }
    nl;

    fi(0,n+2){
        colour[i]=vis[i]=0;
        adj[i].clear();
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