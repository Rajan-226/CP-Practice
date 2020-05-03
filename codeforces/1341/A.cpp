#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
bool fun(){
    int n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
    if(n*(a+b)<c-d||n*(a-b)>c+d)
        return 0;
    else
        return 1;
    
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
        if(fun())
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}