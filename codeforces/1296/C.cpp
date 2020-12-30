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

void fun(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<pair<int,int>,int> mp;
    int x=0,y=0;
    int ans=INT_MAX;
    int l=-1,r=-1;
    fi(0,n){
        mp[{x,y}]=i+1;
        if(s[i]=='L'){
            y++;
        }else if(s[i]=='R'){
            y--;
        }else if(s[i]=='U'){
            x++;
        }else{
            x--;
        }
        if(mp[{x,y}]){
            if((i-mp[{x,y}]+2)<ans){
                ans=i-mp[{x,y}]+2;
                l=mp[{x,y}];
                r=i+1;
            }
        }
        if(ans==2)  break;
    }
    //r-l+1
    if(l!=-1)   cout<<l<<" "<<r<<"\n";
    else cout<<"-1\n";
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