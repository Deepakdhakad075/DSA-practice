#include<iostream>
using namespace std;
int sumofarr(int arr[],int n){
    int sum=0;
    for(int i=0; i<5;i++){
        sum=sum+arr[i]; 
    }
    return sum;
}
int main(){
    int arr[5];
    cout<<"ENter the array element";
    for(int i=0;  i<5; i++){
        cin>>arr[i];
    }
    cout<<"sum of array is"<<" ="<<sumofarr(arr,5);
}