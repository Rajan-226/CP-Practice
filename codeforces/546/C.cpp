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
template <typename T> istream &operator>>(istream &is, vector<T> &vec) { for (auto &v : vec) is >> v; return is; }
#define mxsize (int)1e6
ll fastexp(ll a,ll n,ll nod){
    if(nod==0)	nod=LLONG_MAX;
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
    int n;
    cin>>n;
    int k1,k2;
    int a[n],b[n];
    cin>>k1;
    fi(0,k1) cin>>a[i];
    cin>>k2;
    fi(0,k2) cin>>b[i];

    deque<int> q1,q2;
    fi(0,k1)    q1.pb(a[i]);
    fi(0,k2)    q2.pb(b[i]);
    int moves=0;

    while((int)q1.size()>0 && (int)q2.size()>0){
        moves++;
        int x=q1.front(),y=q2.front();

        q1.pop_front();
        q2.pop_front();
        if(x>y){
            q1.push_back(y);
            q1.push_back(x);
        }
        else{
            q2.push_back(x);
            q2.push_back(y);
        }
        if(moves>(int)1e8){
            cout<<"-1\n";
            return ;
        }
    }
    


    cout<<moves<<" ";
    if(q1.empty())  cout<<"2";
    else        cout<<"1";
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