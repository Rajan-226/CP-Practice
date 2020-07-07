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
#define MP map<ll,int>
ll ans[200005]={0};
void fun(){
	ll n,m,d;
	cin>>n>>m>>d;
	MP mp;
	fi(0,n){
		ll k;
		cin>>k;
		mp[k]=i;
	}
	ll c=0;
	while(!mp.empty()){
		c++;
		int k=mp.begin()->F;
		ans[mp[k]]=c;
		mp.erase(k);
		auto itr=mp.upper_bound(k+d);
		while(itr!=mp.end()){
			k=itr->F;
			ans[mp[k]]=c;
			mp.erase(k);
			itr=mp.upper_bound(k+d);
		}

	}
	cout<<c<<"\n";
	fi(0,n)
		cout<<ans[i]<<" ";
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