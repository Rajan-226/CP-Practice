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

    vector<pair<char, ll>> R;

    ll v;

    fi(0,2*n) {
        char x; cin >> x;
        if(x == '-') {
            cin >> v;
            R.pb({'-', v});
        }else {
            R.pb({'+', v});
        }
    }

    reverse(R.begin(), R.end());
    priority_queue<ll, vector<ll>, greater<ll>> min_heap;

    vector<ll> stack, ans;

    fi(0, 2*n) {
        if(stack.size() == 0 && R[i].F == '+') {
            cout << "NO\n";
            return;
        }
        if(R[i].F == '-') {
            min_heap.push(R[i].S);
            stack.pb(R[i].S);
        }else {
            ll last = min_heap.top();
            min_heap.pop();
            if(stack.back() != last) {
                cout << "NO\n";
                return;
            }else {
                ans.pb(last);
                stack.pop_back();
            }
        }
    }
    reverse(ans.begin(), ans.end());


    cout << "YES\n";
    
    
    
    fi(0, ans.size()) {
        cout << ans[i] << ' ';
    }
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