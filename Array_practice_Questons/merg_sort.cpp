#include<iostream>
#include<vector>

using namespace std;
 void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
        int i=0; int j=0; int k=0;
      while (i<n && j<m)
      {
        if(arr1[i] < arr2[j])
         {
            arr3[k] = arr1[i];
             k++;
             i++;
              } 
               
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
      }
      while(i<n)
      {
        arr3[k++] = arr1[i++];
      }
      while (j<m)
      {
      arr3[k++] = arr2[j++];   
      }
   
}
void print_array(int arr3[],int n){
    for(int i=0; i<n; i++){
        cout<<arr3[i]<<" ";
    }
}
int main()
{  
    int arr1[5]={2,4,5,6,3};
    int arr2[4]={7,9,1,8};
   
    int arr3[9]={0};
    merge(arr1,5,arr2,4,arr3);
    print_array(arr3,9);
   // sort(arr3.begin(),arr3.end());
  return 0;
}