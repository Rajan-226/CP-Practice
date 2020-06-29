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
void fun(){
	ll n,k;
	cin>>n>>k;
	vector<ll> alice,bob,both;
	for(int i=0;i<n;i++){
		ll t,a,b;
		cin>>t>>a>>b;
		if(a==1&&b==1)
			both.emplace_back(t);
		else if(a)
			alice.emplace_back(t);
		else if(b)
			bob.emplace_back(t);
	}
	sort(alice.begin(),alice.end());
	sort(bob.begin(),bob.end());
	fi(0,min(alice.size(),bob.size()))
		both.emplace_back(alice[i]+bob[i]);
	if(both.size()<k){
		cout<<"-1";
		return ;
	}
	sort(both.begin(),both.end());
	ll ans=0;
	fi(0,k)
		ans+=both[i];
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