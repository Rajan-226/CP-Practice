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
    ll a, b, x, y, n;
    
    cin >> a >> b >> x >> y >> n;

    ll X = 0, Y = 0;

    ll ba = b;
    ll tempA = max(y, b - n);
    ll B = tempA;
    ll N = n;
    N -= (ba - tempA);
    ll A = a;
    if(N) {
        A = max(x, A - N);
    }
    X = A * B;

    ll ab = a;
    ll temp = max(x, a - n);
    a = temp;
    n -= (ab - temp);

    if(n) {
        b = max(y, b - n);
    }
    Y = a * b;

    cout << min(X, Y) << '\n';
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