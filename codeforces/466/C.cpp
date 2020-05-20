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
    ll s[n+3],ans=0,c=0;
    s[0]=0;
    for(int i=0;i<n;i++){
        ll a;
        cin>>a;
        s[i+1]=s[i]+a;
    }
    if(s[n]%3){
        cout<<"0\n";
        return ;
    }
    for(int i=1;i<n;i++){
        if(s[i]==2*s[n]/3)
            ans+=c;
        if(s[i]==s[n]/3)
            c++;
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