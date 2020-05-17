#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n";
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
    ll a,k;
    cin>>a>>k;
    ll mn=10,mx=-1;
    while(--k){
        mn=10;  mx=-1;
        ll temp=a;
        while(temp){
            mn=min(mn,temp%10);
            mx=max(mx,temp%10);
            temp/=10;
        }
        if(mn==0)
            break;
        a=a+mn*mx;
    }
    cout<<a<<"\n";
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
    while(t--){
        fun();
    }
}