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
void fun(){
	int n;
	ll t;
	cin>>n>>t;
	int a[n];
	fi(0,n)
		cin>>a[i];
	int ans=0,c=0;
	ll sum=0;
	while(c<n&&sum+a[c]<=t){
		sum+=a[c];
		c++;
	}
	ans=c;
	int j=c;
	fi(1,n){
		sum-=a[i-1];
		c-=1;
		while(c<n&&sum+a[j]<=t){
			sum+=a[j];
			j++;
			c++;
		}
		ans=max(ans,c);
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