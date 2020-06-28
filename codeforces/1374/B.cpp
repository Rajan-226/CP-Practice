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
	ll n;
	cin>>n;
	ll temp=n;
	ll ans=0;
	while(n%6==0){
		ans++;
		n/=6;
	}
	if(n%2==0&&n!=1){
		cout<<"-1\n";
		return ;
	}
	while(n%3==0){
		ans+=2;
		n/=3;
	}
	if(n!=1){
		cout<<"-1\n";
		return ;
	}
	if(n==1){
		cout<<ans<<"\n";
		return ;
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