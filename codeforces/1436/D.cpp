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
vector<int> adj[mxsize];    //adjacency list
// bool vis[mxsize];   //vis array for node transversal
vector<ll> a(mxsize+1,0);
vector<ll> cnt(mxsize+1,0),tot(mxsize+1,0);
ll ans=0;
void dfs(int node){
	tot[node]+=a[node];
	if(adj[node].empty()){
		cnt[node]=1;
	}
	for(auto& child:adj[node]){
		dfs(child);
		tot[node]+=tot[child];
		cnt[node]+=cnt[child];
	}
	ans=max(ans,(ll)ceil(1.0*tot[node]/cnt[node]));
}
void fun(){
	int n;
	cin>>n;
	fi(2,n+1){
		int k;
		cin>>k;
		adj[k].push_back(i);
	}
	fi(1,n+1)	cin>>a[i];
	dfs(1);
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