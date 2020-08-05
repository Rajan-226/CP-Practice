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
    int n; cin >> n;
    string s; cin >> s;

    int a[n];

    priority_queue<int> m1, m2;

    a[0] = 1;
    int count = 1;

    if(s[0] == '1') {
        m2.push(count++);
    }else m1.push(count++);


    int _max = 0;

    fi(1, n) {
        if(s[i] == '1') {
            if(m1.empty()) {
                a[i] = count;
                m2.push(count);
                count++;
            }else {
                a[i] = m1.top();
                int x = m1.top();    
                m1.pop();
                m2.push(x);
            }
        }else {

            if(m2.empty()) {
                a[i] = count;
                m1.push(count);  
                count++;
            }else {
                a[i] = m2.top();
                int x = m2.top();
                m2.pop();
                m1.push(x);
            }
        }
    }
    cout << count-1 << '\n';
    fi(0, n) {
        cout << a[i] << ' ';
    }
    nl;

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