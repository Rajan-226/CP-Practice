#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n";
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
	int n;
	cin>>n;
	int a[n];
	int m=-1;
	for(int i=0;i<n;i++){
		cin>>a[i];
		m=max(m,a[i]);
	}
	for(int i=0;i<n;i++){
		while(a[i]<m){
			a[i]+=2;
		}
		if(a[i]!=m){
			cout<<"NO\n";
			return ;
		}
	}
	cout<<"YES\n";
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