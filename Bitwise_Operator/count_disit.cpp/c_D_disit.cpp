#include <iostream>
using namespace std;
int main(){
    int n;
   
    cout<<"ENtr the number"<<""<<endl;

    cin>>n;
     int N=n;
    int i=0;
    while (n!=0)
    { 
      int digit = n%10;
      if(N%digit == 0){
        i++;
      }
      n=n/10;
    }
    cout<<i;
    
}