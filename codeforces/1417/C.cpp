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
void fun(){             // Taken idea from editorial
                        // Nice Question        
    int n;
    cin>>n;
    int a[n+1];
    fi(1,n+1) cin>>a[i];

    vector<int> v(n+1,-1),last(n+1,0);
    for(int i=1;i<=n;i++){
        if(last[a[i]]==0){
            v[a[i]]=i;
        }
        else{
            v[a[i]]=max(v[a[i]],i-last[a[i]]);
        }
        last[a[i]]=i;
    }
    for(int i=1;i<=n;i++){
        if(v[i]!=-1){
            v[i]=max(v[i],n+1-last[i]);     //stupid typos,sbki nzro se duur baithe ye😂😂
        }
        // db(v[i]);
    }
    // nl;
    vector<int> ans(n+1,-1);
    for(int i=1;i<=n;i++){
        if(v[i]!=-1){
            int j=v[i];
            while(j<=n&&ans[j]==-1){
                ans[j]=i;
                j++;
            }
        }
    }
    fi(1,n+1)
        db(ans[i]);
    nl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout.precision(20);
    cout<<fixed;
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