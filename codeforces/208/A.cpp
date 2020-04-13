#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   #ifndef ONLINE_JUDGE
      freopen("/ATOM/input.txt", "r", stdin);
      freopen("/ATOM/output.txt", "w", stdout);
   #endif
   string s,result;
   cin>>s;
   int i=0;
   bool st=1;
    while(i<s.size()){
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            if(st&&i)
            result+=' ';
            i+=3;
            st=0;
        }
        else{
            result+=s[i];
            i++;
            st=1;
        }
   }
   cout<<result;
}