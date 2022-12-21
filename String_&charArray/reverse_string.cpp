#include<iostream>
using namespace std;
void reverse(char name[],int len){
    int s=0;
    int e=len-1;
    while (s<=e)
    {
      swap(name[s++],name[e--]);
    }
    
}
int sizeofString(char name[]){
    int count=0;
    for(int i=0; name[i] != '\0'; i++){
        count++;
    }

    return count;
    
}
int main()
{
    char name[10];
    cout<<"enter your name  "<<endl;
    cin>>name;
   int len=sizeofString(name);
    cout<<"my name is"<<" "<<name;

    reverse(name,len);
    cout<<endl;
    cout<<name;
  return 0;
}