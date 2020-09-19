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
template <typename T> istream &operator>>(istream &is, vector<T> &vec) { for (auto &v : vec) is >> v; return is; }
#define mxsize (int)1e6
ll fastexp(ll a,ll n,ll nod){
    if(nod==0)	nod=LLONG_MAX;
    ll ans=1;
    while(n){
        if(n&1)
            ans=(ans*a)%nod;
        a=(a*a)%nod;
        n>>=1;
    }
    return ans;
}
vector<ll> pp;

void pre() {

    ll st = 4;

   
    int i = 0;
 pp.pb(1);
    pp.pb(6);

    while(i<30) {
        i++;

        ll tt = st;

        ll res = 0;
        ll p = 1;
        for(ll x = tt; x > 0; x /= 2) {
            res += (p*p * x);
            p *= 2;
        }

        pp.pb(res);

        st *= 2;
    }
}
void fun(){
    ll x;
    cin>>x;
    ll ans = 0;

    ll i = 0;
    while(x >= pp[i]) {
        x-=pp[i];
        ans++;
        i++;
    }

    cout << ans << '\n';
}
//1 3 7
//1 2 4
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("/ATOM/input.txt", "r", stdin);
        freopen("/ATOM/output.txt", "w", stdout);
    #endif
    int t=1;
    pre();
    cin>>t;
    while(t--){
        fun();
    }
}