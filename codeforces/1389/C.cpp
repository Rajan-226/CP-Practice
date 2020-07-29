#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007
#define mxsize (int)1e6
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
void yn(bool check){
    if(check)	cout<<"YES\n";
    else		cout<<"NO\n";
}
void fun(){
    string s;
    cin>>s;
    map<char,int> mp;
    int mx=-1;
    fi(0,s.size()){
        mp[s[i]]+=1;
        mx=max(mx,mp[s[i]]);
    }
    if(mp.size()==1){
        cout<<"0\n";
        return ;
    }
    int n=s.size(),ans=-1;
    for(char i='0';i<='9';i++){
        for(char j='0';j<='9';j++){
            bool ok=1;
            int m=0;
            fk(0,s.size()){
                if(ok&&s[k]==i){
                    ok=0;
                }
                else if(ok==0&&s[k]==j){
                    ok=1;
                    m+=2;
                }
            }
            ans=max(ans,m);
        }
    }
    for(auto i:mp){
        ans=max(ans,i.S);
    }
    cout<<n-ans<<"\n";

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
    cin>>t;
    while(t--){
        fun();
    }
}