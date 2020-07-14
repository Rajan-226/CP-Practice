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
	ll suf[n+10],pref[n+10];
	int a[n+5],ans=0;
	fi(2,n+2){
		cin>>a[i];
		if(i==2||i==3)
			pref[i]=a[i];
		else
			pref[i]=a[i]+pref[i-2];
	}
	if(n==1){
		cout<<"1";
		return ;
	}
	for(int i=n+1;i>=2;i--){
		if(i==n+1||i==n)
			suf[i]=a[i];
		else
			suf[i]=suf[i+2]+a[i];
	}
	pref[0]=pref[1]=0;
	suf[n+2]=suf[n+3]=0;
	fi(2,n+2){
		if(pref[i-1]+suf[i+2]==pref[i-2]+suf[i+1])
			ans++;
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