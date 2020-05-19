#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n";
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
bool *a;
void primeupto(ll n){
    for(ll i=2;i*i<=n;i++)
        if(a[i]==true)
            for(ll j=i*i;j<=n;j+=i)
                a[j]=false;
}
void fun(){
    ll n;
    cin>>n;
    ll rt=sqrt(n);
    if(n!=1&&rt*rt==n&&a[rt])    cout<<"YES\n";
    else    cout<<"NO\n";

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("/ATOM/input.txt", "r", stdin);
        freopen("/ATOM/output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    ll n=pow(10,6);
    a=(bool*)malloc((n+1)*sizeof(bool));
    memset(a,true,n+1);
    primeupto(n);
    while(t--){
        fun();
    }
}