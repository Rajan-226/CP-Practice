#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  long long int min=INT_MAX,a[n];
  string s;
  cin>>s;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=1;i<n;i++){
    if(s[i]=='L'&&s[i-1]=='R'){
      int k=(a[i]-a[i-1])/2;
      if(k<min)
        min=k;
    }
  }
  if(min!=INT_MAX)
  cout<<min;
  else
  cout<<"-1";
}
