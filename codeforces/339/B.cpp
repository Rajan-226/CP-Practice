#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n";
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
	ll n,m,ans=0,cur=1;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int k;
		cin>>k;
		if(k<cur){
			ans+=n-cur+1;
			cur=1;
		}
		ans+=abs(k-cur);
		cur=k;
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
	// int t;
	// cin>>t;
	// while(t--){
		fun();
	// }
}