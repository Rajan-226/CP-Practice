#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007
#define mxsize (int)1e6
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
void yn(bool check){
    if(check)	cout<<"YES\n";
    else		cout<<"NO\n";
}
vector<ll> a;
void fun(){
    ll n;
    cin>>n;
    ll temp=n,ans=0;
    while(temp>=2){
        int k=lower_bound(a.begin(),a.end(),temp)-a.begin();
        if(a[k]==temp)
            temp-=a[k];
        else
            temp-=a[k-1];
        ans++;
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
    ll last=2;
    a.pb(last);
    fi(1,1000000){
        last+=i*3+2;
        if(last>(int)1e9){
            break;
        }
        a.pb(last);
    }
    int t=1;
    cin>>t;
    while(t--){
        fun();
    }
}