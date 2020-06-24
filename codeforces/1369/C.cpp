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
	int n,k;
	cin>>n>>k;
	ll a[n],ans=0;
	fi(0,n)
		cin>>a[i];
	sort(a,a+n,greater<int>());
	int w[k];
	fi(0,k)
		cin>>w[i];
	sort(w,w+k);
	fi(0,k){
		if(w[i]==1)
			ans+=2*a[i];
		else
			ans+=a[i];
	}
	int j=0;
	for(int i=k;i<n;){
		if(w[j]!=1){
			w[j]--;
			i+=w[j]-1;
			ans+=a[i];
			i++;
		}
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
	cin>>t;
	while(t--){
		fun();
	}
}