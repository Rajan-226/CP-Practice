#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007
#define nl cout<<"\n"
#define db(x) cout<<x<<" "
#define fi(a,b) for(int i=a;i<b;i++)
#define fj(a,b) for(int j=a;j<b;j++)
#define fk(a,b) for(int k=a;k<b;k++)
#define F first
#define S second
#define UM unordered_map<int,int>
#define MP map<int,int>
void yn(bool check){
    if(check)	cout<<"YES\n";
    else		cout<<"NO\n";
}
void fun(){
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int ans=0;
    for(int i=0;i<20;i++){
        char c='a'+i;
        char k='z';
        int mn=100;
        fi(0,n){
            if(a[i]==c&&a[i]!=b[i]){
                if(a[i]>b[i])
                    continue;
                if((b[i]-a[i])<mn){
                    mn=b[i]-a[i];
                    k=b[i];
                }
            }
        }
        if(k!='z'){
            ans++;
            fi(0,n){
                if(a[i]==c&&a[i]!=b[i])
                    a[i]=k;
            }
        }
    }
    fi(0,n){
        if(a[i]!=b[i]){
            cout<<"-1\n";
            return ;
        }
    }
    cout<<ans<<"\n";
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