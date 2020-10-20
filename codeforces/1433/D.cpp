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
    int n;
    cin>>n;
    int a[n];
    set<int> s;
    fi(0,n){
        cin>>a[i];
        s.insert(a[i]);
    }
    if(s.size()==1){
        cout<<"NO\n";
        return ;
    }
    int j;
    fi(0,n){
        if(a[i]!=a[0]){
            j=i;
            break;
        }
    }
    vector<pair<int,int>> ans;
    fi(1,n){
        if(a[i]!=a[0]){
            ans.push_back({1,i+1});
        }
    }
    fi(1,n){
        if(a[i]==a[0]){
            ans.push_back({j+1,i+1});
        }
    }
    cout<<"YES\n";
    for(auto i:ans){
        db(i.F);db(i.S);nl;
    }

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
    cin>>t;
    while(t--){
        fun();
    }
}