#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   string s;
   char str[205];
   cin>>s;
   int j=0;
   for(int i=0;s[i]!='\0';i++){
      if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
         continue;
      str[j++]='.';
      if(s[i]>='A'&&s[i]<='Z')
         str[j++]=s[i]+32;
      else
         str[j++]=s[i];
   }
   str[j]='\0';
   cout<<str;
}