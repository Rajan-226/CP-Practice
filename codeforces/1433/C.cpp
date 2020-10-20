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
	ll n; cin >> n;
    ll arr[n];

    ll Max = -1;
    fi(0, n) {
        cin >> arr[i];
        Max = max(Max, arr[i]);
    }


    fi(0, n) {
        
        if(i == 0 && arr[i] == Max && arr[i+1] < Max) {
            cout << (i+1) << '\n';
            return;
        }

        if(i == n-1 && arr[i] == Max && arr[i-1] < Max) {
            cout << (n) << '\n';
            return;
        }

        if(i != 0 && i != n-1 && arr[i] == Max  && (arr[i] > arr[i-1] || arr[i] > arr[i+1])) {
            cout << (i+1) << '\n';
            return;
        }
    
    }
    cout << "-1\n";
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