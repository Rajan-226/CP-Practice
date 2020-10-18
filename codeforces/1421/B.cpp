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
#define mxsize (int)1e6+5
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
bool check(char x,char y,char c,char d){
	return (x=='1'&&y=='1'&&c=='0'&&d=='0')||(x=='0'&&y=='0'&&c=='1'&&d=='1');
}
void fun(){
	int n;
	cin>>n;
	char a[n][n];
	fi(0,n){
		fj(0,n){
			cin>>a[i][j];
		}
	}
	char x=a[1][0],y=a[0][1],c=a[n-1][n-2],d=a[n-2][n-1];
	if(check(x,y,c,d)){
		cout<<"0\n";
		return ;
	}
	vector<vector<int>> v;
	v.push_back({0,1,1,0});
	v.push_back({n-1,n-2,n-2,n-1});
	v.push_back({0,1,n-1,n-2});
	v.push_back({0,1,n-2,n-1});
	v.push_back({1,0,n-1,n-2});
	v.push_back({1,0,n-2,n-1});
	v.push_back({0,1});
	v.push_back({1,0});
	v.push_back({n-1,n-2});
	v.push_back({n-2,n-1});

	for(auto j:v){
		for(int i=0;i<j.size();i+=2){
			char c=a[j[i]][j[i+1]];
			if(c=='1'){
				a[j[i]][j[i+1]]='0';
			}
			else{
				a[j[i]][j[i+1]]='1';
			}
		}

		if(check(a[1][0],a[0][1],a[n-1][n-2],a[n-2][n-1])){
			cout<<j.size()/2<<"\n";
			for(auto d:j){
				db(d+1);
			}
			nl;
			return ;
		}
		a[1][0]=x;
		a[0][1]=y;
		a[n-1][n-2]=c;
		a[n-2][n-1]=d;
	}
}
/*
S10   0 1
101
01F    1 0
*/
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
	cin>>t;
	while(t--){
		fun();
	}
}