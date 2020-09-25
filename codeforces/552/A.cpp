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
int a[105][105];
int xx,xxx,yy,yyy;
void fill(){
    for(int i=0;i<=101;i++){
        fj(0,101){
            if(j>=yy&&j<=yyy&&i<=xx&&i>=xxx){
                a[i][j]+=1;
            }
        }
    }
}
void fun(){
    int n;
    cin>>n;
    ll ans=0;
    while(n--){
        cin>>xx>>yy>>xxx>>yyy;
        xx=101-xx;
        xxx=101-xxx;
        fill();
    }
    fi(0,101){
        fj(0,101){
            ans+=a[i][j];
        }
    }
    cout<<ans<<"\n";

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