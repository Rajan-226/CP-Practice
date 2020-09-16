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
void fun(){
    ll p,f,cnts,cntw,ws,ww;
    cin>>p>>f>>cnts>>cntw>>ws>>ww;
    ll ans=0;
    if(ws>ww){
        swap(cnts,cntw);
        swap(ws,ww);
    }
    for(ll i=0;i<=min(p/ws,cnts);i++){
        ll cw=min(cntw,(p-i*ws)/ww);
        ll cs=min(cnts-i,f/ws);
        cw+=min(cntw-cw,(f-cs*ws)/ww);
        cs+=i+cw;
        ans=max(ans,cs);
    }
    cout<<ans<<"\n";

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
    cin>>t;
    while(t--){
        fun();
    }
}