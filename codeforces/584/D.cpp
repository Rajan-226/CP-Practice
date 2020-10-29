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

#define vvl vector<vector<ll>>
#define vl vector<ll>
#define pl pair<ll,ll>
#define ppl pair<ll,pair<ll,ll>>
#define mxsize (int)1e6+5

bool checkprime(ll n){
    for(ll i=2;i*i<=n;i++)
        if(n%i==0)  return 0;
    return 1;
}

vector<bool> is_prime(mxsize+5,0);
vector<int> primes;
void sieve(int n){
    for(int i=2;i*i<=n;i++){
        if(is_prime[i]==0){
            for(int j=i*i;j<=n;j+=i)    is_prime[j]=1;
        }
    }
}
void fun(){
	//hadd paar ho gyi nkli contest k pehle hi ho gya tha ye
	// mko lga ispe bhi wa aaya h nkliiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii

	ll n;
	cin>>n;
	if(checkprime(n)){
		cout<<"1\n";
		cout<<n<<"\n";
		return;
	}

	int mx=0;
	for(int i=n-2;;i-=2){
		if(checkprime(i)){
			n-=i;
			mx=i;
			break;
		}
	}
	if(n==2){
		cout<<"2\n";
		cout<<mx<<" "<<2<<"\n";
		return ;
	}

	cout<<"3\n";
	cout<<mx<<" ";

	fi(0,primes.size()){
		if(is_prime[abs(n-primes[i])]==0){
			cout<<primes[i]<<" "<<abs(n-primes[i])<<"\n";
			return ;
		}
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
	sieve(mxsize+1);
	for(int i=2;i<=mxsize;i++){
        if(is_prime[i]==0){
            primes.push_back(i);
        }
    }
	int t=1;
	// cin>>t;
	while(t--){
		fun();
	}
}