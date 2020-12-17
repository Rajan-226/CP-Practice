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
vector<bool> is_prime(mxsize+5,0);
vector<ll> numberOfPrimeUpto(mxsize+5,0);
vector<int> primes;
void sieve(int n){
    for(ll i=2;i*i<=n;i++){
        if(is_prime[i]==0){
            for(int j=i*i;j<=n;j+=i)    is_prime[j]=1;
        }
    }
    
    for(int i=2;i<=n;i++){
        numberOfPrimeUpto[i]=numberOfPrimeUpto[i-1];
        if(is_prime[i]==0){
            primes.push_back(i);
            numberOfPrimeUpto[i]+=1;
            // cout<<i<<" ";
        }
    }
    // cout<<primes.size()<<"\n";          // There are 78,499 primes upto 1e6
}
void fun(){
    int n;
    cin>>n;
    sieve(n+1);
    if(n<=2)    cout<<"1\n";
    else    cout<<"2\n";
    for(int i=2;i<=n+1;i++){
        if(is_prime[i])    cout<<"2 ";
        else    cout<<"1 ";
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
    // cin>>t;
    while(t--){
        fun();
    }
}