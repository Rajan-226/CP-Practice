#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007
#define nl cout<<"\n"
#define dbg(x) cout<<x<<" "
#define fi(a,b) for(int i=a;i<b;i++)
#define fj(a,b) for(int j=a;j<b;j++)
#define fk(a,b) for(int k=a;k<b;k++)
#define F first
#define S second
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
	int n;
	cin>>n;
	set<pair<ll,ll>> s;
	fi(0,n){
		ll a,b;
		cin>>a>>b;
		s.insert({a,b});
	}
	ll ans1=-1,ans2=INT_MAX;
	bool ok=1;
	for(auto i:s){
		if(ok&&i.S<ans1){
			ok=0;
			ans2=i.F;
		}
		if(ok==0&&i.S>=ans2)
			ok=1;
		if(ok)
			ans1=i.S;
		else
			ans2=i.F;

	}
	if(ok)
		cout<<ans1<<"\n";
	else
		cout<<ans2<<"\n";
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