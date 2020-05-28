#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n"
#define dbg(x) cout<<x<<" ";
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
    int n,m;
    cin>>n>>m;
    vector<string> v;
    for(int i=0;i<n;i++){
        string s;   cin>>s;
        v.push_back(s);
    }
    string ans=v[0];
    for(int s=0;s<m;s++){
        char ch=ans[s];
        for(char i='a';i<='z';i++){
            bool ok=1;
            ans[s]=i;
            for(int j=0;j<n;j++){
                int w=0;
                for(int k=0;k<m;k++){
                    if(v[j][k]!=ans[k])
                        w++;
                }
                if(w>1){
                    ok=0;
                    break;
                }
            }
            if(ok){
                cout<<ans<<"\n";
                return ;
            }
        }
        ans[s]=ch;
    }
    cout<<"-1\n";
}
//zjqtlkiqyd
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