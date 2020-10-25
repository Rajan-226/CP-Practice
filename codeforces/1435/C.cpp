#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define pb push_back
#define nl cout<<"\n"
#define db(x) cout<<x<<" "
#define fi(a,b) for(int i=a;i<b;i++)
#define fj(a,b) for(int j=a;j<b;j++)
#define fk(a,b) for(int k=a;k<b;k++)
#define F first
#define S second
#define mxsize (int)1e6+5
ll fastexp(ll a,ll n,ll nod=LLONG_MAX){
    ll ans=1;
    while(n){
        if(n&1)
            ans=(ans*a)%nod;
        a=(a*a)%nod;
        n>>=1;
    }
    return ans;
}
void fun(){
    ll a[6];
    fi(0,6) cin>>a[i];
    int n;
    cin>>n;
    vector<ll> b(n,0);
    vector<pair<ll,int>> v;
    fi(0,n){
        cin>>b[i];
        fj(0,6){
            v.push_back({b[i]-a[j],i});
        }
    }
    sort(v.begin(),v.end());
    ll ans=INT_MAX;
    int i=0,j=0;
    int sz=v.size();
    unordered_map<int,bool> inc;
    unordered_map<int,ll> value;
    int count=0;
    while(i<sz&&j<sz){
        ll val=v[j].F;
        int ind=v[j].S;
        if(inc[ind]==0){
            inc[ind]=1;
            value[ind]=val;
            count++;
            if(count==n){
                ans=min(ans,val-v[i].F);
                inc[v[i].S]=0;
                i++;
                count--;
            }
            j++;
        }
        else{
            value[ind]=val;
            j++;
        }
        while(i<sz&&inc[v[i].S]&&value[v[i].S]!=v[i].F){
            i++;
        }
    }
    i=v.size()-1; j=v.size()-1;
    inc.clear();value.clear();
    count=0;
    while(i>=0&&j>=0){
        ll val=v[j].F;
        int ind=v[j].S;
        if(inc[ind]==0){
            inc[ind]=1;
            value[ind]=val;
            count++;
            if(count==n){
                ans=min(ans,v[i].F-val);
                inc[v[i].S]=0;
                i--;
                count--;
            }
            j--;
        }
        else{
            value[ind]=val;
            j--;
        }
        while(i>=0&&inc[v[i].S]&&value[v[i].S]!=v[i].F){
            i--;
        }
    }
    cout<<ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout.precision(20);
    cout<<fixed;
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