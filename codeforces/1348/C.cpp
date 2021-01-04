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
    int n,k;
    cin>>n>>k;
    string s;   cin>>s;
    vector<int> f(26,0);
    fi(0,n) f[s[i]-'a']++;
    
    sort(s.begin(),s.end());
    if(s[0]!=s[k-1]){
        cout<<s[k-1]<<"\n";
    }
    else if(s[k]==s[n-1]){
        f[s[0]-'a']-=k;
        cout<<s[0];
        int ok=(f[s[k]-'a']%k>0);
        cout<<string((f[s[k]-'a']/k)+ok,s[k])<<"\n";
    }else{
        cout<<s.substr(k-1)<<"\n";
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
    cin>>t;
    while(t--){
        fun();
    }
}