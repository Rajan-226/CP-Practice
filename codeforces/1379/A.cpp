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
bool check(string s,int n){
    string ans="abacaba";
    int count=0;
    fi(0,n){
        int k=0,j=i;
        while(k<7&&j<n){
            if(s[j]!=ans[k])
                break;
            k++;
            j++;
        }
        if(k==7){
            count++;
        }
    }
    if(count==1){
        fi(0,n)
            if(s[i]=='?')
                s[i]='z';
        cout<<"YES\n"<<s<<"\n";
        return 1;
    }
    return 0;
}
void fun(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans="abacaba";
    bool ok=0;
    int count=0;
    fi(0,n){
        int k=0,j=i;
        while(k<7&&j<n){
            if(s[j]!=ans[k])
                break;
            k++;
            j++;
        }
        if(k==7){
            count++;
        }
    }
    if(count==1){
        fi(0,n)
            if(s[i]=='?')
                s[i]='z';
        cout<<"YES\n"<<s<<"\n";
        return ;
    }
    else if(count>1){
        cout<<"NO\n";
        return ;
    }
    fi(0,n){
        int k=0,j=i;
        while(k<7&&j<n){
            if(s[j]!=ans[k]&&s[j]!='?')
                break;
            k++;
            j++;
        }
        if(k==7){
            j=i;k=0;
            string f=s;
            while(k<7&&j<n){
                if(f[j]=='?')
                    f[j]=ans[k];
                k++;
                j++;
            }
            if(check(f,n)){
                return ;
            }
        }
    }
    cout<<"NO\n";
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