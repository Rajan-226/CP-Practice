#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,sse,sse2")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define pi 3.141592653589
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
#define mxsize (int)3e5

void fun(){
    int n,m;
    cin>>n>>m;
    map<int,int> mp;
    map<int,int> v;
    fi(1,n+1){
        int k;  cin>>k;
        v[k]++;
        mp[k]=i;
    }
    int b[m+1];
    fi(1,m+1){
        cin>>b[i];
        if(!mp[b[i]]){
            cout<<"Impossible\n";
            return;
        }
    }
    vector<int> ans;
    fi(1,m+1){
        if(v[b[i]]>1){
            cout<<"Ambiguity\n";
            return ;
        }
        ans.push_back(mp[b[i]]);
    }
    
    cout<<"Possible\n";
    for(auto i:ans) db(i);

}
/*
3 2 1 - f
1 2 3 3- b
3 2 1 - a


*/

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