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
    int k;
    cin>>k;
    int n=fastexp(2,k);
    char a[n+1][n+1];
    a[0][0]='+';
    for(int temp=0;temp<=k-1;temp++){
        int p=1<<temp;
        fi(0,p){
            fj(p,p+p)
                a[i][j]=a[i][j-p];
        }
        fi(p,p+p){
            fj(0,p){
                a[i][j]=a[i-p][j];
            }
        }
        fi(p,p+p){
            fj(p,p+p){
                if(a[i-p][j]=='*')  a[i][j]='+';
                else a[i][j]='*';
            }
        }
    }
    fi(0,n){
        fj(0,n){
            cout<<a[i][j];
        }
        nl;
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