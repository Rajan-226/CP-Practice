#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n";
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
    string s;   cin>>s;
    int k,max=-1,a[26];
    cin>>k;
    for(int i=0;i<26;i++){
        cin>>a[i];
        if(a[i]>max)   max=a[i];
    }
    ll ans=0;
    for(int i=1;i<=s.size();i++)
        ans+=i*a[s[i-1]-'a'];
    for(int i=s.size()+1;i<=k+s.size();i++)
        ans+=i*max;
    cout<<ans;
    
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