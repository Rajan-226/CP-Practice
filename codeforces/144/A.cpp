#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n";
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
    int n;
    cin>>n;
    int min=102,max=-1,pmin,pmax;
    for(int i=1;i<=n;i++){
        int k;
        cin>>k;
        if(k<=min){
            min=k;
            pmin=i;
        }
        if(k>max){
            max=k;
            pmax=i;
        }
    }
    int ans=n-pmin;
    ans+=pmax-1;
    if(pmax>pmin)
        cout<<ans-1<<"\n";
    else
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
    // int t;
    // cin>>t;
    // while(t--){
        fun();
    // }
}