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
#define mxsize (int)1e3+2
void fun(){
    int n,m;    
    cin>>n>>m;
    ll a[n+5][m+5];
    ll boy_start[n+5][m+5],girl_start[n+5][m+5],boy_end[n+5][m+5],girl_end[n+5][m+5];
    fi(1,n+1){
        fj(1,m+1){
            cin>>a[i][j];
        }
    }
    fi(0,n+3){
        fj(0,m+3)   boy_end[i][j]=boy_start[i][j]=girl_start[i][j]=girl_end[i][j]=0;
    }

    fi(1,n+1){
        fj(1,m+1){
            boy_start[i][j]=a[i][j]+max(boy_start[i-1][j],boy_start[i][j-1]);
        }
    }

    for(int i=n;i>=1;i--){
        for(int j=m;j>=1;j--){
            boy_end[i][j]=a[i][j]+max(boy_end[i+1][j],boy_end[i][j+1]);
        }
    }

    for(int i=n;i>=1;i--){
        fj(1,m+1){
            girl_start[i][j]=a[i][j]+max(girl_start[i+1][j],girl_start[i][j-1]);
        }
    }

    fi(1,n+1){
        for(int j=m;j>=1;j--){
            girl_end[i][j]=a[i][j]+max(girl_end[i-1][j],girl_end[i][j+1]);
        }
    }

    ll ans=0;

    fi(2,n){
        fj(2,m){
            ans=max(ans,boy_start[i-1][j]+boy_end[i+1][j]+girl_start[i][j-1]+girl_end[i][j+1]);
            ans=max(ans,boy_start[i][j-1]+girl_start[i+1][j]+boy_end[i][j+1]+girl_end[i-1][j]);
        }
    }

    cout<<ans<<"\n";
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