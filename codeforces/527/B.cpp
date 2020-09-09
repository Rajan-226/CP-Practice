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
ll fastexp(ll a,ll n){
    ll nod=(ll)1e18;
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
    string s,t;
    cin>>n>>s>>t;
    map<pair<char,char>,int> mp;
    map<char,int> mp2;
    int c=0;
    int st=0,end=0;
    int f1=0,f2=0;
    for(int i=0;i<n;i++){
        if(s[i]!=t[i]){
            if(mp[{s[i],t[i]}]==0)
                mp[{s[i],t[i]}]=i+1;
            if(mp2[s[i]]==0)
                mp2[s[i]]=i+1;
            c++;
        }
    }   
    for(int i=0;i<n;i++){
        if(st==0&&s[i]!=t[i]&&mp[{t[i],s[i]}]){
            st=mp[{t[i],s[i]}];
            end=i+1;
            break;
        }
        
        if(f1==0&&s[i]!=t[i]&&mp2[t[i]]){
            f1=mp2[t[i]];
            f2=i+1;
        }
    }
    if(st){
        cout<<c-2<<"\n";
        cout<<st<<" "<<end<<"\n";
    }
    else if(f1){
        cout<<c-1<<"\n";
        db(f1);db(f2);nl;
    }
    else{
        db(c);nl;
        db("-1");db("-1");nl;
    }
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