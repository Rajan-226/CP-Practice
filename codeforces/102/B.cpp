#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n";
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
// void fun(){
//     int n,k;
//     cin>>n>>k;
//     int a[n];
//     for(int i=0;i<n;i++)
//     cin>>a[i];
    
// }
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("/ATOM/input.txt", "r", stdin);
        freopen("/ATOM/output.txt", "w", stdout);
    #endif
    string s;
    cin>>s;
    int c=0;
    while(s.size()!=1){
        ll sum=0;
        for(int i=0;i<s.size();i++){
            sum+=s[i]-'0';
        }
        s=to_string(sum);
        c++;
    }
    cout<<c;
}