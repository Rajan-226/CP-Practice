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
	int a[n];
	fi(0,n-1)
		cin>>a[i];
	bool ok=0;
	int i=0;
	while(i<n-1){
		if(i==k-1){
			ok=1;
			break;
		}
		i+=a[i];
	}
	if(i==k-1)	ok=1;

	if(ok)	cout<<"YES";
	else	cout<<"NO";
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