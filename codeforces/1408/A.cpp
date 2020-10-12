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
#define mxsize (int)1e6
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
void fun(){
	int n;
	cin>>n;
	int a[3][n];
	fi(0,3){
		fj(0,n)	cin>>a[i][j];
	}
	vector<int> ans;
	ans.push_back(a[0][0]);
	fi(1,n){
		if(a[1][i]!=ans.back()&&a[1][i]!=ans.front()){
			ans.push_back(a[1][i]);
		}
		else if(a[2][i]!=ans.back()&&a[2][i]!=ans.front()){
			ans.push_back(a[2][i]);
		}
		else{
			ans.push_back(a[0][i]);
		}
	}
	
	for(auto i:ans)	db(i);
	nl;

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
	cin>>t;
	while(t--){
		fun();
	}
}