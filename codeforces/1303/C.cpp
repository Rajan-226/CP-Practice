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
    string s;
    cin>>s;
    int n=s.size();
    
    map<char,set<char>> mp;
    fi(0,n){
        if(i!=0&&s[i]!=s[i-1])    mp[s[i]].insert(s[i-1]);
        if(i!=n-1&&s[i]!=s[i+1])  mp[s[i]].insert(s[i+1]);
        if(mp[s[i]].size()==3){
            cout<<"NO\n";
            return ;
        }
    }
    string ans="";
    for(char c='a';c<='z';c++)  if(mp[c].empty())   ans+=c;
    map<char,bool> vis;
    for(char c='a';c<='z';c++){
        if(vis[c])  continue;
        char cc=c;
        while(mp[cc].size()==1){
            ans+=cc;
            vis[cc]=1;
            auto ch=*mp[cc].begin();
            mp[ch].erase(cc);
            if(mp[ch].empty()){
                ans+=ch;
                vis[ch]=1;
            }
            cc=ch;
        }
    }
    if(ans.size()!=26){
        cout<<"NO\n";
        return ;
    }
    cout<<"YES\n";
    // cout<<ans.size()<<"\n";
    cout<<ans<<"\n";
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