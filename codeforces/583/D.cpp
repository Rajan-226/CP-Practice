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

#define vvl vector<vector<ll>>
#define vl vector<ll>
#define pl pair<ll,ll>
#define ppl pair<ll,pair<ll,ll>>
#define mxsize (int)1e6+5
int lis(vector<int>& a){
    int n=a.size();
    vector<int> sq;
    sq.push_back(a[0]);
    for(int i=1;i<n;i++){
        if(sq.back()<=a[i]){
            sq.push_back(a[i]);
        }
        else{
            int ind=upper_bound(sq.begin(),sq.end(),a[i])-sq.begin();
            sq[ind]=a[i];
        }
    }
    return (int)sq.size();
}
void fun(){
    int n,t;
    cin>>n>>t;
    vector<int> a,v(n,0);
    fi(0,n){
        cin>>v[i];
    }
    fi(0,min(201,t)){
        fj(0,n)     a.push_back(v[j]);
    }
    if(t<=201){
        cout<<lis(a)<<"\n";
        return ;
    }
    int temp=lis(a);
    fi(0,n){
        a.pop_back();
    }
    int ans=lis(a);
    ans+=(temp-ans)*(t-200);
    cout<<ans<<"\n";
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