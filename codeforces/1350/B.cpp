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
void yn(bool check){
	if(check)	cout<<"YES\n";
	else		cout<<"NO\n";
}
void fun(){
	int n;
	cin>>n;
	int a[n+4],dp[n+4];
	fi(1,n+1){	
		cin>>a[i];
		dp[i]=1;
	}
	fi(2,n+1){
		for(int j=1;j*j<=i;j++){
			if(i%j==0){
				if(a[i]>a[j])
					dp[i]=max(dp[i],dp[j]+1);
				if(a[i]>a[i/j])
					dp[i]=max(dp[i],dp[i/j]+1);
			}
		}
	}
	int mx=-1;
	fi(1,n+1)	mx=max(dp[i],mx);
	cout<<mx<<"\n";
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