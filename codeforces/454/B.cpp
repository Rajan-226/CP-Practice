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
    int a[n],temp[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        temp[i]=a[i];
    }
    sort(temp,temp+n);
    int j=0;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]||j){
            if(a[i+1]!=temp[j]){
                cout<<"-1\n";
                return ;
            }
            else
                j++;
        }
    }
    cout<<j<<"\n";
    
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