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
bool boy[1000],girl[1000];
void fun(){
    int n,m;
    cin>>n>>m;
    int hp;
    cin>>hp;
    fi(0,hp){
        int d;
        cin>>d;
        boy[d]=1;
    }
    cin>>hp;
    fi(0,hp){
        int d;
        cin>>d;
        girl[d]=1;
    }
    int i=0;
    while(i<100000){
        if(boy[i%n]||girl[i%m]){
            boy[i%n]=girl[i%m]=1;
        }
        i++;
    }
    bool ok=1;
    fi(0,n) ok&=boy[i];
    fi(0,m) ok&=girl[i];
    if(ok){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
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