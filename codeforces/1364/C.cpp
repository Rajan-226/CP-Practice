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
bool vis[100000];
bool fun(){
	int n;
	cin>>n;
	int b[n],last;
	vector<int> temp;
	fi(0,n){
		int k;
		cin>>k;
		vis[k]=1;
		if(i&&k!=last)
			b[i]=last;
		else
			b[i]=-1;
		last=k;
	}
	fi(0,n+1){
		if(vis[i]==0)
			temp.push_back(i);
	}
	int j=0;
	fi(0,n){
		if(b[i]==-1)
			cout<<temp[j++]<<" ";
		else
			cout<<b[i]<<" ";
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
	// cin>>t;
	while(t--){
		fun();
	}
}