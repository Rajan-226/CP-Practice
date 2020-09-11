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
ll ans=0;
int sum(ll n){
    int c=0;
    while(n){
        c+=n%10;
        n/=10;
    }
    return c;
}
int s;
void cal(ll n){
    if(sum(n)<=s){
        return ;
    }
    if(n%10==0){
        cal(n/10);
        ans*=10ll;
    }
    else{
        cal(n+10-n%10);
        ans+=10-n%10;
    }
}

void fun(){
    ll n;
    cin>>n>>s;
    ans=0;
    cal(n);
    cout<<ans<<"\n";

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