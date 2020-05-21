#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout << "\n";
#define UM unordered_map<int, int>
#define ULL unordered_map<ll, int>
void fun()
{
    int n,prev,ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        if(i)
            ans+=abs(prev-k);
        else    ans=k-1;
        prev=k;
    }
    ans+=2*n;
    cout<<ans<<"\n";
}

int main()
{
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