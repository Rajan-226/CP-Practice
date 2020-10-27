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
#define SIZE (int)1e6+5
long long a[SIZE],prefix[SIZE],suffix[SIZE];
void fun(){		//copied from editorial
	int n,k,x;
	cin>>n>>k>>x;
	fi(1,n+1)	cin>>a[i];
	long long mul=1;
    while(k--)
        mul *= x;
    for(int i = 1; i <= n; i++)
        scanf("%I64d", &a[i]);
    for(int i = 1; i <= n; i++)
        prefix[i] = prefix[i-1] | a[i];
    for(int i = n; i > 0; i--)
        suffix[i] = suffix[i+1] | a[i];
    long long ans = 0;
    for(int i= 1; i <= n; i++)
        ans = max(ans, prefix[i-1] | (a[i] * mul) | suffix[i+1]);
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