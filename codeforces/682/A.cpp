#include <bits/stdc++.h>
using namespace std;
int main(){
  long long int n,m,sum=0;
  cin>>n>>m;
  for(int i=1;i<=n;i++){
   int k,c;
   c=(i+m)/5;
   k=i/5;
   sum+=c-k;
  }
  cout<<sum;
}
