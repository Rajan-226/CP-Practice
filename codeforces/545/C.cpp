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
    int ans=0;
    vector<pair<int,int>> v;
    set<int> s;
    fi(0,n){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
        s.insert(x);
    }

    fi(0,n){
        int x=v[i].F,h=v[i].S;
        s.erase(x);
        auto ind=s.lower_bound(x-h);
        // for(auto i:s)   db(i);
        auto ind2=s.lower_bound(x);

        // db(*ind);
        // db(*ind2);      

        if(*ind>x||*ind<x-h){
            s.insert(x-h);
            // db("left");db(x-h);
            ans++;
        }
        else if(ind2==s.end()||*ind2<x||*ind2>x+h){
            s.insert(x+h);
            // db("right");db(x+h);
            ans++;
        }
        s.insert(x);
        // nl;
        //  for(auto i:s)   db(i);nl;
        // nl;
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