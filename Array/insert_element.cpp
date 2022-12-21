#include<iostream>
using namespace std;
#define max 7
 class Stack
{  
    	int top=-1;
    int stack1[max]; 
    
    public:
   
 
   void push();
   void pop();
   void traverse();
};
   
   void Stack::push() 
   {
int x;
   	if(top==(max-1)){
   		cout<<"\n Stack is Overflow / Full "<<endl;
   		return;
	   }
	   else {
	   	cout<<"\n Enter element : ";
	   	cin>>x;
	   	top++;
	   	stack1[top]=x;
	   }
      
}
 
void Stack::pop()
{ int x;
  if (top== -1){
  	cout<<"\n Stack is Underflow / Empty "<<endl;
  	return;
  }
	else {
		x=stack1[top];
		top--;
		cout<<"\n Delete / Pop element : "<<x<<endl;
	}
}
 void Stack :: traverse(){
 	if(top == -1){
 		cout<<"\n Stack is Empty "<<endl;
 		return;
	 }
	 
 	else {
 		cout<<"\n Display : \n Your stack : ";
 		for (int i=0;i<=top;i++){
 			cout<<stack1[i]<<" ";
		 }
		 cout<<endl;
	 }
 	
 }

 
int main()
{
	Stack s;
	int k;
	
    cout<<"-------STACK------"<<endl;
    cout<<" Stack limit is ' 7 ' "<<endl;
    cout<<" \n Press 1 to push \n Press 2 to pop \n Press 3 to traverse \n Press 4 to exit "<<endl;	
	do{
cout<<"\n Enter Your choise \n";
    cout<<" Note : Enter Only Numbers (1,2,3,4) :";
    cin>>k;
    switch (k){
    	case 1:
    	s.push();
    	break;
    	
    	case 2:
    	s.pop();
    	break;
    	
    	case 3:
    	s.traverse();
    	break;
    		
    	case 4:
    	break;
    	
    	default :
    		cout<<" Invalid number \n Plesae try again"<<endl;
				}
	}while (k!=4);
	
	cout<<"\n You are exit \n ------------------------------";
    return 0;
}