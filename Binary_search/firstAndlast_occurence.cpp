#include<iostream>
using namespace std;
int first_occurence(int arr[],int key,int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while (start<=end)
    {
        if(key==arr[mid]){
        ans=mid;
        end=mid-1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
    
}
int last_occurence(int arr[],int key,int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while (start<=end)
    {
        if(key==arr[mid]){
        ans=mid;
        start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
    
}

int main()
{
    int arr[10]={1,2,2,5,5,5,6,6,8,8};
    int key=5;

    
    cout<<" "<<endl;
    int f_index = first_occurence(arr,key,10);
   int l_index = last_occurence(arr,key,10);
    cout<<"fist occurence is"<<f_index<<endl;
   cout<<"fist occurence is"<<l_index<<endl;
   
  return 0;
}