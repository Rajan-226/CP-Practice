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
    int n,m,q;
    cin>>n>>m>>q;
    int bear[n+1][m+1];
    fi(1,n+1)   fj(1,m+1)   cin>>bear[i][j];

    int row[n+1];

    for(int i=1;i<=n;i++){
        int ans=0;
        int temp=0;
        for(int j=1;j<=m;j++){
            if(bear[i][j]==0)
                temp=0;
            temp+=bear[i][j];
            ans=max(ans,temp);
        }
        row[i]=ans;
    }
    
    while(q--){
        int x,y;
        cin>>x>>y;
        bear[x][y]^=1;
        int ans=0;
        int temp=0;
        for(int j=1;j<=m;j++){
            if(bear[x][j]==0)
                temp=0;
            temp+=bear[x][j];
            ans=max(ans,temp);
        }
        row[x]=ans;
        ans=0;
        fi(1,n+1)   ans=max(ans,row[i]);
        cout<<ans<<"\n";
    }

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