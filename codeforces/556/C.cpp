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
    int n,k;
    cin>>n>>k;
    ll ans=0;
    int len=0;
    while(k--){
        int sz;cin>>sz;
        bool ok=1;
        int last;
        cin>>last;
        len++;
        if(last==1){
            fi(1,sz){
                int temp;
                cin>>temp;
                if(ok){
                    if(temp!=last+1){
                        len++;
                        ans++;
                        ok=0;
                    }
                }
                else{
                    len++;
                    ans++;
                }
                last=temp;
            }
        }
        else{
            fi(1,sz){
                cin>>last;
                ans++;
                len++;
            }
        }
    }
    ans+=len-1;

    cout<<ans;
}
//7
// 1 
// 3
//  7
// 6
// 5
// 7
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