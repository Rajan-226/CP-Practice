#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,sse,sse2")
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
bool check(string s){
    int n=s.size();
    fi(0,4){
        string temp=s.substr(0,i+1);
        fj(n+i-3,n){
            temp+=s[j];
        }
        // db(temp);
        if(temp=="2020")    return 1;
    }
    return 0;
}
void fun(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n<4){
        cout<<"NO\n";
        return ;
    }
    if(s.substr(0,4)=="2020"||s.substr(n-4)=="2020"||check(s)){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
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