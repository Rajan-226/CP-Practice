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
    int num;

    cin >> num;
    
    vector<pair<ll, ll> > arr;

    fi(0, num) {
        int t; 
        cin >> t;
        arr.push_back({t, i+1});
    }

    sort(arr.begin(), arr.end());

    ll x = arr[0].F, y = arr[1].F, z = arr[arr.size() - 1].F;

    if(z >= x + y) {


        vector<ll> ref;

        ref.push_back(arr[0].S);        
        ref.push_back(arr[1].S);        
        ref.push_back(arr[arr.size() - 1].S);        

        sort(ref.begin(), ref.end());

        cout << ref[0] << ' ' << ref[1] << ' ' << ref[2] << '\n';
        return;
    }


    cout << "-1\n";
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