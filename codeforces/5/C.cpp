#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,sse,sse2")
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

void fun(){
    string s;
    cin>>s;
    int n=s.size();
    vector<int> prev(n+1,-1),st;
    int mx=0,mxcount=0;
    fi(1,n+1){
        if(s[i-1]=='('){
            st.push_back(i);
        }
        else{
            if(!st.empty()){
                int ans=i-st.back()+1;
                if(prev[st.back()-1]!=-1)   ans+=prev[st.back()-1];
                if(ans>=mx){
                    if(ans==mx)  mxcount++;
                    else{
                        mx=ans;
                        mxcount=1;
                    }
                }
                prev[i]=ans;
                st.pop_back();
            }
        }
        
    }
    if(mx==0)   mxcount=1;
    cout<<mx<<" "<<mxcount<<"\n";
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