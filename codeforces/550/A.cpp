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
    string s;
    cin>>s;
    bool ok1=0,ok2=0;
    for(int i=0;i<(int)s.size()-1;){

        if(ok1==0&&s[i]=='A'&&s[i+1]=='B'){
            ok1=1;
            i+=2;
            continue;
        }

        if(ok1==1&&s[i]=='B'&&s[i+1]=='A'){
            ok2=1;
            i+=2;
            continue;
        }
        
        i++;

    }
    if(ok1&&ok2){
        cout<<"YES";
        return;
    }
    ok1=0;ok2=0;
    for(int i=0;i<(int)s.size()-1;){

        if(ok1==0&&s[i]=='B'&&s[i+1]=='A'){
            ok1=1;
            i+=2;
            continue;
        }
        if(ok1==1&&s[i]=='A'&&s[i+1]=='B'){
            ok2=1;
            i+=2;
            continue;
        }
        
        i++;

    }
    if(ok1&&ok2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
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