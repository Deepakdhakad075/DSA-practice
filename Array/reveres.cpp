#include <iostream>

using namespace std;
void swap(int arr[],int size,int start,int end){
    int temp;
    arr[start]=temp;
    arr[end]=arr[start];
    arr[start]=temp;
}
void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start >= end)
    {
       swap(arr,size, start,end);
        start++;
        end--;
    }
}
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[10] = {1, 3, 5, 7, 8, 9, 11, 13, 15, 19};
    int ar[5] = {1, 2, 3, 4, 5};
    reverse(arr, 10);
    
    printarray(arr, 10);
    
}