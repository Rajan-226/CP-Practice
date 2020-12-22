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
vector<ll> t,cost;
vector<vector<ll>> dp;
vector<ll> prf;
int n;
ll help(int ind,int time){          //shi hai ye bhi approach bss index minus mein na jaane k liye, storage ache se kra li
                                  //sadly, kisi aur ka hi dekhna pda iss cheez k liye  
 
    if(ind==-1){
        if(time<n)  return 1e15;
        return 0;
    }
 
    if(time>=n)    return 0;        
 
    if(dp[ind][time]!=-1)   return dp[ind][time];
 
    ll ans=help(ind-1,time);
    ans=min(ans,cost[ind]+help(ind-1,t[ind]+time+1));

    return dp[ind][time]=ans;
}
void fun(){
 
    cin>>n;
    prf=cost=t=vector<ll>(n+1,0);
    dp=vector<vector<ll>>(n+1,vector<ll>(n+1,-1));
    fi(0,n){
        cin>>t[i]>>cost[i];
        if(i==0)    prf[i]=t[i];
        else prf[i]=prf[i-1]+t[i];
    }
 
    cout<<help(n-1,0)<<"\n";
    
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