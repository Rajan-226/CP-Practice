#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define pb push_back
#define nl cout<<"\n"
#define db(x) cout<<x<<" "
#define fi(a,b) for(int i=a;i<b;i++)
#define fj(a,b) for(int j=a;j<b;j++)
#define fk(a,b) for(int k=a;k<b;k++)
#define F first
#define S second
#define mxsize (int)1e6+5
ll fastexp(ll a,ll n,ll nod=LLONG_MAX){
    ll ans=1;
    while(n){
        if(n&1)
            ans=(ans*a)%nod;
        a=(a*a)%nod;
        n>>=1;
    }
    return ans;
}
void fun(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(n,vector<int>(m,0));
    fi(0,n){
        fj(0,m){
            cin>>a[i][j];
        }
    }
    vector<vector<int>> v(m,vector<int>(n,0));

    fi(0,m){
        fj(0,n){
            cin>>v[i][j];
        }
    }
    int index=-1;
    fi(0,n){
        fj(0,m){
            if(a[i][j]==v[0][0]){
                index=j;
                break;
            }
        }
        if(index!=-1)   break;
    }

    fi(0,n){
        fj(0,n){
            if(a[j][index]==v[0][i]){
                swap(a[i],a[j]);
                break;
            }
        }
    }

    fi(0,n){
        fj(0,m){
            cout<<a[i][j]<<" ";
        }cout<<"\n";
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout.precision(20);
    cout<<fixed;
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