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
    ll a[3],b[3];
    fi(0,3) cin>>a[i];
    fi(0,3) cin>>b[i];
    ll ans=2ll*min(a[2],b[1]);
    if(a[2]>=b[1]){
        
        a[2]-=b[1];

        b[2]-=a[2];

        b[2]-=a[0];
        a[1]-=b[0];
        if(b[2]>0&&a[1]>0)
            ans-=2ll*min(b[2],a[1]);
    }
    else{
        b[1]-=a[2];
        // db(b[1]);
        a[1]-=b[1];
        // db(a[1]);
        a[1]-=b[0];
        // db(a[1]);
        b[2]-=a[0];
        // db(b[2]);
        // db(a[1]);

        if(a[1]>0&&b[2]>0){
            ans-=2ll*min(a[1],b[2]);
        }
    }
    
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
    cin>>t;
    while(t--){
        fun();
    }
}