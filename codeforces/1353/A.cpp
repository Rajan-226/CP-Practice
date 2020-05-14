#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n";
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
	ll n,m;
	cin>>n>>m;
	if(n==1){
		cout<<"0\n";
	}
	else if(n==2){
		cout<<m<<"\n";
	}
	else{
		cout<<2*m<<"\n";
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
	int t;
	cin>>t;
	while(t--){
		fun();
	}
}