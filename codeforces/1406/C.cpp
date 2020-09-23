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
#define mxsize (int)1e5+5
//A tree may have one centroid or may have two centroids.
//If it has two centroids, they are always connected 

vector<int> adj[mxsize];    //adjacency list
vector<int> centroid;
vector<int> sz;
int parent[mxsize];
int n;
void find(int node,int par){
    sz[node]=1;
    parent[node]=par;
    bool is_centroid=1;
    for(auto child:adj[node]){
        if(child==par)     continue;
        find(child,node);
        sz[node]+=sz[child];
        if(sz[child]>n/2)       //subtrees of "node"
            is_centroid=0;  
    }   
    if((n-sz[node])>n/2)    //remaining tree excluding all the part below "node"
        is_centroid=0;
    if(is_centroid)     centroid.push_back(node);
}
int leaf;
void dfs(int node,int par){
    bool ok=1;
    for(auto child:adj[node]){
        if(child==par)  continue;
        dfs(child,node);
        ok=0;
    }
    if(ok){
        leaf=node;
    }
}
void fun(){ 
    cin>>n;
    sz=vector<int>(n+1,0);
    fi(0,n-1){
        int x,y;
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }

find(1,-1);
    int c=centroid.size();
    if(c==1){
        cout<<"1 "<<adj[1][0]<<"\n";
        cout<<"1 "<<adj[1][0]<<"\n";
    }
    else{
        if(parent[centroid[0]]==centroid[1]){
            dfs(centroid[0],centroid[1]);
            cout<<parent[leaf]<<" "<<leaf<<"\n";
            cout<<leaf<<" "<<centroid[1]<<"\n";
        }
        else{
            dfs(centroid[1],centroid[0]);
            cout<<parent[leaf]<<" "<<leaf<<"\n";
            cout<<leaf<<" "<<centroid[0]<<"\n";
        }
    }

    fi(0,n+2){
        adj[i].clear();
    }
    centroid.clear();


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