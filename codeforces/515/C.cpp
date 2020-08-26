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
        string ans="";
        fi(0,n){
            if(s[i]=='4')   ans+="223";
            else if(s[i]=='6')  ans+="53";
            else if(s[i]=='8')  ans+="7222";
            else if(s[i]=='9')  ans+="7233";
            else if(s[i]!='0'&&s[i]!='1')   ans+=s[i];
        }
        sort(ans.begin(),ans.end(),greater<char>());
        cout<<ans<<"\n";
        // 2 2 2 3
        // 2 3 4 5 6
        //5 2 3
        //6  2 3 4 5 6 
        // 8

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