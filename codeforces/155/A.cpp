#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n"
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
    int n,ans=0;
    cin>>n;
    int best,worst;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        if(i){
            if(k>best){
                best=k; ans++;
            }
            if(k<worst){    
                worst=k;    ans++;
            }
        }
        else
            best=worst=k;
    }
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