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
void fun(){
    string s,t;
    cin>>s>>t;
    int n=s.size();
    map<char,int> mp;
    for(auto i:s)   mp[i]++;
    int ans=0;
    for(int i=0;i<t.size();i++){
        if(mp[t[i]]>0){
            ans++;
            mp[t[i]]--;
            t[i]='0';
        }
    }
    cout<<ans<<" ";
    int c=0;
    for(int i=0;i<t.size();i++){
        if(t[i]=='0')   continue;
        
        if(t[i]>='A'&&t[i]<='Z'&&mp[t[i]-'A'+'a']>0){
            c++;
            mp[t[i]-'A'+'a']--;
        }
        else if(t[i]>='a'&&t[i]<='z'&&mp[t[i]-'a'+'A']>0){
            c++;
            mp[t[i]-'a'+'A']--;
        }
    }
    cout<<min(n-ans,c);
    
    
    
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