#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,sse,sse2")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define pi 3.141592653589
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
#define mxsize (int)3e5+1

void fun(){
    int n[3];
    fi(0,3)     cin>>n[i];
    ll sum[3]={0,0,0};
    vector<ll> mn(3,LLONG_MAX);
    ll tot=0;
    fi(0,3){
        fj(0,n[i]){
            ll k;
            cin>>k;
            sum[i]+=k;
            tot+=k;
            mn[i]=min(mn[i],k);
        }
    }
    sort(sum,sum+3);    sort(mn.begin(),mn.end());
    ll ans=tot-2*mn[0]-2*mn[1];
    ans=max(ans,sum[1]+sum[2]-sum[0]);
    
    cout<<ans;
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