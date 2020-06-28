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
#define UM unordered_map<ll,ll>
#define MP map<ll,ll>
void fun(){
	ll n,k;
	cin>>n>>k;
	ll a[n];
	MP mp;
	ll ans=0;
	fi(0,n){
		cin>>a[i];
		if(a[i]%k!=0){
			// ans++;
			mp[a[i]%k]+=1;
		}
	}
	if(mp.empty()){
		cout<<"0\n";
		return ;
	}
	ll mx=0,e=0;
	for(auto i:mp){
		// db(i.F);db(i.S);
		// nl;
		if(i.S>=mx){
			if(i.S>mx)
				e=i.F;
			else if(i.F<=e){
				e=i.F;
			}
			mx=i.S;
		}
	}
	// db(0);db(e);db(mx);
	// nl;
	ans=k*(mx-1)+k-e;
	cout<<ans+1<<"\n";

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