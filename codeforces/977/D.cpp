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
vector<ll> ans;
map<ll,int> mp;
bool rec(ll num,int n){
    if(n==0){
        return true;
    }
    if(mp[num*2]==0&&num%3!=0){
        return false;
    }
    if(num%3==0&&mp[num/3]==0&&mp[num*2]==0){
        return false;
    }
    if(mp[num*2]){
        mp[num*2]--;
        if(rec(num*2,n-1)){
            ans.push_back(num*2);
            return true;
        }
        mp[num*2]++;
    }
    if(num%3!=0)
        return false;
    if(mp[num/3]==0)
        return false;
    mp[num/3]--;
    if(rec(num/3,n-1)){
        ans.push_back(num/3);
        return true;
    }
    mp[num/3]++;
    return false;
}
void fun(){
    int n;
    cin>>n;
    ll a[n];
    fi(0,n){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        fj(0,n){
            if(j!=i)    mp[a[j]]++;
        }
        if(rec(a[i],n-1)){
            ans.push_back(a[i]);
            reverse(ans.begin(),ans.end());
            fi(0,n){
                cout<<ans[i]<<" ";
            }
            return ;
        }
        mp.clear();
    }
    
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