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
    int a[n];
    fi(0,n) cin>>a[i];
    int one=0,two=0;
    fi(0,n){
        if(a[i]==1) one++;
        else two++;
    }
    if(one%2){
        cout<<"NO\n";
    }else{
        if(two%2==0){
            cout<<"YES\n";
        }else{
            if(one){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }
}
// 1 1 1 1 2
// 2 1
// 2 2 2 1 1 1 1 

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