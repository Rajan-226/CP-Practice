#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,sse,sse2")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define pi 3.141592653589
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
#define mxsize (int)500
vector<int> adj[mxsize];    //adjacency list
vector<vector<bool>> mat(mxsize,vector<bool>(mxsize,0));
vector<bool> vis(mxsize,0);
int bfs(int n){
    queue<int> q;
    q.push(1);
    vis[1]=1;
    int ans=1;
    while(!q.empty()){
        int sz=q.size();
        fi(0,sz){
            int p=q.front();
            q.pop();
            for(auto child:adj[p]){
                if(child==n)    return ans;
                if(!vis[child]){
                    q.push(child);
                    vis[child]=1;
                }
            }
        }
        ans++;
    }
    return 0;
}
int bfs2(int n){
    queue<int> q;
    q.push(1);
    vis[1]=1;
    int ans=1;
    while(!q.empty()){
        int sz=q.size();
        fi(0,sz){
            int p=q.front();
            q.pop();
            if(!mat[p][n])  return ans;
            for(int chil=1;chil<n;chil++){
                if(!mat[chil][p]&&!vis[chil]){
                    q.push(chil);
                    vis[chil]=1;
                }
            }
        }
        ans++;
    }
    return 0;
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
        mat[x][y]=1;
        mat[y][x]=1;
    }
    int ans=bfs(n);
    if(!ans){
        cout<<"-1\n";
    }else{
        vis=vector<bool>(mxsize,0);
        int ans2=bfs2(n);
        if(!ans2){
            cout<<"-1\n";
        }
        else{
            cout<<max(ans,ans2)<<"\n";
        }
    }


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