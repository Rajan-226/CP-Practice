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
bool notpal(string s){
    int i=0,j=s.size()-1;
    while(i<j){
        if(s[i]!=s[j])  return 1;
        i++;
        j--;
    }
    return 0;
}
bool fun(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    int n=s.size();
    for(int i=1;i<=n;i++){
        if(n%i==0&&n/i==k){
            // db(i);nl;
            bool ok=1;
            int j=0;
            while(j<n){
                // db(j);
                // db(s.substr(j,i));
                // nl;
                if(notpal(s.substr(j,i))){
                    ok=0;
                    break;
                }
                j+=i;
            }
            // nl;
            if(ok)  return 1;
        }
    }
    return 0;
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
        if(fun())   cout<<"YES";
        else        cout<<"NO";
    }
}