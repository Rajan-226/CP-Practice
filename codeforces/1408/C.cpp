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
#define mxsize (int)1e6
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
double time(int speed,double dis,double now){
	double d=abs(now-dis);
	return 1.0*d/speed;
}
bool check(vector<int>& a,double d,int last){
	int n=a.size();
	double disa=0,disb=last,ta=0,tb=0;
	int cura=1,curb=1;
	for(int i=0;i<n;i++){
		double t=ta+time(cura,disa,a[i]);
		if(d<t)	break;
		disa=a[i];
		ta=t;
		cura++;
	}
	disa+=(d-ta)*cura;
	for(int i=n-1;i>=0;i--){
		double t=tb+time(curb,disb,a[i]);
		if(d<t)	break;
		disb=a[i];
		tb=t;
		curb++;
	}
	disb-=(d-tb)*curb;
	if((disa-disb)>0)	return 0;
	else return 1;
}
void fun(){
	int n;
	double l;
	cin>>n>>l;
	vector<int> a;
	fi(0,n){
		int k;
		cin>>k;
		a.push_back(k);
	}
	int c=0;
	double left=0,right=l;
	double ans;
	while(c<100){
		double mid=left+(right-left)/2.0;
		if(check(a,mid,l)){
			ans=left;
			left=mid;
		}
		else{
			right=mid;
		}
		c++;
	}
	cout<<ans<<"\n";
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
	cin>>t;
	while(t--){
		fun();
	}
}