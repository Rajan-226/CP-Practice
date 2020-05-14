#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n";
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	for(int r=0;r<t;r++){
		for(int i=0;i<n-1;){
			if(s[i]=='B'&&s[i+1]=='G'){
				s[i]='G';
				s[i+1]='B';
				i+=2;
			}
			else
				i++;
		}
	}
	cout<<s;
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