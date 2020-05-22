#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n"
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
    string a,b;   cin>>a>>b;
    for(int i=0;i<a.size();i++)
        cout<<((a[i]-'0')^(b[i]-'0'));
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("/ATOM/input.txt", "r", stdin);
        freopen("/ATOM/output.txt", "w", stdout);
    #endif
    // int t;
    // cin>>t;
    // while(t--){
        fun();
    // }
}