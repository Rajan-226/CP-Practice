#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
    int n;
    cin>>n;
    int big=1<<n,small=0;
    for(int i=1;i<n/2;i++)
        big+=1<<i;
    for(int i=n/2;i<n;i++)
        small+=1<<i;
    cout<<big-small<<"\n";

    
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
        fun();
    }
}