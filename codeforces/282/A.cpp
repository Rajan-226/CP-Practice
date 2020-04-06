#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define mod 1000000007
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   #ifndef ONLINE_JUDGE
      freopen("/ATOM/input.txt", "r", stdin);
      freopen("/ATOM/output.txt", "w", stdout);
   #endif
    int n,c=0;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s[1]=='+')
            c++;
        else
            c--;
    }
    cout<<c;
}