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
    map<char,int> mp;
    mp['q']=9;
    mp['r']=5;
    mp['b']=3;
    mp['n']=3;
    mp['p']=1;
    mp['k']=0;
    int w=0,b=0;
    fj(0,8){
        string s;
        cin>>s;
        for(auto i:s){
            if(i=='.')  continue;
            if(i>='a'&&i<='z')  b+=mp[i];
            else        w+=mp[i-'A'+'a'];
        }
    }
    if(w==b){
        cout<<"Draw";
    }
    else if(w>b){
        cout<<"White";
    }
    else{
        cout<<"Black";
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