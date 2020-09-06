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
bool fun(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    string ans="";
    fi(0,k){
        ans+=s[i];
    }

    fi(k,n){
        if(ans[i%k]!='?'){
            if(s[i]!='?'){
                if(ans[i%k]!=s[i]){
                    return 0;
                }
            }
        }
        else{
            ans[i%k]=s[i];
        }
    }
    int one=0,zero=0;
    fi(0,k){
        if(ans[i]=='1')   one++;
        if(ans[i]=='0')   zero++;
    }
    if(one>k/2) return 0;
    if(zero>k/2)    return 0;
    return 1;

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
        if(fun()){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}