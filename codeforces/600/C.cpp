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

#define vvl vector<vector<ll>>
#define vl vector<ll>
#define pl pair<ll,ll>
#define ppl pair<ll,pair<ll,ll>>
#define mxsize (int)1e6+5

void fun(){
	string s;
	cin>>s;
	if(s.size()==1){
		cout<<s;
		return ;
	}

	map<char,int> mp;
	for(auto i:s){
		mp[i]++;
	}
	int n=s.size();
	string ans="";
	for(char c='a';c<='z';c++){
		if(mp[c]){
			ans+=string(mp[c]/2,c);
			if(mp[c]%2){
				for(char ch='z';ch>c;ch--){
					if(mp[ch]%2){
						ans+=c;
						mp[c]+=1;
						mp[ch]-=1;
						break;
					}
				}
			}

			mp[c]=mp[c]-2*(mp[c]/2);
		}
	}
	cout<<ans;
	if(n%2){
		for(char c='a';c<='z';c++){
			if(mp[c]%2){
				cout<<c;
				break;
			}
		}
	}
	for(int i=ans.size()-1;i>=0;i--)	cout<<ans[i];
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
	// cin>>t;
	while(t--){
		fun();
	}
}