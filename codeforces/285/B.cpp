#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n"
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
    int n,s,t;
    cin>>n>>s>>t;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int ans=0,i=s;
    while(1){
        if(s==t){
            cout<<ans;
            break;
        }
        ans++;
        s=a[s];
        if(s==i){
            cout<<"-1\n";
            break;
        }
    }
}
/*
1 2 3 4
3
4
1
*/
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