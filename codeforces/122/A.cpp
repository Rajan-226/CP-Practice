#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n"
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
bool check(int n){
    while(n){
        if(n%10!=4&&n%10!=7)
            return 0;
        n/=10;
    }
    return 1;
}
void fun(){
    int n;  cin>>n;
    for(int i=4;i<=n;i++){
        if(check(i)&&n%i==0){
            cout<<"YES\n";
            return ;
        }
    }
    cout<<"NO\n";
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