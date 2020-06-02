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
	int a[3][3],r[3],c[3];
	fi(0,3)		fj(0,3)		cin>>a[i][j];
	fi(0,3){
		int row=0,col=0;
		fj(0,3){
			row+=a[i][j];
			col+=a[j][i];
		}
		r[i]=row;
		c[i]=col;
	}
	fi(1,100001){
		if(r[0]+i==c[0]+i){
			int magic=r[0]+i;
			a[0][0]=i;
			a[1][1]=magic-r[1];
			a[2][2]=magic-r[2];
			if(a[0][0]+a[1][1]+a[2][2]==magic){
				fi(0,3){
					fj(0,3)
						cout<<a[i][j]<<" ";
					nl;
				}
				return ;
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