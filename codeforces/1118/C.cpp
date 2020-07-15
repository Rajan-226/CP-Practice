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
void yn(bool check){
	if(check)	cout<<"YES\n";
	else		cout<<"NO\n";
}
void fun(){
	int n;
	cin>>n;
	int a[n*n+10],ans[n][n];
	map<int,int> mp;
	fi(0,n*n){
		cin>>a[i];
		mp[a[i]]++;
	}
	if(n==1){
		cout<<"YES\n"<<a[0];
		return ;
	}
	vector<int> v4,v2,v1;
	for(auto i:mp){
		if(n%2){
			if(mp[i.F]%4==2){
				v2.push_back(i.F);
				mp[i.F]-=2;
			}
			else if(mp[i.F]%4==3){
				v2.push_back(i.F);
				v1.push_back(i.F);
				mp[i.F]-=3;
			}
			else if(mp[i.F]%4==1){
				v1.push_back(i.F);
				mp[i.F]-=1;
			}
			while(mp[i.F]%4==0&&mp[i.F]>0){
				v4.push_back(i.F);
				mp[i.F]-=4;
			}
		}
		else if(n%2==0&&(i.S)%4){
			cout<<"NO\n";
			return ;
		}
		
	}
	if(n%2){
		int r=(n/2)*(n/2);
		if(v1.size()!=1||v4.size()<r){
			cout<<"NO\n";
			return ;
		}
		cout<<"YES\n";
		ans[n/2][n/2]=v1[0];
		int k=0;
		fi(0,n/2){
			fj(0,n/2){
				ans[i][j]=ans[n-i-1][j]=ans[i][n-j-1]=ans[n-i-1][n-j-1]=v4[k];
				k++;
			}
		}
		while(k<v4.size()){
			v2.push_back(v4[k]);
			v2.push_back(v4[k]);
			k++;
		}
		k=0;
		fi(0,n/2){
			ans[n-i-1][n/2]=ans[i][n/2]=v2[k];
			k++;
			ans[n/2][n-i-1]=ans[n/2][i]=v2[k];
			k++;
		}
	}
	else{
		sort(a,a+n*n);
		cout<<"YES\n";
		int k=0;
		fi(0,n/2){
			fj(0,n/2){
				ans[i][j]=ans[n-i-1][j]=ans[i][n-j-1]=ans[n-i-1][n-j-1]=a[k];
				k+=4;
			}
		}
	}
	fi(0,n){
		fj(0,n)
			cout<<ans[i][j]<<" ";
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
	int t=1;
	// cin>>t;
	while(t--){
		fun();
	}
}