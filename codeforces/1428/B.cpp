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
#define mxsize (int)1e6+5
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
void fun(){
    ll n; 
    cin >> n;
    string str;
    cin >> str;

    int right = 1, left = 1;
    fi(0, n){ if(str[(i+1)%n] == '<') right = 0; }
    fi(0, n){ if(str[(i+1)%n] == '>') left = 0; }


    ll ans = 0;
    if(right || left) cout << n << '\n';
    else {
        fi(0, n) {
            if(str[i] == '-') {
                ans++;
                if(str[(i+1)%n] != '-') ans++;
            }
        }
        cout << ans << '\n';
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