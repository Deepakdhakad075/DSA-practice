#include<iostream>
#include<string>
#include<array>
using namespace std;
char lowerCase(char ch){
if(ch>='a'&&ch<='z'){
    return ch;
}
else{
    char temp=ch - 'A' + 'a';
    return temp;
}
}
int sizeofString(char name[]){
    int count=0;
    for(int i=0; name[i] != '\0'; i++){
        count++;
    }

    return count;
    
}
bool checkpalindrome(char s[],int n){
    int i=0;
   int j = n-1;
   while (i<=j)
   {
      if(lowerCase(s[i])==lowerCase(s[j])){
        i++;
        j--;
      }
      else{
        return 0;
      }
   }
   return 1;
   
}
int main()
{ char name[10];
    cout<<"enter your name  "<<endl;
    cin>>name;
   int len=sizeofString(name);
  bool ans=checkpalindrome(name,len);  
  if(ans){
     cout<<"string is palindrome";
  }
  else{
    cout<<"not palindrome";
  }
  return 0;
}