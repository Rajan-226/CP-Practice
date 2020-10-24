#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define pb push_back
#define nl cout<<"\n"
#define db(x) cout<<x<<" "
#define fi(a,b) for(int i=a;i<b;i++)
#define fj(a,b) for(int j=a;j<b;j++)
#define fk(a,b) for(int k=a;k<b;k++)
#define F first
#define S second
#define mxsize (int)1e6+5
ll fastexp(ll a,ll n,ll nod=LLONG_MAX){
	ll ans=1;
	while(n){
		if(n&1)
			ans=(ans*a)%nod;
		a=(a*a)%nod;
		n>>=1;
	}
	return ans;
}
void fun(){
	// Isko dekhne se pehle mera first aur second submission dekho please....
	ll u,v;
	cin>>u>>v;
	if(u==0&&v==0){			
		cout<<"0\n";
		return ;
	}
	if(v<u||v==0){		
		cout<<"-1\n";
		return ;
	}
	if(v==u){		
		cout<<"1\n"<<u;
		return ;
	}
	if(u==0&&v%2==0){		
		cout<<"2\n";
		cout<<v/2<<" "<<v/2<<"\n";
		return;
	}
	if((v-u)%2==0){			
		v-=u;
		v/=2;
		if((v&u)==0){
			cout<<"2\n";
			cout<<v<<" "<<(v^u);		// bhagvan maaf krna mko give up krne k liye faltu mein
			return ;
		}
		cout<<3<<"\n";
		cout<<u<<" "<<v<<" "<<v<<"\n";
		return;
	}
	// fuck ho gya mere saath, asli mein bc if else ka que hi nikla ye toh,shit
	cout<<"-1\n";
	

	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cout.precision(20);
	cout<<fixed;
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