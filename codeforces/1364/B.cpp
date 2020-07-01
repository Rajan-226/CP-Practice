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
#define UM unordered_map<int,int>
#define MP map<int,int>
void fun(){
	int n;	cin>>n;
	int a[n];
	fi(0,n){
		cin>>a[i];
	}
	vector<int> ans;
	ans.push_back(a[0]);
	int i=1;
	while(i<n){
		if(a[i]>=a[i-1]){
			while(i<n&&a[i]>=a[i-1]){
				i++;
			}
			ans.push_back(a[i-1]);
		}
		else{
			while(i<n&&a[i]<=a[i-1]){
				i++;
			}
			ans.push_back(a[i-1]);
		}
	}
	cout<<ans.size()<<"\n";
	fi(0,ans.size())
		cout<<ans[i]<<" ";
	nl;
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