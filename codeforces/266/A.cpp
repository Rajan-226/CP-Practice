#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  int n,k=0;
  scanf("%d",&n);
  char s[n+1];
  scanf("%s",s);
  for(int i=0;i<n-1;i++){
    if(s[i]==s[i+1])
    k++;
  }
  printf("%d",k);
}
