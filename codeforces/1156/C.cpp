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
bool vis[1000000]={0};
void fun(){
	ll n,z;
	cin>>n>>z;
	ll a[n];
	fi(0,n)
		cin>>a[i];
	sort(a,a+n);
	ll ans=0,i=0,j=n/2,m=-1;
	while(i<n/2){
		while(j<n&&a[j]-a[i]<z){
			j++;
		}
		if(j<n){
			ans++;
		}
		i++;
		j++;
	}

	
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