#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
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
    int n,q;
    cin>>n>>q;
    ll a[n];
    fi(0,n) cin>>a[i];
    ll l=a[0],ans=0;
    bool ok=1;
    fi(1,n){
        if(ok){
            if(l>a[i]){
                ans+=l;
                ok=0;
            }
            l=a[i];
        }
        else{
            if(l<a[i]){
                ans-=l;
                ok=1;
            }
            l=a[i];
        }
    }
    if(ok)  ans+=l;
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