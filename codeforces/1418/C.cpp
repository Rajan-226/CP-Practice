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
ll fastexp(ll a,ll n,ll nod){
    if(nod==0)	nod=LLONG_MAX;
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
    int a[n+5],dp[n+5][2];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        dp[i][0]=dp[i][1]=0;
    }
    dp[1][0]=a[1];
    dp[1][1]=a[1];
    for(int i=2;i<=n;i++){
        if(i==2){
            dp[i][0]=a[1]+a[2];
            dp[i][1]=a[1];
        }
        else if(i==3){
            dp[i][0]=a[1]+a[3];
            dp[i][1]=min(a[1],dp[i-1][0]);
        }
        else{
            dp[i][0]=a[i]+min(dp[i-1][1],dp[i-2][1]+a[i-1]);
            dp[i][1]=min(dp[i-1][0],dp[i-2][0]);
        }
    }
    // fi(1,n+1){
    //     db(dp[i][0]);db(dp[i][1]);nl;
    // }
    cout<<min(dp[n][0],dp[n][1])<<"\n";

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