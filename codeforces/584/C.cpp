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
char change(char a,char b){
	for(char c='a';;c++){
		if(c!=a&&c!=b){
			return c;
		}
	}
}
void fun(){
	int n,t;
	cin>>n>>t;
	string a,b;
	cin>>a>>b;
	n=a.size();
	int c=0;
	string ans=a;
	fi(0,n){
		if(a[i]!=b[i]){
			c++;
		}
	}
	if(c>2*t){
		cout<<"-1\n";
		return ;
	}
	if(c>t){
		int i=0;
		bool ok=1;
		while(c>t){
			if(a[i]!=b[i]){
				if(ok){
					ans[i]=a[i];
					ok=0;
				}
				else{
					ans[i]=b[i];
					c--;
					ok=1;
				}
			}
			i++;
		}
		while(i<n&&t){
			if(a[i]!=b[i]){
				ans[i]=change(a[i],b[i]);
				t--;
			}
			i++;
		}
	}
	else{
		fi(0,n){
			if(a[i]!=b[i]){
				ans[i]=change(a[i],b[i]);
				t--;
			}
		}
		for(int i=0;t>0;i++){
			if(a[i]==b[i]){
				ans[i]=change(a[i],b[i]);
				t--;
			}
		}
	}
	cout<<ans<<"\n";
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