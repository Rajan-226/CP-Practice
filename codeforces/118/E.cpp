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
#define UM unordered_map<int,int>
#define MP map<int,int>
#define mxsize (int)1e6

//A bridge is an edge which when removed, makes the graph disconnected
// (or more precisely, increases the number of connected components in the graph)

//given a map of cities connected with roads, find all "important" roads, 
//i.e. roads which, when removed, cause disappearance of a path between some pair of cities.

bool vis[mxsize+5];
int in[mxsize+5],low[mxsize+5];
vector<int> adj[mxsize+5]; //adjacency list
int timer;
set<pair<int,int>> v;
void dfs(int node,int p){
    vis[node]=1;
    in[node]=low[node]=++timer;
    for(auto child:adj[node]){
        if(child==p)    continue;
        if(vis[child]==0){      //forward edge
            dfs(child,node);
            v.insert({node,child});
            low[node]=min(low[node],low[child]);
            if(low[child]>in[node]){
                cout<<"0\n";
                exit(0);
            }
        }
        else{       //Back edge
            if(v.find({-1*child,node})==v.end())
            v.insert({-1*node,child});
            low[node]=min(in[child],low[node]);
        }
    }
}
void fun(){
    int n;  
    int k; 
    cin>>n>>k;
    fi(0,k){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1,-1);
    for(auto i:v){
        if(i.F<0){
            db(-1*i.F);db(i.S);nl;
        }
        else{
            db(i.F);db(i.S);nl;
        }
        
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
    // cin>>t;
    while(t--){
        fun();
    }
}