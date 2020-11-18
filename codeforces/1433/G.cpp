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

#define vvl vector<vector<ll>>
#define vl vector<ll>
#define pl pair<ll,ll>
#define ppl pair<ll,pair<ll,ll>>
#define mxsize (int)2000
vector<pair<int,ll>> adj[mxsize];
vector<vector<ll>> dis;
vector<bool> vis;
void dijsktra(int root){
    priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> q;       // you can use priority queue if you want lexicographically smaller or larger
    q.push({0,root});
    dis[root][root]=0;
    while(!q.empty()){
        int cur=q.top().S;
        q.pop();

        if(vis[cur])    continue;
        vis[cur]=1;

        for(auto child:adj[cur]){
            int node=child.first;
            ll w=child.second;

            if(dis[root][node]>dis[root][cur]+w){
                dis[root][node]=dis[root][cur]+w;
                q.push({dis[root][node],node});
            }
        }
    }
}
void fun(){
    int n,m,k;
    cin>>n>>m>>k;
	vector<int> x(m,0),y(m,0);
    fi(0,m){
        ll w;
        cin>>x[i]>>y[i];
        cin>>w;                 
        adj[x[i]].push_back({y[i],w});
        adj[y[i]].push_back({x[i],w});
    }
	dis=vector<vector<ll>>(n+5,vector<ll>(n+5,1e12));
	fi(1,n+1){
		vis=vector<bool>(n+1,0);
		dijsktra(i);
	}
	vector<ll> forget(m,0);
	fj(0,k){
		int a,b;
		cin>>a>>b;
		fi(0,m){
			forget[i]+=min(dis[a][b],min(dis[a][y[i]]+dis[x[i]][b],dis[a][x[i]]+dis[y[i]][b]));
		}
	}
	ll ans=LLONG_MAX;
	fi(0,m)	ans=min(ans,forget[i]);
	cout<<ans<<"\n";
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