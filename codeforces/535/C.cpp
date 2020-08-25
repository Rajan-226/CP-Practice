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
    ll a,b,n;
    cin>>a>>b>>n;
    
    while(n--){
        ll start,t,m;
        cin>>start>>t>>m;
        ll r=(ll)4e6,l=start;

        ll ans=-1;
        while(l<=r){
            ll mid=(l+r)/2;

            ll an=a+(mid-1)*b;

            ll sum=(mid-start+1)*a;

            ll sc=mid*(mid-1)/2;

            sc-=(start-1)*(start-2)/2;
            sc*=b;
            sum+=sc;

            if(an<=t&&sum<=m*t){    //kisne hataya tha yhan se equal bc

                l=mid+1;
                ans=mid;
            }
            else{
                r=mid-1;
            }
        }
        cout<<ans<<"\n";
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
    int t=1;
    // cin>>t;
    while(t--){
        fun();
    }
}