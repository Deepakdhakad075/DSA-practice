#include<iostream>
using namespace std;
void Insertion_Sort(int arr[],int n){
     int i,j,key;
     for(int i=1; i<n; i++){
        key=arr[i];
        j = i-1;
        while (j>=0 && arr[j]>key)
        {
           arr[j+1]=arr[j];
           j=j-1;
        }
        arr[j+1]=key;
     }

}
void PrintArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i];
        cout<<" ";
    }
}
int main()
{
    int arr[5];
    cout<<"please enter the 5 elements";
    for(int i=0; i<5; i++){
      cin>>arr[i];
    }
     Insertion_Sort(arr,5);
     PrintArray(arr,5);
    
  return 0;
}