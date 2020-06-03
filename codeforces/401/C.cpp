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
void fun2(int m,int n){
	while(m>0||n>0){
		if(m>0){	
			cout<<"0";
			m--;
		}
		if(n>0){	
			cout<<"1";
			n--;
		}
	}
}
void fun(){
	int n,m;
	cin>>m>>n;
	if(m>n+1||n>2*m+2){
		cout<<"-1 \n";
		return ;
	}
	if(m>=n){
		fun2(m,n);
	}
	else{
		int last;
		while(n>=2&&m>=1){
			if(n>=2){
				cout<<"11";
				n-=2;
				last=1;
			}
			if(m>=1){
				cout<<"0";
				m--;
				last=0;
			}
			if(m>=n)
				break;
		}
		// nl;dbg(m);dbg(n);
		if(last==1){
			fun2(m,n);
		}
		else{
			while(m>0||n>0){
				if(n>0){	
					cout<<"1";
					n--;
				}
				if(m>0){	
					cout<<"0";
					m--;
				}
			}	
		}
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