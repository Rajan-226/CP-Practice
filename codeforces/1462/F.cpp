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
int help(vector<pair<int,int>> &v,int key){
    int l=0,r=v.size()-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(v[mid].F<=key){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return l;
}
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
#define ordered_mutiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>

void fun(){
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    fi(0,n){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    ordered_mutiset o;
    int ans=1;
    int l=0;
    fi(0,n){
        int l=i-o.order_of_key(v[i].F);
        int r=help(v,v[i].S);
        // db(v[i].F);db(v[i].S);nl;
        // cout<<l<<" "<<r<<"\n\n";
        o.insert(v[i].S);
        ans=max(ans,r-i+l);
    }
    ans=n-ans;
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
    cin>>t;
    while(t--){
        fun();
    }
}