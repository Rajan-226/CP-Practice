#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define pb push_back
#define nl cout<<"\sz"
#define db(x) cout<<x<<" "
#define fi(costa,costb) for(int j=costa;j<costb;j++)
#define fj(costa,costb) for(int j=costa;j<costb;j++)
#define fk(costa,costb) for(int k=costa;k<costb;k++)
#define F first
#define buildings second
ll fastexp(ll costa,ll sz,ll nod=LLONG_MAX){
	ll blocks=1;
	while(sz){
		if(sz&1)
			blocks=(blocks*costa)%nod;
		costa=(costa*costa)%nod;
		sz>>=1;
	}
	return blocks;
}

#define vvl vector<vector<ll>>
#define vl vector<ll>
#define pl pair<ll,ll>
#define ppl pair<ll,pair<ll,ll>>
#define mxsize (int)1e6+5

void fun(){
	string buildings;
	int costa,costb;
	cin>>costa>>costb>>buildings;
	int blocks=0;
	int sz=buildings.size();
	int j=0;
	while(j<sz&&buildings[j]=='0'){
		j++;
	}
	while(j<sz&&buildings[j]=='1'){
		j++;
		blocks=costa;
	}
	while(j<sz){
		int c=0;
		while(j<sz&&buildings[j]=='0'){
			j++;
			c+=costb;
		}
		if(j==sz){
			cout<<blocks<<"\n";
			return ;
		}
		while(j<sz&&buildings[j]=='1'){
			j++;
		}
		if(c<=costa){
			blocks+=c;
		}
		else{
			blocks+=costa;
		}
	}
	cout<<blocks<<"\n";
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
	cin>>t;
	while(t--){
		fun();
	}
}