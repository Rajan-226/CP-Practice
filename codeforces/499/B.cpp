#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n";
#define UM unordered_map<string,string>
#define ULL unordered_map<ll,int>
void fun(){
    int n,m;
    cin>>n>>m;
    UM mp;
    for(int i=0;i<m;i++){
        string s1,s2;
        cin>>s1>>s2;
        if(s1.size()<=s2.size())
            mp[s1]=s1;
        else
            mp[s1]=s2;
    }
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        cout<<mp[s]<<" ";
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
    // int t;
    // cin>>t;
    // while(t--){
        fun();
    // }
}