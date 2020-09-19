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
    int a[n][n];
    fi(0,n){
        fj(0,n){
            cin>>a[i][j];
        }
    }
    vector<int> ans;
    for(int car=0;car<n;car++){
        bool ok=1;
        fi(0,n){
            if(a[car][i]==1||a[car][i]==3){
                ok=0;
                break;
            }
        }
        fi(0,n){
            if(a[i][car]==2||a[i][car]==3){
                ok=0;
                break;
            }
        }
        if(ok){
            ans.push_back(car+1);
        }
    }
    cout<<ans.size()<<"\n";
    for(auto i:ans) db(i);
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