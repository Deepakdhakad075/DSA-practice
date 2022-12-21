#include<iostream>
using namespace std;
int main(){
    int a,b;
    int ans;
    cout<<"enter the value of A and B";
    cin>>a;
    cin>>b;
    cout<<" "<<endl;
    char op;
    cout<<"you want to perform operation in A and B";
    cin>>op;
   
      switch (op)
    {
    case '+':
         ans = a+b;
        break;
    case '-':
         ans = a+b;
        break;
    case '/':
         ans = a/b;
        break;
    case '*':
         ans = a*b;
        break;
    
    default:
        break;
     cout<<ans;
    }
   


}