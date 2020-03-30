#include <bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin>>s;
   int i,l=0;
   for(i=0;s[i]!='\0';i++)
      if(s[i]>=97&&s[i]<=122){
         l++;
         s[i]-=32;
      }
   if(i-l>l)
      cout<<s;
   else{
      for(int i=0;s[i]!='\0';i++)
         s[i]+=32;
      cout<<s;
   }
}