#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void fun(){
    ll n,k;
    cin>>n>>k;
    int full = n - n % k;
    full += min(n % k, k / 2);
    cout << full << endl;
    
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