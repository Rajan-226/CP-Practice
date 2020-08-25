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
    ll n;
    cin>>n;
    set<ll> v;
    v.insert(4);
    v.insert(7);
    fj(0,10){   //now fuck this
        vector<ll> k;

        for(auto i:v){
            // db(i);
            k.push_back(i*10+4);
            k.push_back(i*10+7);// fuck this
        }
        for(auto i:k){
            // db(i);
            v.insert(i);
        }
    }
    int ind=1;
    for(auto i:v){
        if(i==n){
            break;
        }
        // db(i);
        ind++;
    }

    cout<<ind<<"\n";

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