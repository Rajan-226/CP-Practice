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
    int n;
    cin>>n;
    string s;
    cin>>s;
    n=s.size();
    deque<int> on,zr;
    vector<int> ans(n);
    int col=1;
    ans[0]=1;
    if(s[0]=='0'){
        zr.push_back(1);
    }
    else{
        on.push_back(1);
    }
    fi(1,n){
        if(s[i]=='0'){
            if(on.empty()){
                zr.push_back(++col);
                ans[i]=col;
            }
            else{
                ans[i]=on.back();
                zr.push_back(ans[i]);
                on.pop_back();
            }
        }
        else{
            if(zr.empty()){
                on.push_back(++col);
                ans[i]=col;
            }
            else{
                ans[i]=zr.back();
                on.push_back(ans[i]);
                zr.pop_back();
            }
        }
    }
    cout<<col<<"\n";
    fi(0,n) db(ans[i]);
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