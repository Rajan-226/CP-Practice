#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
	int n;
	cin>>n;
	int c=1;
	vector<int> anss;
	while(n){
		int ans=n%10;
		if(ans!=0){
			ans=ans*c;
			anss.push_back(ans);
		}
		n/=10;
		c*=10;
	}
	cout<<anss.size()<<"\n";
	for(auto i:anss)
		cout<<i<<" ";
	cout<<"\n";
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