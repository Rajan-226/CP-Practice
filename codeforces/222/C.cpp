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
#define mxsize (int)1e7+1
vector<bool> is_prime(mxsize+5,0);
// vector<ll> numberOfPrimeUpto(mxsize+5,0);
// vector<int> primes;
void sieve(int n){
    for(ll i=2;i*i<=n;i++){
        if(is_prime[i]==0){
            for(int j=i*i;j<=n;j+=i)    is_prime[j]=1;
        }
    }
    
    // for(int i=2;i<=n;i++){
    //     numberOfPrimeUpto[i]=numberOfPrimeUpto[i-1];
    //     if(is_prime[i]==0){
    //         primes.push_back(i);
    //         numberOfPrimeUpto[i]+=1;
    //         // cout<<i<<" ";
    //     }
    // }
    // cout<<primes.size()<<"\n";          // There are 78,499 primes upto 1e6
}
void fun(){
    sieve(mxsize);
    int n,m;
    cin>>n>>m;
    vector<ll> factorsB(mxsize+1,0);
    int a[n],b[m];
    fi(0,n){
        cin>>a[i];
    }
    fi(0,m){
        int k;
        cin>>k;
        b[i]=k;
        if(is_prime[k]==0){
            factorsB[k]++;
            continue;
        }
        for(int i=2;i*i<=k;i++){
            while(k%i==0){
                k/=i;
                factorsB[i]++;
            }
        }
        if(k>1){
            factorsB[k]++;
        }
    }
    cout<<n<<" "<<m<<"\n";
    fi(0,n){
        int k=a[i];
        int num=1;
        if(is_prime[k]==0){
            if(factorsB[k]){
                cout<<"1 ";
                factorsB[k]--;
            }else{
                cout<<k<<" ";
            }
            continue;
        }
        for(int i=2;i*i<=k;i++){
            while(k%i==0){
                k/=i;
                if(factorsB[i]){
                    factorsB[i]--;
                }else{
                    num*=i;
                }
            }
        }
        if(k>1){
            if(factorsB[k]){
                factorsB[k]--;
            }else{
                num*=k;
            }
        }
        cout<<num<<" ";
    }nl;
    fi(0,m){
        int k=b[i];
        int num=1;
        if(is_prime[k]==0){
            if(factorsB[k]){
                cout<<k<<" ";
                factorsB[k]--;
            }else{
                cout<<"1 ";
            }
            continue;
        }
        for(int i=2;i*i<=k;i++){
            while(k%i==0){
                k/=i;
                if(factorsB[i]){
                    num*=i;
                    factorsB[i]--;
                }
            }
        }
        if(k>1){
            if(factorsB[k]){
                num*=k;
                factorsB[k]--;
            }
        }
        cout<<num<<" ";
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