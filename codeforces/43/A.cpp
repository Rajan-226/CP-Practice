#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,c=0;
  char a[11],b[11];
  cin>>n;
  for(int i=0;i<n;i++){
    char s[11];
    cin>>s;
    if(i==0)
      strcpy(a,s);
    if(strcmp(a,s)==0)
      c++;
    else
      strcpy(b,s);
  }
  c>n-c?cout<<a:cout<<b;
}
