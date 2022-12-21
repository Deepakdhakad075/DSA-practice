#include<iostream>
using namespace std;
int searching(int arr[],int n,int key)
{
     for(int i=0; i<n; i++)
     {
        if(key == arr[i])
        {
            return 1;
        }
     }
    return -1;
     
     
}
int main(){
    int arr[5];
    int key;
    cout<<"enter the 10 element of the array";
    for(int i=0; i<5; i++){
      cin>>arr[i];
    }
    cout<<"Enter the key you want check";
    cin>>key;
   int ans = searching(arr,5,key);
  if(ans==1){
    cout<<"key is present";
  }
  else{
    cout<<"key is not present";
  }
}