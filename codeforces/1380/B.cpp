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
    fi(0,s.size()){
        mp[s[i]]+=1;
    }
    int n=s.size();
    while(n--){
        if(mp['R']>=mp['S']&&mp['R']>=mp['P']){
            cout<<"P";
        }
        else if(mp['P']>=mp['R']&&mp['P']>=mp['S']){
            cout<<"S";
        }
        else{
            cout<<"R";
        }
    }
    nl;
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