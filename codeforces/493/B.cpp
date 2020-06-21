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
#define pb push_back
#define UM unordered_map<int,int>
void fun(){
	int n;	cin>>n;
	ll last,ff=0,ss=0,f=-1,s=-1;
	vector<int> a,b;
	fi(0,n){
		ll k;	cin>>k;
		if(k>0){
			ff+=k;
			a.push_back(k);
		}
		else{
			ss+=-k;
			b.push_back(-k);
		}
		last=k;
	}
	if(ff==ss){
		int ok=0,i=0;
		while(i<a.size()&&i<b.size()){
			if(a[i]==b[i]){
				i++;
				continue;
			}
			if(a[i]>b[i])	ok=1;
			else	ok=2;
			break;
		}
		if(ok){
			if(ok==1)	cout<<"first";
			else	cout<<"second";
		}
		else{
			if(last>0)	cout<<"first";
			else	cout<<"second";
		}
	}
	else{
		if(ff>ss)	cout<<"first";
		else	cout<<"second";
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