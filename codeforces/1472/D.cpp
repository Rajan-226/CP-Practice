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
#define mxsize (int)3e5
//First of all, F to the ratings for now
// Just compare this submission with very first submission of mine (103250896)
void fun(){
    int n;
    cin>>n;
    vector<ll> ev,od;
    fi(0,n){
        ll k;
        cin>>k;
        if(k%2) od.push_back(k);
        else ev.push_back(k); 
    }
    sort(ev.begin(),ev.end());
    sort(od.begin(),od.end());
    ll alice=0,bob=0;
    int e=ev.size()-1,o=od.size()-1;
    int ok=1;
    while(e>=0&&o>=0){
        if(ok){
            if(ev[e]>=od[o]){
                alice+=ev[e--];
            }
            else{
                o--;
            }
            ok=0;
        }else{
            if(od[o]>=ev[e]){
                bob+=od[o--];       // F here
            }else{
                e--;
            }
            ok=1;
        }
    }
    while(e>=0){
        if(ok)  alice+=ev[e--];     //F here
        else e--;
        ok^=1;
    }
    while(o>=0){
        if(!ok){
            bob+=od[o--];       //And last F here
        }else{
            o--;
        }
        ok^=1;
    }
    if(alice==bob){
        cout<<"Tie\n";
    }else if(alice>bob){
        cout<<"Alice\n";
    }else{
        cout<<"Bob\n";
    }
    //Total 3F's 
}
// even first
// 2 4 1 2


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