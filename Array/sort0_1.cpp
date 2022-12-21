#include<iostream>
using namespace std;
void printarray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
      cout<<" "<<arr[i];
    }
    
}
void sort(int arr[],int n){
int left=0; 
int right=n-1;
while (left<right)
{
    while (arr[left]==0 && left<right)
    {
        left++;
    }
    while (arr[right]==1 && left<right)
    {
        right--;
    }
    if(left<right)
    {
       swap(arr[left],arr[right]);
       left++;
       right--;
    }

 }
}




int main(){
    int arr[7]={0,1,1,0,1,0,0};
   int n=7;
    sort(arr,n);
   printarray(arr,n);
}