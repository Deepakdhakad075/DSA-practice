#include<iostream>
using namespace std;
void Selection_Sort(int arr[],int n){
     for(int i=0; i<n-1; i++){
        int minIndex=i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[minIndex]){
                
                minIndex=j;
                
            }
          
           
        }
        swap(arr[i],arr[minIndex]);
     
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
     Selection_Sort(arr,5);
     PrintArray(arr,5);
    
  return 0;
}