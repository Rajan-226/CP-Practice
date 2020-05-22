#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n"
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
    string s;   cin>>s;
    bool ok=0;
    for(int i=0;i<s.size();i++){
        switch(s[i]){
             case 'H':ok=1;
             break;
             case 'Q':ok=1;
             break;
             case '9':ok=1;
             break;
        }
        if(ok) break;
    }
    if(ok)  cout<<"YES";
    else    cout<<"NO";
    
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