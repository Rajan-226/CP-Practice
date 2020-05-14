#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n";
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
	int m,s;
	cin>>m>>s;
	if(s==0){
		if(m==1)
			cout<<"0 0\n";
		else
			cout<<"-1 -1\n";
		return ;
	}
	string mx,mi;
	for(int i=0;i<m;i++){
		int k=min(9,s);
		mx.push_back('0'+k);
		s-=k;
	}
	if(s>0){
		cout<<"-1 -1\n";
		return ;
	}
	for(int i=m-1;i>=0;i--)
		mi.push_back(mx[i]);
	int j=0;
	while(mi[j]=='0')
		j++;
	mi[0]+=1;
	mi[j]-=1;
	cout<<mi<<" "<<mx<<"\n";

	
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