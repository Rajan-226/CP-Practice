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
string change(string str, string l, int len) {
    fi(0,len+1)
        str[i]=l[i];

    if(str[len] == 'z') str[len] = 'd';
    else str[len]++;

    return str;
}
void fun(){
    int n;
    cin>>n;
    string s;
    fi(0,200)
        s+='a';
    int temp;
    cin>>temp;
    cout<<s<<"\n";
    string x=s;
    x=change(x,s,temp);
    cout<<x<<"\n";
    fi(1,n){
        cin>>temp;
        s=change(s,x,temp);
        cout<<s<<"\n";
        x=s;
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