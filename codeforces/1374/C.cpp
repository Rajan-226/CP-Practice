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
	int n;
	cin>>n;
	string s;
	cin>>s;
	int o=0,c=0,anso=0,ansc=0;
	fi(0,n){
		if(s[i]=='('){
			o++;
		}
		else{
			if(o==0){
				ansc++;
				continue;
			}
			o--;
		}
	}
	for(int i=n-1;i>=0;i--){
		if(s[i]==')')
			c++;
		else{
			if(c==0){
				anso++;
				continue;
			}
			c--;
		}
	}
	// db(anso);db(ansc);
	cout<<min(anso,ansc)<<"\n";
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