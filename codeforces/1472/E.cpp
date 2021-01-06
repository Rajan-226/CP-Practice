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
    vector<int> ans(n,-2);
    vector<pair<int,pair<int,int>>> a;
    fi(0,n){
        int u,v;
        cin>>u>>v;
        if(u>v) swap(u,v);
        a.push_back({u,{v,i}});
    }
    sort(a.begin(),a.end());
    int l=0, mn=INT_MAX, cur;
    for(int r=0;r<n;r++){
        while(l<r&&a[l].F<a[r].F){
            if(a[l].S.F<mn){
                mn=a[l].S.F;
                cur=a[l].S.S;
            }
            l++;
        }
        if(mn<a[r].S.F){
            ans[a[r].S.S]=cur;
        }
    }
    
    fi(0,n) cout<<ans[i]+1<<" ";nl;
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