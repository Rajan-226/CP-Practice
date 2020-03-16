#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  int n,k=0;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c );
    if(a==1&&b==1||b==1&&c==1||c==1&&a==1)
      k++;
  }
  printf("%d",k);
}
