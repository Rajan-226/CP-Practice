#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n"
#define dbg(x) cout<<x<<" ";
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
	int n,e=0,o=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]%2)
			o++;
		else
			e++;
	}
	if((e%2==0&&o%2)||(e%2&&o%2==0)){
		cout<<"NO\n";
		return ;
	}
	else if(e%2==0&&o%2==0){
		cout<<"YES\n";
		return;
	}
	bool ok=1;
	sort(a,a+n);
	for(int i=1;i<n;i++){
		if(a[i]-a[i-1]==1){
			ok=0;
			break;
		}
	}
	
	if(ok)		cout<<"NO\n";
	else		cout<<"YES\n";
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