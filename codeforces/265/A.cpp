#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  char s[51],t[51],k=0;
  scanf("%s %s",s,t);
  for(int i=0;t[i]!='\0';i++){
    if(t[i]==s[k])
      k++;
  }
  printf("%d",k+1 );
}
