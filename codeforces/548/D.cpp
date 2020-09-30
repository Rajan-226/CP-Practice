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
#define mxsize (int)2e5+5
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
int n;
vector<int> nleft(mxsize,0),nright(mxsize,0);
vector<int> a(mxsize);
void fl(){
    stack<int> s;
    fi(1,n+1){
        while(!s.empty()&&a[s.top()]>=a[i]){
            s.pop();
        }
        if(s.empty())
            nleft[i]=0;
        else
            nleft[i]=s.top();
        s.push(i);
        // db(nleft[i]);
    }
}
void fr(){
    stack<int> s;
    for(int i=n;i>=1;i--){
        while(!s.empty()&&a[s.top()]>=a[i]){
            s.pop();
        }
        if(s.empty())
            nright[i]=n+1;
        else
            nright[i]=s.top();
        s.push(i);
    }

    // fi(1,n+1)       db(nright[i]);
}
void fun(){
    cin>>n;
    fi(1,n+1) cin>>a[i];
    fl();
    fr();
    map<int,int> mp;
    vector<int> ans(n+1,0);
    fi(1,n+1){
        int range=nright[i]-nleft[i]-1;
        mp[a[i]]=max(mp[a[i]],range);
        ans[mp[a[i]]]=max(ans[mp[a[i]]],a[i]);
    }
    int mx=0;
    for(int i=n;i>=1;i--){
        mx=max(mx,ans[i]);
        ans[i]=mx;
    }
    for(int i=1;i<=n;i++){
        db(ans[i]);
    }
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