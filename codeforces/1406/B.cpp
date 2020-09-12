#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007
#define pb push_back
#define nl cout<<"\n"
#define db(x) cout<<x<<" "
#define fi(a,b) for(int i=a;i<b;i++)
#define fj(a,b) for(int j=a;j<b;j++)
#define fk(a,b) for(int k=a;k<b;k++)
#define F first
#define S second
#define UM unordered_map<int,int>
#define MP map<int,int>
#define mxsize (int)1e6
ll fastexp(ll a,ll n){
    ll nod=(ll)1e18;
    ll ans=1;
    while(n){
        if(n&1)
            ans=(ans*a)%nod;
        a=(a*a)%nod;
        n>>=1;
    }
    return ans;
}
void fun(){
    int n;
    cin>>n;
    ll a[n];
    fi(0,n) cin>>a[i];
    sort(a,a+n);
    ll a1 = a[0] * a[1] * a[2] * a[3] * a[4];


    ll a2 = a[0] * a[1] * a[2] * a[3] * a[n-1];
    ll a3 = a[0] * a[1] * a[2] * a[n-2] * a[n-1];
    ll a4 = a[0] * a[1] * a[n-3] * a[n-2] * a[n-1];


    ll a5 = a[0] * a[n-4] * a[n-3] * a[n-2] * a[n-1];
    ll a6 = a[n-5] * a[n-4] * a[n-3] * a[n-2] * a[n-1];

    cout << max({a1, a2, a3, a4, a5, a6}) << '\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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