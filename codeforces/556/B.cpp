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
    int n;
    cin>>n;
    bool ok=1;
    int a[n];
    fi(0,n){
        cin>>a[i];
        if(a[i]!=i)    ok=0;
    }
    if(ok){
        cout<<"Yes\n";
        return ;
    }
    fk(0,1005){
        fi(0,n){
            if(i%2) a[i]=a[i]+1;
            else    a[i]=a[i]-1;
            if(a[i]>=n) a[i]=0;
            if(a[i]<0)  a[i]=n-1;
        }
        bool ok=1;
        fi(0,n){
            if(a[i]!=i){
                ok=0;
                break;
            }
        }
        if(ok){
            cout<<"Yes\n";
            return ;
        }
    }
    cout<<"No\n";
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