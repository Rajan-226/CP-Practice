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
    string a,b,c;
    cin>>a>>b>>c;
    map<string,int> mp;
    vector<string> v;
    mp["C"]=0;mp["C#"]=1;
    mp["D"]=2;mp["D#"]=3;
    mp["E"]=4;mp["F"]=5;
    mp["F#"]=6;mp["G"]=7;
    mp["G#"]=8;mp["A"]=9;
    mp["B"]=10;mp["H"]=11;
    v.push_back("C");v.push_back("C#");
    v.push_back("D");v.push_back("D#");
    v.push_back("E");v.push_back("F");
    v.push_back("F#");v.push_back("G");
    v.push_back("G#");v.push_back("A");
    v.push_back("B");v.push_back("H");
    v.push_back("C");v.push_back("C#");
    v.push_back("D");v.push_back("D#");
    string x=".",y=".",z=".";
    fi(0,12){
        if(v[i]==a||v[i]==b||v[i]==c){
            if(x==".")
                x=v[i];
            else if(y==".")
                y=v[i];
            else
                z=v[i];
        }
    }
    if((v[mp[x]+4]==y&&v[mp[y]+3]==z))
        cout<<"major";
    else if(v[mp[x]+3]==y&&v[mp[y]+4]==z)
        cout<<"minor";
    else if(v[mp[y]+4]==z&&v[mp[z]+3]==x)
        cout<<"major";
    else if(v[mp[y]+3]==z&&v[mp[z]+4]==x)
        cout<<"minor";
    else if(v[mp[z]+4]==x&&v[mp[x]+3]==y)
        cout<<"major";
    else if(v[mp[z]+3]==x&&v[mp[x]+4]==y)
        cout<<"minor";
    else
        cout<<"strange";
}
// C, C#, D, D#, E, F, F#, G, G#, A, B, H
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