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
ll p,q,l,r;
vector<pair<ll,ll>> pp,qq;
bool check(int c){
	fi(0,q){
		ll x=qq[i].F,y=qq[i].S;
		x+=c;	y+=c;
		fj(0,p){
			ll a=pp[j].F,b=pp[j].S;
			fk(x,y+1){
				if(k>=a&&k<=b)
					return 1;
			}
		}
	}
	return 0;
}
void fun(){
	cin>>p>>q>>l>>r;
	fi(0,p){
		ll x,y;	cin>>x>>y;
		pp.pb({x,y});
	}
	fi(0,q){
		ll x,y;	cin>>x>>y;
		qq.pb({x,y});
	}
	int ans=0;
	fk(l,r+1){
		ans+=check(k);
	}
	cout<<ans;
	
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