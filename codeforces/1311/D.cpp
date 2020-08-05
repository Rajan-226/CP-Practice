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
    ll a,b,c;
    cin>>a>>b>>c;
    ll mn=INT_MAX,x,y,z;
    fi(1,2*a+1){
        for(int j=i;j<=2*b;j+=i){
            ll cc=j*(c/j),step;
            step=abs(a-i)+abs(b-j)+abs(c-cc);
            if(step<mn){
                mn=step;
                x=i;
                y=j;    z=cc;
            }
            cc+=j;
            step=abs(a-i)+abs(b-j)+abs(c-cc);
            if(step<mn){
                mn=step;
                x=i;
                y=j;
                z=cc;
            }
        }
    }
    cout<<mn<<"\n";
    cout<<x<<" "<<y<<" "<<z<<"\n";
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