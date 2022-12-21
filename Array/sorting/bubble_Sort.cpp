#include<iostream>
using namespace std;
void Bubble_Sort(int arr[],int n){
     for(int i=1; i<n-1; i++){
        bool swapped = false;
        for (int j=0; j<n-i; j++)
        {   
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
        
      
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
     Bubble_Sort(arr,5);
     PrintArray(arr,5);
    
  return 0;
}