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
#define pll pair<ll,ll>
ll cost(pll p){
	ll num=p.F;
	ll part=p.S;
	return (num/part)*(num/part)*(part-num%part)+ceil(1.0*num/part)*ceil(1.0*num/part)*(num%part);
}
pll give(pll &p){
	return {p.F,p.S+1};
}
struct comp{
	bool operator()(pll &a,pll &b){
		return cost(a)-cost(give(a))<cost(b)-cost(give(b));
	}
};
void fun(){
	int n,k;
	cin>>n>>k;
	priority_queue<pll,vector<pll>,comp> q;
	ll ans=0;
	fi(0,n){
		ll num;
		cin>>num;
		q.push({num,1});
		ans+=num*num;
	}
	k-=n;
	while(k--){
		pll p=q.top();
		q.pop();
		ans-=cost(p);
		ans+=cost(give(p));
		// db(cost(p)-cost(give(p)));
		q.push(give(p));
	}
	// nl;
	// while(!q.empty()){
	// 	pll p=q.top();
	// 	q.pop();
	// 	db(p.F);db(p.S);nl;
	// }
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