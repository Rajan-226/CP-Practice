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
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=1,r=1,ok=1;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]&&ok){
            if(ok==1)
                l=i+1;
            ok=2;
        }
        else if(ok==2){
            r=i+1;
            ok=0;
        }
        if(ok==0&&a[i]>a[i+1]){
            cout<<"no\n";
            return ;
        }
    }
    if(ok==2)       r=n;
    reverse(a+l-1,a+r);
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            cout<<"no\n";
            return ;
        }
    }
    cout<<"yes\n"<<l<<" "<<r;
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