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
	int n;
	cin>>n;
	int a[n];
	fi(0,n)	cin>>a[i];
	int mx[n]={0};
	mx[n-1]=a[n-1];
	for(int i=n-2;i>=0;i--)
		mx[i]=max(a[i],mx[i+1]);
	for(int i=n-2;i>0;i--){
		if(a[i]<mx[i]&&a[i]<a[i-1]){
			cout<<i<<"\n";
			return ;
		}
	}
	cout<<"0\n";
	
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