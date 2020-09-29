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
template <typename T> istream &operator>>(istream &is, vector<T> &vec) { for (auto &v : vec) is >> v; return is; }
#define mxsize (int)1e6
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
void fun(){
    ll n;
    cin>>n;
    double w;   cin>>w;
    double a[2*n];
    fi(0,2*n){
        cin>>a[i];
    }
    
    sort(a,a+2*n);
    double l=0,r=a[2*n-1];
    double ans=0;
    int k=0;
    while(k<(int)1e5){
        double mid=(l+r)/2.0;
        double pot=2*mid*(double)n+mid*(double)n;
        if((a[0]-mid)>=0 && (a[n]-2*mid)>=0 && (w-pot)>=0){
            l=mid;
            ans=pot;
        }
        else{
            r=mid;
        }
        k++;
    }
    cout<<fixed<<setprecision(10)<<ans;
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
    // cin>>t;
    while(t--){
        fun();
    }
}