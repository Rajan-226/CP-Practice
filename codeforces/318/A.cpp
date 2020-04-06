#include<iostream>
using namespace std;
int main(){
    long long int n,k;
    cin>>n>>k;
    n=(n+1)/2;
    k<=n?cout<<2*k-1:cout<<2*(k-n);
}