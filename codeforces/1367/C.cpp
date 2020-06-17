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
	string s;	cin>>s;
	n=s.size();
	int ans=0,i=0,c=0;
	while(i<n&&s[i]=='0'){
		c++;
		i++;
	}
	if(c>=k+1){
		c-=1;
		ans++;
	}
	if(i>=n&&ans==0){
		ans++;
	}
	i=1;
	bool ok=0;
	while(i<n){
		int j=i;
		c=0;
		while(i<n&&s[i]=='0'){
			c++;
			i++;
		}
		if(i>=n){
			ok=1;
			break;
		}
		i++;
		while(c>=2*k+1){
			ans++;
			c-=k+1;
		}
	}
	if(ok){
		if(c>=k+1){
			c-=1;
			ans++;
		}
		while(c>=2*k+1){
			ans++;
			c-=k+1;
		}
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