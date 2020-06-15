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
	int n,m;
	cin>>n>>m;
	int a[m];
	fi(0,m)
		cin>>a[i];
	sort(a,a+m);
	if(a[0]==1||a[m-1]==n){
		cout<<"NO\n";
		return ;
	}
	fi(0,m-2){
		if(a[i]==a[i+1]-1&&a[i+1]==a[i+2]-1){
			cout<<"NO\n";
			return ;
		}
	}
	cout<<"YES\n";
	
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