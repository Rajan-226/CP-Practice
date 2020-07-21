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
    vector<int> ans;
    for(int i=n-1;i>=0;i--){
        if(a[i]!=b[i]){
            if(i==0){
                ans.push_back(1);
            }
            else if(a[0]!=b[i]){
                ans.push_back(i+1);
                string k=a;
                fj(0,i+1){
                    if(k[j]=='0')
                        k[j]='1';
                    else    
                        k[j]='0';
                }
                int f=i;
                fj(0,i+1){
                    a[j]=k[f--];
                }

            }
            else{
                ans.push_back(1);
                ans.push_back(i+1);
                string k=a;
                fj(0,i+1){
                    if(k[j]=='0')
                        k[j]='1';
                    else    
                        k[j]='0';
                }
                int f=i;
                fj(0,i+1){
                    a[j]=k[f--];
                }
                a[0]=b[i];
            }
        }
    }
    cout<<ans.size()<<" ";
    fi(0,ans.size()){
        cout<<ans[i]<<" ";
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