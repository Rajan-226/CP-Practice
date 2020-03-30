#include <bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin>>s;
   int sum=min(s[0]-'a',26-s[0]+'a');
   for(int i=1;s[i]!='\0';i++){
      int dif=abs(s[i]-s[i-1]);
      sum+=min(dif,26-dif);
   }
   cout<<sum;
}