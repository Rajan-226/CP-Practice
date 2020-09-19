#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define pb push_back
#define nl cout<<"\n"
#define db(x) cout<<x<<" "
#define fi(a,b) for(int i=a;i<b;i++)
void fun(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1){
        int v=s[0]-'0';
        int a=2;
        if(v%2) a=1;
        cout<<a<<"\n";
        return ;
    }
    int oa = 0, ea = 0;

    for(int i = 0; i < n; i += 2) {
        if((s[i] - '0') % 2 == 0) {
            ea++;
        }else {
            oa++;
        }
    }

    int ob = 0, eb = 0;

    for(int i = 1; i < n; i += 2) {
        if((s[i] - '0') % 2 == 0) {
            eb++;
        }else {
            ob++;
        }
    }


    if(n % 2 == 0) {

        if(eb) {
            cout << "2\n";
        }else {
            cout << "1\n";
        }

    }else {
        if(oa) {
            cout << "1\n";
        }else {
            cout << "2\n";
        }
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
    cin>>t;
    while(t--){
        fun();
    }
}