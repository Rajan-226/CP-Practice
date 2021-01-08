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
#define mxsize (int)3e5

void fun(){     //bad imple
    int n;
    cin>>n;
    int a[n];
    fi(0,n) cin>>a[i];
    int pr[n];
    pr[0]=1;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            pr[i]=pr[i-1]+1;
        }else{
            pr[i]=1;
        }
    }
    int ans=2;
    int mn=a[0];
    int mx=a[0];
    int r=0;
    while(r<n&&abs(a[r]-mn)<=1&&abs(a[r]-mx)<=1){
        mn=min(mn,a[r]);
        mx=max(mx,a[r++]);
    }
    ans=r;
    while(r<n){
        int l=pr[r-1];
        int j=r;
        mn=min(a[r],a[r-1]);
        while(r<n&&(a[r]==a[j]||a[r]==a[j-1])){
            mn=min(a[r],a[r-1]);
            r++;
        }
        ans=max(ans,r-j+l);
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
    // cin>>t;
    while(t--){
        fun();
    }
}