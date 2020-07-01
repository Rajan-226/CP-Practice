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
#define UM unordered_map<int,int>
#define MP map<int,int>
void fun(){
	int n,x;
	cin>>n>>x;
	int a[n];
	ll sum=0,f=0,l=0;
	bool ok=1;
	fi(0,n){
		cin>>a[i];
		sum+=a[i];
		if(a[i]%x&&ok){
			f=i+1;
			ok=0;
		}
		if(a[i]%x)
			l=i;
	}
	if(ok){
		cout<<"-1\n";
		return ;
	}
	if(sum%x){
		cout<<n<<"\n";
		return ;
	}
	ll ans=max(f,n-f);
	ans=max(l,max(ans,n-l));
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
	cin>>t;
	while(t--){
		fun();
	}
}