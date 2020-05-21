#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout << "\n";
#define UM unordered_map<int, int>
#define ULL unordered_map<ll, int>
void fun()
{
    ll x, y, n;
    cin >> x >> y >> n;
    ll a[] = {x - y, x, y, y - x, -x, -y};
    cout << (a[n % 6] % mod + mod) % mod;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("/ATOM/input.txt", "r", stdin);
    freopen("/ATOM/output.txt", "w", stdout);
#endif
    // int t;
    // cin>>t;
    // while(t--){
    fun();
    // }
}