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
ll fastexp(ll a,ll n){
    ll nod=(ll)1e18;
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
    int n;
    cin>>n;
    
    int a[n];
    map<int,int> mp;
    fi(0,n){
        cin>>a[i];
        mp[a[i]]++;
    }
    int x=-1;
    int y=-1;
    for(int i=0;i<=101;i++){
        if(mp[i]==0){
            if(x==-1)   x=i;
            if(y==-1)   y=i;
            break;
        }
        else if(mp[i]==1&&x==-1){
            x=i;
        }
    }
    cout<<x+y<<"\n";
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
    cin>>t;
    while(t--){
        fun();
    }
}