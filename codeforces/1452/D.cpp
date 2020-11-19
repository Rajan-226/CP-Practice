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

#define vvl vector<vector<ll>>
#define vl vector<ll>
#define pl pair<ll,ll>
#define ppl pair<ll,pair<ll,ll>>
#define mxsize (int)1e6+5
ll f[mxsize];
void fun(){
    ll n;
    cin>>n;
    ll a[3]={0,499122177,748683265};
    if(n<=2){
        cout<<a[n]<<"\n";
        return;
    }
    ll den=fastexp(2ll,n,mod);
    den=fastexp(den,mod-2,mod);
    ll ans=(den*f[n])%mod;
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
    f[1]=1;
    f[2]=1;
    fi(3,mxsize){
        f[i]=(f[i-1]+f[i-2])%mod;
    }
    int t=1;
    // cin>>t;
    while(t--){
        fun();
    }
}