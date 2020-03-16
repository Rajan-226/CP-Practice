#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  int r,c,k;
  for(int i=0;i<5;i++)
    for(int j=0;j<5;j++){
      int k;
      scanf("%d",&k);
      if(k==1){
      r=i;
      c=j;
      }
    }
  k=r<2?2-r:r-2;
  k+=c<2?2-c:c-2;
  printf("%d",k);
}
