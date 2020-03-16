#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  char s[100],k=0;
  scanf("%s",s);
  int a[27];
  for(int i=0;i<26;i++)
    a[i]=0;
  for(int i=0;s[i]!='\0';i++)
    a[s[i]-'a']+=1;
  for(int i=0;i<26;i++)
    if(a[i]!=0)
      k++;
  if(k%2==0)
  printf("CHAT WITH HER!");
  else
  printf("IGNORE HIM!");
}
