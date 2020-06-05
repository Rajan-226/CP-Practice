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
	int n,m;
	cin>>n>>m;
	bool a[n][m],ans[n][m];
	fi(0,n){
		fj(0,m){
			cin>>a[i][j];
			ans[i][j]=1;
		}
	}
	fi(0,n){
		fj(0,m){
			if(a[i][j]==0){
				for(int k=0;k<m;k++)
					ans[i][k]=0;
				for(int k=0;k<n;k++)
					ans[k][j]=0;
			}
		}
	}
	fi(0,n){
		fj(0,m){
			if(a[i][j]){
				bool ok=1;
				for(int k=0;k<m;k++){
					if(ans[i][k]){
						ok=0;
						break;
					}
				}
				for(int k=0;k<n;k++){
					if(ans[k][j]){
						ok=0;
						break;
					}
				}
				if(ok){
					cout<<"NO\n";
					return ;
				}
			}
		}
	}
	cout<<"YES\n";
	fi(0,n){
		fj(0,m){
			dbg(ans[i][j]);
		}
		nl;
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