#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n"
#define dbg(x) cout<<x<<" ";
#define fi(a,b) for(int i=a;i<b;i++)
#define fj(a,b) for(int j=a;j<b;j++)
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
bool check(int i){
    int a[10]={0};
    while(i){
        if(a[i%10])
            return 0;
        a[i%10]=1;
        i/=10;
    }
    return 1;
}
void fun(){
    int l,r;
    cin>>l>>r;
    fi(l,r+1){
        if(check(i)){
            cout<<i;
            return ;
        }
    }
    cout<<"-1";
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