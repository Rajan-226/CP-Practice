#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007
#define pb push_back
#define nl cout<<"\n"
#define db(x) cout<<x<<" "
#define fi(a,b) for(int i=a;i<b;i++)
#define fj(a,b) for(int j=a;j<b;j++)
#define fk(a,b) for(int k=a;k<b;k++)
#define F first
#define S second
#define UM unordered_map<int,int>
#define MP map<int,int>
#define mxsize (int)1e6
void fun(){
    int n,k;
    cin>>n>>k;
    ll a[n];
    map<int,int> mp;
    fi(0,n){
        cin>>a[i];
        mp[a[i]]++;
    }
    ll count=0,ans=-1;
    for(auto i:mp){
        count+=i.S;
        if(count==k){
            ans=i.F;
            break;
        }
    }
    sort(a,a+n);
    if(k==0&&a[0]!=1){
        cout<<"1\n";
        return ;
    }
    // if(k==n){
    //     cout<<a[n-1];
    //     return;
    // }
    // if(n==1){
    //     cout<<a[0];
    //     return;
    // }
    
    // ll ans=-1;
    // for(int i=1;i<n;i++){
    //     if(i==k&&a[i]!=a[i-1]){
    //         ans=a[i-1];
    //     }
    // }
    cout<<ans<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("/ATOM/input.txt", "r", stdin);
        freopen("/ATOM/output.txt", "w", stdout);
    #endif
    int t=1;
    // cin>>t;
    while(t--){
        fun();
    }
}