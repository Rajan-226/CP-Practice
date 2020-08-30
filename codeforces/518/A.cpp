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
    string a,b;
    cin>>a>>b;
    string temp=a;
    int n=a.size();
    int i=0;
    while(i<n&&a[i]==b[i]){
        i++;
    }
    if(a[i]+1!=b[i]){
        a[i]=a[i]+1;
        cout<<a;
    }
    else{
        int j=i;
        i++;
        while(i<n){
            a[i]='z';
            i++;
        }
        if(a>temp){
            cout<<a;
            return;
        }
        a[j]=a[j]+1;
        j++;
        while(j<n){
            a[j]='a';
            j++;
        }
        if(a<b){
            cout<<a;
        }
        else{
            cout<<"No such string";
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
    // cin>>t;
    while(t--){
        fun();
    }
}