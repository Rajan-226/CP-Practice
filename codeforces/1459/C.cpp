#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,sse,sse2")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define pi 3.141592653589
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
#define mxsize (int)1e5

// Just search "gcd after adding constant"

// Follow the first link of quora and get yourself high ratings

// For next time, don't think how to solve this problem
// Think what to search on google

//https://www.quora.com/If-G-is-the-GCD-of-n-numbers-and-if-each-number-is-then-increased-by-some-positive-constant-what-is-the-fastest-way-of-calculating-GCD-of-the-numbers-after-the-increment

void fun(){
	int n,m;
	cin>>n>>m;
	ll a[n+5];
	fi(0,n)	cin>>a[i];
	if(n==1){
		fi(0,m){
			ll temp;	cin>>temp;
			cout<<temp+a[0]<<" ";
		}
		return ;
	}

	ll gc=abs(a[1]-a[0]);
	fi(2,n)	gc=__gcd(gc,abs(a[i]-a[0]));

	fi(0,m){
		ll temp;
		cin>>temp;
		cout<<__gcd(temp+a[0],gc)<<" ";
	}
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