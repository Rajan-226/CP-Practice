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
bool fun(){
	ll n;	cin>>n;
	ll temp=n;
	if(n==1)			return 0;
	if(n%2||n==2)		return 1;
	ll od=0;
	while(n%2==0)	n/=2;
	if(n==1)
		return 0;
	bool ok=1;
	for(ll i=2;i*i<=n;i++){
		if(n%i==0){
			ok=0;
			break;
		}
	}
	if(ok&&temp/n==2)
		return 0;
	return 1;
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
		if(fun())
			cout<<"Ashishgup"<<"\n";
		else
			cout<<"FastestFinger"<<"\n";
	}
}