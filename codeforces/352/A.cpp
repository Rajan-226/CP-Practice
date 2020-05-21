#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n"
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
    int n,fv=0,zr=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        k==5?fv++:zr++;

    }
    if(zr==0){
        cout<<"-1";
        return ;
    }
    ll sum=5*fv;
    while(sum>0){
        if(sum%9==0){
            break;
        }
        sum-=5;
    }
    if(sum<=0){
        cout<<"0\n";
        return ;
    }
    fv=sum/5;
    while(fv--){
        cout<<"5";
    }
    while(zr--){
        cout<<"0";
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