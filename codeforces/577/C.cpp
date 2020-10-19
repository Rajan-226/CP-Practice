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
#define mxsize (int)1e4
bool is_prime[mxsize+5]={0};
void sieve(int n){
    for(int i=2;i*i<=n;i++){
        if(is_prime[i]==0){
            for(int j=i*i;j<=n;j+=i)    is_prime[j]=1;
        }
    }
}
void fun(){
    int n;
    cin>>n;
    vector<int> ans;
    vector<bool> vis(n+1,0);
    vis[1]=1;
    for(int i=2;i<=n;i++){
        if(is_prime[i]==0){
            ans.push_back(i);
            vis[i]=1;
            continue;
        }
        int temp=i;
        for(int j=2;j*j<=i;j++){
            int c=1;
            while(temp%j==0){
                temp/=j;
                c*=j;
            }
            if(!vis[c]){
                ans.push_back(i);
                vis[i]=1;
                break;
            }
        }
    }
    cout<<ans.size()<<"\n";
    for(auto i:ans) db(i);
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
    sieve(mxsize);
    int t=1;
    // cin>>t;
    while(t--){
        fun();
    }
}