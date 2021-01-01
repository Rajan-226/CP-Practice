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

void fun(){
    int n;
    cin>>n;
    ll w[n+1];
    vector<int> ind(n+1,0);
    fi(1,n+1)   cin>>w[i];
    fi(0,n-1){
        int u,v;cin>>u>>v;
        ind[u]++;
        ind[v]++;
    }
    ll sum=0;
    vector<ll> v;
    fi(1,n+1){
        fj(0,ind[i]-1)        v.push_back(w[i]);
        sum+=w[i];
    }
    v.push_back(-1);
    sort(v.begin(),v.end(),greater<ll>());
    // cout<<v.size()<<"\n";
    fi(0,n-1){
        cout<<sum<<" ";
        sum+=v[i];
    }
    nl;
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