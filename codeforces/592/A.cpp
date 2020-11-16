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
	char c[10][10];
	int movesa=100,movesb=100;
	fi(1,9){
		fj(1,9){
			cin>>c[i][j];
		}
	}
	fi(1,9){
		fj(1,9){
			if(c[i][j]=='.')	continue;
			if(c[i][j]=='W'){
				bool ok=0;
				fk(1,i){
					if(c[k][j]!='.'){
						ok=1;break;
					}
				}
				if(ok)	continue;
				movesa=min(movesa,i-1);
			}else{
				bool ok=0;
				fk(i+1,9){
					if(c[k][j]!='.'){
						ok=1;break;
					}
				}
				if(ok)	continue;
				movesb=min(movesb,8-i);
			}
		}
	}
	// db(movesa);db(movesb);
	if(movesa<=movesb){
		cout<<"A";
	}
	else{
		cout<<"B";
	}
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