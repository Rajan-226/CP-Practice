#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,sse,sse2")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define pi 3.141592653589
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
#define mxsize (int)1e5
set<pair<int,int>> s;
void dfs(int n,int x,int y,bool vertical){
    if(n==0){
        s.insert({x,y});
        return ;
    }
    if(vertical){
        dfs(n-1,x+1,y,0);
        dfs(n-1,x-1,y,0);
    }else{
        dfs(n-1,x,y+1,1);
        dfs(n-1,x,y-1,1);
    }
}
ll ref(ll a) {
    if(a & 1) return -1;
    else return 1;
}
void fun(){
    ll n; cin >> n;
    n = -n-4;
    ll x = 1 +  (3 * n * (n + 4) + 2 - ref(n) * (n * (n + 4) + 2)) / 8;
    cout << x << '\n';
    // n=
    // n--;
    // dfs(n,0,1,1);
    // dfs(n,1,0,0);
    // dfs(n,-1,0,0);
    // dfs(n,0,-1,1);

    // cout<<s.size()<<"\n";

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