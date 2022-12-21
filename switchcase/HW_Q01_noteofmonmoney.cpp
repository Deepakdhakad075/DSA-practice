#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the total money"<<endl;
    cin>>n;
     int H;
     int F;
     int T;
     int O;
     while (n!=0)
     {
        if(n>100){
        H = n/100;
        n=H;
     }
     else if(n>50){
         F=n/50;
         n=F;
     }
     else if(n>20){
        T = n/20;
        n=T;
     }
     else{
        O=n/1;
        n=O;
     }
     }
     cout<<H<<F<<T<<O;
     
     
     

}