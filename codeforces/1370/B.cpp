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
	int k;	cin>>k;
	vector<int> e,o;
	fi(1,2*k+1){
		int k;
		cin>>k;
		if(k%2)	o.emplace_back(i);
		else	e.emplace_back(i);
	}
	int n=e.size(),m=o.size();
	if(n%2&&m%2){
		for(int i=0;i<e.size()-1;i+=2)
			cout<<e[i]<<" "<<e[i+1]<<"\n";
		for(int i=0;i<o.size()-1;i+=2)
			cout<<o[i]<<" "<<o[i+1]<<"\n";
	}
	else{
		if(n==0){
			for(int i=0;i<o.size()-2;i+=2)
				cout<<o[i]<<" "<<o[i+1]<<"\n";
			return ;
		}
		else if(m==0){
			for(int i=0;i<e.size()-2;i+=2)
				cout<<e[i]<<" "<<e[i+1]<<"\n";
			return;
		}
		for(int i=0;i<e.size()-2;i+=2)
			cout<<e[i]<<" "<<e[i+1]<<"\n";
		for(int i=0;i<o.size();i+=2)
			cout<<o[i]<<" "<<o[i+1]<<"\n";
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
	cin>>t;
	while(t--){
		fun();
	}
}