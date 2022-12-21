#include<iostream>
using namespace std;
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
   
    cout<<"my name is"<<" "<<name;
    cout<<"size of string is"<< sizeofString(name);
  return 0;
}