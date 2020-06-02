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
	string s,t;	cin>>s>>t;
	if(s.size()<t.size()){
		cout<<"need tree";
		return ;
	}
	int a[26]={0};
	fi(0,s.size())
		a[s[i]-'a']+=1;
	fi(0,t.size())
		a[t[i]-'a']-=1;
	fi(0,26){
		if(a[i]<0){
			cout<<"need tree";
			return ;
		}
	}
	if(s.size()==t.size())
		cout<<"array";
	else{
		int j=0,k=0;
		while(k<s.size()){
			if(t[j]==s[k])
				j++;
			k++;
			if(j==t.size()){
				cout<<"automaton";
				return ;
			}
		}
		cout<<"both";
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
	// int t;
	// cin>>t;
	// while(t--){
		fun();
	// }
}