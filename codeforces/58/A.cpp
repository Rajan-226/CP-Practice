#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n"
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
string s;
int ind(int i,char a){
    while(i<s.size()){
        if(s[i]==a)
            break;
        i++;
    }
    if(i==s.size()){
        cout<<"NO\n";
        exit(0);
    }
    return i+1;
}
void fun(){   
    cin>>s;
    ind(ind(ind(ind(ind(0,'h'),'e'),'l'),'l'),'o');
    cout<<"YES\n";
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