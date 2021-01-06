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
    ll a[n],b[n];
    fi(0,n) cin>>a[i];
    fi(0,n) cin>>b[i];
    ll dif=0;
    sort(a,a+n);
    sort(b,b+n);
    int ok=1;
    int i=n-1,j=n-1;
    while(i>=0&&j>=0){
        if(ok){
            if(a[i]>b[j]){
                dif+=a[i--];
            }else{
                j--;
            }
        }else{
            if(b[j]>a[i]){
                dif-=b[j--];
            }else{
                i--;
            }
        }
        ok^=1;
    }
    while(i>=0){
        if(ok)  dif+=a[i];
        i--;    ok^=1;
    }
    while(j>=0){
        if(!ok) dif-=b[j];
        j--;    ok^=1;
    }
    cout<<dif<<"\n";
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