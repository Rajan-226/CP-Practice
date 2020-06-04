#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n"
#define dbg(x) cout<<x<<" "
#define fi(a,b) for(int i=a;i<b;i++)
#define fj(a,b) for(int j=a;j<b;j++)
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
	ll n,sum1=0,sum2=0,sum3=0;
	cin>>n;
	int a[n];
	fi(0,n){
		int x,y,z;
		cin>>x>>y>>z;
		sum1+=x;
		sum2+=y;
		sum3+=z;
	}
	if(sum1==0&&sum2==0&&sum3==0)	cout<<"YES";
	else	cout<<"NO";
	
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