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
    int ans=0;
    int n;
    cin>>n;
    char a[n][n];
    fi(0,n) fj(0,n) cin>>a[i][j];
    fi(0,n){
        int temp=0;
        for(int j=0;j<n;j++){
            int o=0;
            for(int k=0;k<n;k++){
                if(a[i][k]=='0'){
                    if(a[j][k]=='0')    o++;
                }
                else{
                    if(a[j][k]=='1')    o++;
                }
            }
            if(o==n)   temp++;
        }
        ans=max(ans,temp);
    }
    cout<<ans;
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