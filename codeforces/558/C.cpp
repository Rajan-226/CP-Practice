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
#define mxsize (int)1e6
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
    unordered_map<int,int> mp,all;
    fi(0,n){
        int k;
        cin>>k;
        int temp=k;
        int c=0;
        while(temp<mxsize){
            mp[temp]+=c;
            all[temp]++;
            temp*=2;
            c++;
        }
        c=0;
        temp=k;
        while(temp>0){
            bool ok=temp%2;
            c++;
            temp/=2;
            all[temp]++;
            mp[temp]+=c;
            if(ok&&temp!=0){
                int stemp=temp*2;
                int sc=c+1;
                while(stemp<mxsize){
                    all[stemp]+=1;
                    mp[stemp]+=sc;
                    sc++;
                    stemp*=2;
                }
            }
        }
    }
    int ans=INT_MAX;
    for(auto& i:mp){
        if(all[i.F]>=n){
            ans=min(ans,i.S);
        }
    }
    cout<<ans<<"\n";
}
//6 6 12
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