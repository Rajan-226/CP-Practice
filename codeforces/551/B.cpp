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
    string a,b,c;
    cin>>a>>b>>c;
    map<char,int> mp,bb,cc;
    for(auto i:a)   mp[i]++;
    for(auto i:b)   bb[i]++;
    for(auto i:c)   cc[i]++;
    map<char,int> temp=mp;
    int mx1=0,mx2=0;
    for(int i=0;i<a.size();i++){
        int mn=INT_MAX;
        for(auto i:bb)   if(i.S>0)  mn=min(mn,mp[i.F]/i.S);
        if(mn+i>mx1+mx2){
            mx1=mn;
            mx2=i;
        }
        bool ok=0;
        for(auto i:cc){
            if(mp[i.F]<i.S){
                ok=1;
                break;
            }
            mp[i.F]-=i.S;
        }
        if(ok)  break;
    }


    string ans;
    for(int i=0;i<mx1;i++)
        ans+=b;
    for(int i=0;i<mx2;i++)
        ans+=c;
    for(char ch='a';ch<='z';ch++){
        temp[ch]-=mx1*bb[ch];
        temp[ch]-=mx2*cc[ch];
        if(temp[ch]>0)
            ans+=string(temp[ch],ch);
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