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
void fun(){
    int n;
    cin>>n;
    ll a[n];
    fi(0,n)
        cin>>a[i];
    sort(a,a+n);
    ll ans=(ll)1e18;
    ll c=0;
    fi(1,100000){
        ll mn=0;
        for(ll j=0;j<n;j++){
            mn+=abs(a[j]-pow(i,j));
            if(mn>ans){
                cout<<ans<<"\n";
                return ;
            }
        }
        ans=min(ans,mn);
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