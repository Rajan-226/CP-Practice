#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n"
#define dbg(x) cout<<x<<" ";
#define fi(a,b) for(int i=a;i<b;i++)
#define fj(a,b) for(int j=a;j<b;j++)
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
    int n,o=0,st=-1,c=0,time=0;
    string s;
    cin>>n>>s;
    fi(0,n){
        if(s[i]==')'){
            if(o<=0){
                if(st==-1)
                    st=i;
                c++;
            }
            else
                o--;
        }
        else{
            if(c){
                c--;
                if(!c){
                    time+=i-st+1;
                    st=-1;
                }
            }
            else
                o++;
        }
    }
    if(c==0&&o==0)
        cout<<time<<"\n";
    else
        cout<<"-1";
    
}
int main(){
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