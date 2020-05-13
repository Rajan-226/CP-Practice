#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n";
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
	ll n,k;
	cin>>n>>k;
	while(k){
		int i;
		for(i=2;i<=n;i++){
			if(n%i==0)
				break;
		}
		if(i==2){
			n+=2*k;
			break;
		}
		else
			n+=i;
		k--;
	}
	cout<<n<<"\n";
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