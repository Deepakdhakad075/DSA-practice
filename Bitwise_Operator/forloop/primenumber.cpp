#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
  bool primeno = 1;
  for(int i=2; i<n; i++){
    if(n%i==0){
        primeno = 0;
        break;
    }
  }
  if(primeno ==0){
    cout<<n << " is not a prime number"<<endl;
  }
  else{
    cout<< n <<" is a prime number"<<endl;
  }
}