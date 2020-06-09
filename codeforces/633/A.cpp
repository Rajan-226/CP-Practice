#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n"
#define dbg(x) cout<<x<<" "
#define fi(a,b) for(int i=a;i<b;i++)
#define fj(a,b) for(int j=a;j<b;j++)
#define fk(a,b) for(int k=a;k<b;k++)
#define F first
#define S second
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
    int a,b,c;
    cin>>a>>b>>c;
    if(c%a==0||c%b==0){
        cout<<"Yes\n";
        return ;
    }
    fi(1,10000){
        fj(1,10000){
            if(i*a+j*b==c){
                cout<<"Yes\n";
                return ;
            }
        }
    }
    cout<<"No\n";
    
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