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
    ll n,k;
    cin>>n>>k;
    ll mx=INT_MIN;
    ll a[n];
    fi(0,n){
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    k--;
    fi(0,n)     a[i]=mx-a[i];
    mx=*max_element(a,a+n);
    if(k%2){
        fi(0,n) a[i]=mx-a[i];
    }
    fi(0,n){
        cout<<a[i]<<" ";
    }nl;
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