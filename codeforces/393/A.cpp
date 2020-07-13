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
void yn(bool check){
	if(check)	cout<<"YES\n";
	else		cout<<"NO\n";
}
void fun(){
	string s;
	cin>>s;
	int n=0,e=0,t=0,ii=0;
	for(auto i:s){
		if(i=='n')	n++;
		else if(i=='e')	e++;
		else if(i=='t')	t++;
		else if(i=='i')	ii++;
	}
	n--;
	n/=2;
	e/=3;
	cout<<min(n,min(e,min(t,ii)));
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
	// cin>>t;
	while(t--){
		fun();
	}
}