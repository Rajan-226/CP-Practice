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
    int n;
    cin>>n;
    int a[n];
    
    fi(0,n) cin>>a[i];
    map<int,int> mp;
    int ans=0,last=0;
    for(int i=0;i<n;i++){
        mp[a[i]]=mp[a[i]-1]+1;
        if(mp[a[i]]>ans){
            ans=mp[a[i]];
            last=a[i];
        }
    }
    vector<int> v;
    for(int i=n-1;i>=0;i--){
        if(a[i]==last){
            v.push_back(i+1);
            last--;
            
        }
    }
    cout<<ans<<"\n";
    for(int i=v.size()-1;i>=0;i--)
        cout<<v[i]<<" ";
    
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