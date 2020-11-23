#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,sse,sse2")
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

void fun(){         //copied editorial
    int n;
    cin>>n;
    int a[n];
    fi(0,n) cin>>a[i];
    int ans=0;
    for(int i=0;i<n;){
        int j=i;
        while(j+1<n&&a[j]!=a[j+1])  j++;
        j++;
        ans=max(ans,(j-i-1)/2);
        if ((j - i) % 2 == 1) { 
            for (int k = i; k < j; k++) {
                a[k] = a[i];
            }
        } else { 
            for (int k = i; k < (i + j) / 2; k++) {
                a[k] = a[i];
            }
            for (int k = (i + j) / 2; k < j; k++) {
                a[k] = a[j - 1];
            }
        }
        i = j;
    }
    cout<<ans<<"\n";
    fi(0,n) db(a[i]);
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