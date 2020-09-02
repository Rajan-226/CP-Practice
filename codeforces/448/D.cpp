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
ll n,m,k;
ll find(ll mid){
    ll cnt=0;
    fi(1,n+1){
        cnt+=min(m,(mid-1)/i);
    }
    return cnt;
}
void fun(){
    cin>>n>>m>>k;
    ll l=1,r=n*m;
    while(l<=r){
        ll mid=(l+r)/2;
        if(find(mid)<k){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<l-1;

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