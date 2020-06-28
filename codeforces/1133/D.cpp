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
#define UM unordered_map<long double,ll>
void fun(){
	int n;
	cin>>n;
	ll a[n];
	fi(0,n)	cin>>a[i];
	int ans=0,c=0;
	map<pair<int,int>,int> mp;
	fi(0,n){
		ll k;
		cin>>k;
		if(a[i]==0&&k==0){
			c++;
		}
		else if(a[i]){
			//k,a[i]
			ll g=__gcd(a[i],k);
			k/=g;	a[i]/=g;
			mp[{k,a[i]}]+=1;
			ans=max(ans,mp[{k,a[i]}]);
		}
	}
	cout<<ans+c<<"\n";
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