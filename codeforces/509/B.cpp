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
	int a[n],mn=101,mx=-1,mxm=101,mnm=-1;
	fi(0,n){
		cin>>a[i];
		if(a[i]/k<=mn){
			if(a[i]/k==mn)		mnm=min(mnm,a[i]%k);
			else		mnm=a[i]%k;
			mn=a[i]/k;
		}
		if(a[i]/k>=mx){
			if(a[i]/k==mx)		mxm=max(mxm,a[i]%k);
			else		mxm=a[i]%k;
			mx=a[i]/k;
		}
	}
	if(mx-mn>1){
		cout<<"NO";
		return ;
	}
	else if(mx-mn==1&&mxm>mnm){
		cout<<"NO";
		return ;
	}

	cout<<"YES\n";
	fi(0,n){
		fj(1,a[i]+1){
			if(j%k)	db(j%k);
			else	db(k);
		}
		nl;
	}
	
	
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