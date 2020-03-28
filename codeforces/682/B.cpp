#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n+1],ans=n+1;
  for(int i=0;i<n;i++)
    cin>>a[i];
  sort(a,a+n);
  a[0]=1;
  for(int i=1;i<n;i++){
    if(a[i]==a[i-1])
      ans--;
    else
      a[i]=a[i-1]+1;
  }
  cout<<ans;
}