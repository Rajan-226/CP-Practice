#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n"
#define dbg(x) cout<<x<<" ";
#define fi(a,b) for(int i=a;i<b;i++)
#define fj(a,b) for(int j=a;j<b;j++)
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
    int n,ans=-1,ans1=-1,ans2=-1;
    cin>>n;
    bool ok=1;
    fi(1,n+1){
        int k;  cin>>k;
        if(ok){
            if(k%2==0){
                ans=i;
                ok=0;
            }
            else if(ans1==-1){
                ans1=i;
            }
            else{
                ans2=i;
                ok=0;
            }
        }
    }
    if(ok)
        cout<<"-1\n";
    else if(ans!=-1)
        cout<<"1\n"<<ans<<"\n";
    else
        cout<<"2\n"<<ans1<<" "<<ans2<<"\n";
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("/ATOM/input.txt", "r", stdin);
        freopen("/ATOM/output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        fun();
    }
}