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

#define vvl vector<vector<ll>>
#define vl vector<ll>
#define pl pair<ll,ll>
#define ppl pair<ll,pair<ll,ll>>
#define mxsize (int)1e6+5

void fun(){
    int n;
    cin>>n;
    vector<int> a;
    map<int,int> mp;
    fi(0,n){
        fj(0,n){
            int k;
            cin>>k;
            a.push_back(k);
            mp[k]++;
        }
    }
    sort(a.begin(),a.end());
    n*=n;
    vector<int> ans;
    for(int i=n-1;i>=0;i--){
        if(mp[a[i]]){
            ans.push_back(a[i]);
            mp[a[i]]--;
            fj(0,ans.size()-1){
                mp[__gcd(ans[j],a[i])]-=2;
            }
        }
    }


    for(auto i:ans) db(i);

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
    // cin>>t;
    while(t--){
        fun();
    }
}