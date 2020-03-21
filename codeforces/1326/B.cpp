#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  long long int a[n],k,max=INT_MIN;
  cin>>k;
  a[0]=k;
  for(int i=1;i<n;i++){
    cin>>k;
    if(a[i-1]>max)
    max=a[i-1];
    a[i]=k+max;
  }
  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
