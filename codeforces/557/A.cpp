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
void p(ll a,ll b,ll c){
    db(a);db(b);db(c);
    exit(0);
}
void fun(){
    ll n;
    cin>>n;
    ll a[3],b[3];
    ll mn=0;
    fi(0,3){
        cin>>a[i]>>b[i];
        b[i]-=a[i];
        mn+=a[i];
    }
    ll x=a[0],y=a[1],z=a[2];
    if(mn<n){
        int temp=min(n-mn,b[0]);
        mn+=temp;
        x+=temp;
        if(mn<n){
            temp=min(n-mn,b[1]);
            y+=temp;
            mn+=temp;
            if(mn<n){
                temp=min(n-mn,b[2]);
                z+=temp;
            }
        }

    }
    cout<<x<<" "<<y<<" "<<z;
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