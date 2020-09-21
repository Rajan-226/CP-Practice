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
#define mxsize 5000005
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
bool is_prime[mxsize+5]={0};
void sieve(int n){
    for(int i=2;i*i<=n;i++){
        if(is_prime[i]==0){
            for(int j=i*i;j<=n;j+=i)    is_prime[j]=1;
        }
    }
}
vector<ll> factors(mxsize,0);
vector<ll> pref(mxsize,0);
void fun(){
    int a,b;
    cin>>a>>b;
    // db(pref[a]);db(pref[b]);
    cout<<pref[a]-pref[b]<<"\n";
}
// 3 4 5

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("/ATOM/input.txt", "r", stdin);
        freopen("/ATOM/output.txt", "w", stdout);
    #endif

    sieve(mxsize);
    pref[1]=1;
    for(int i=2;i<=5000000;i++){
        if(is_prime[i]==0){
            factors[i]=1;
            pref[i]=pref[i-1]+factors[i];
            continue;
        }
        int temp=i;
        for(ll j=2;j*j<=temp;j++){
            if(temp%j==0){
                factors[i]+=1;
                temp/=j;
                factors[i]+=factors[temp];
                break;
            }
        }
        pref[i]=pref[i-1]+factors[i];
    }
    // fi(1,100){    db(i);db(factors[i]);nl;}

    int t=1;
    cin>>t;
    while(t--){
        fun();
    }
}