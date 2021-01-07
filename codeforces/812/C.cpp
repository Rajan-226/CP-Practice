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
    ll n,s;
    cin>>n>>s;
    ll a[n];
    fi(0,n) cin>>a[i];
    int l=0,r=n;
    int ansi=0,anss=0;
    while(l<=r){
        ll mid=(l+r)/2;
        priority_queue<ll> q;
        ll sum=0;
        for(int i=0;i<n;i++){
            q.push(a[i]+(i+1)*mid);
            sum+=a[i]+(i+1)*mid;
            if(q.size()>mid){
                sum-=q.top();
                q.pop();
            }
        }
        if(sum<=s){
            ansi=mid;
            anss=sum;
            l=mid+1;
        }else{
            r=mid-1;
        }
        
    }
    cout<<ansi<<" "<<anss<<"\n";
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