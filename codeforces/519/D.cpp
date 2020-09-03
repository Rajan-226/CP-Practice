#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007
#define pb push_back
#define nl cout<<"\n"
#define db(x) cout<<x<<" "
#define fi(a,b) for(int i=a;i<b;i++)
#define fj(a,b) for(int j=a;j<b;j++)
#define fk(a,b) for(int k=a;k<b;k++)
#define F first
#define S second
#define UM unordered_map<int,int>
#define MP map<int,int>
#define mxsize (int)1e6
void fun(){
    int a[26];
    fi(0,26)    cin>>a[i];
    string s;
    cin>>s;
    int n=s.size();
    ll prf[n];
    map<pair<ll,char>,int> mp;
    ll ans=0;
    fi(0,n){
        if(i==0)    prf[i]=a[s[i]-'a'];
        else        prf[i]=prf[i-1]+a[s[i]-'a'];
        mp[{prf[i],s[i]}]+=1;
        if(i<n-1)
            ans+=mp[{prf[i],s[i+1]}];
    }
    cout<<ans;
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