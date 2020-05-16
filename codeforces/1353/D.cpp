#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n"
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
	int n;
	cin>>n;
	int a[n+1];
	priority_queue<pair<int,pair<int,int>>> q;
	q.push({n,{0,n-1}});
	int c=0;
	while(!q.empty()){
		int l=-1*q.top().second.first;
		int r=q.top().second.second;
		q.pop();
		if(l>r)
			continue;
		c++;
		int mid=(l+r)/2;
		a[mid]=c;
		q.push({mid-l+1,{-1*l,mid-1}});
		q.push({r-mid+1,{-1*(mid+1),r}});
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
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
	int t;
	cin>>t;
	while(t--){
		fun();
	}
}