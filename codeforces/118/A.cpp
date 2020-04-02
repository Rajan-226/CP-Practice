#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   string s;
   cin>>s;
   for(int i=0;s[i]!='\0';i++){
      s[i]=tolower(s[i]);
      if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
         continue;
      cout<<"."<<s[i];
   }
}