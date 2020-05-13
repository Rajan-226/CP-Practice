#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n";
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
    ll n,k;
    cin>>n>>k;
    string s(n,'a');
    for(int i=n-2;i>=0;i--){
        if(k<=n-i-1){
            s[i]='b';
            s[n-k]='b';
            cout<<s<<"\n";
            return ;
        }
        k-=n-i-1;
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
    int t;
    cin>>t;
    while(t--){
        fun();
    }
}