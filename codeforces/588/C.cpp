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

#define vvl vector<vector<ll>>
#define vl vector<ll>
#define pl pair<ll,ll>
#define ppl pair<ll,pair<ll,ll>>
#define mxsize (int)1e6+5

void fun(){
	int n,ans=0;
	cin>>n;
	int a[n];
	map<int,int> mp;
	fi(0,n){
		cin>>a[i];
		mp[a[i]]++;
	}
	bool ok=1;
	while(ok){
		ok=0;
		for(auto i:mp){
			if(mp[i.F]>1){
				ok=1;
				mp[i.F]=(i.S)%2;
				mp[i.F+1]+=(i.S)/2;
			}
		}
	}
	for(auto i:mp){
		// db(i.F);db(i.S);nl;
		ans+=i.S;
	}

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