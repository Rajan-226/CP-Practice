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
    int n,m,x,y;    cin>>n>>m>>x>>y;
    if(2*x<=y){
        ll ans=0;
        fi(0,n){
            string s;   cin>>s;
            fj(0,m){
                if(s[j]=='.')
                    ans+=x;
            }
        }
        cout<<ans<<"\n";
    }
    else{
        ll c1=0,c2=0;
        fi(0,n){
            string s;   cin>>s;
            fj(0,m){
                if(j+1==m&&s[j]=='.'){
                    c1+=x;
                }
                else if(s[j]=='.'){
                    if(s[j+1]=='.'){
                        c2+=y;
                        j++;
                    }
                    else
                        c1+=x;
                }
            }
        }
        cout<<c1+c2<<"\n";
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
    int t;
    cin>>t;
    while(t--){
        fun();
    }
}