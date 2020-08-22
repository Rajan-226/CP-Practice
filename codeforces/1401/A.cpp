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
    int ans;
    if(k>=n){
        ans=k-n;
    }
    else{
        if((n%2==0&&k%2==0)||(n%2!=0)&&k%2!=0)
            ans=0;
        else
            ans=1;
    }

    cout<<ans<<"\n";
}
// 5 0
// 4 1 3 
// 3 2 1 
// 2 3

// 6 0
// 5 1 4
// 4 2 2
// 3 3 0
// 2 4 2
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("/ATOM/input.txt", "r", stdin);
        freopen("/ATOM/output.txt", "w", stdout);
    #endif
    int t=1;
    cin>>t;
    while(t--){
        fun();
    }
}