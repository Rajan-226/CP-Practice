#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n";
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
	int n,k;
	cin>>n>>k;
	int a[n],b[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cin>>b[i];
	sort(a,a+n);
	sort(b,b+n,greater<int>());
	ll sum=0;
	int j=0;
	for(int i=0;i<n;i++){
		if(k){
			if(b[j]>a[i]){
				k--;
				sum+=b[j];
				j++;
			}
			else
				sum+=a[i];
		}
		else
			sum+=a[i];
	}
	cout<<sum<<"\n";
	
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