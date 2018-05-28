#include<iostream>
#include<stdlib.h>
using namespace std;

class Stack
{
	private:
		int num;
		int *arr;
		int top;
	public:
		Stack();
		void push(int);
		int pop();
		bool StackFull();
		bool StackEmpty();
		void StackStatus();
		~Stack();
};

Stack::Stack()
{
	top=-1;
	cout<<"Enter the Size of Array you want to use to build the Stack"<<endl;
	cin>>num;
	arr=new int[num];
}
Stack::~Stack()
{
	delete []arr;
}

void Stack::push(int x)
{
	if(!StackFull())
	 arr[++top]=x;
	else
	 cout<<"Stack Overflow";
	 
}

int Stack::pop()
{
	if(!StackEmpty())
	{
	 int x=arr[top];
	 top--;
	 return x;
    }
    else
     cout<<"Empty Stack"<<endl;
     return 0;
}

bool Stack::StackFull()
{
	if(top==num-1)
	 return 1;
	else
	 return 0;
}

bool Stack::StackEmpty()
{
	if(top==-1)
	 return 1;
	else
	 return 0;
}

void Stack::StackStatus()
{
	if(StackEmpty()==1)
	 cout<<"Empty Stack"<<endl;
	else if(StackFull()==1)
	 cout<<"Stack Overflow"<<endl;
	else
	 cout<<"Partially Full Stack"<<endl;

}

int main()
{
	Stack x;
	int opt;
	char controlscreen;
	
	int i=1;
	while(i)
	{
	 
	 system("cls");
	 cout<<"Enter the Option Number You want to choose"<<endl;
	 cout<<"Select 1 to Push Data into Stack"<<endl;
	 cout<<"Select 2 to Pop Data from Stack"<<endl;
	 cout<<"Select 3 to Display Status of Stack"<<endl;
	 cout<<"Select 4 to Exit"<<endl;
	 cin>>opt;
	 switch(opt)
	  {
		case 1:
			cout<<"Enter the Number You want to push into Stack"<<endl;
			int val;
			cin>>val;
			x.push(val);
			goto d;
		case 2:
			cout<<x.pop()<<endl;
			goto d;
		case 3:
			x.StackStatus();
			goto d;
		case 4:
			i=0;
			break;
				
		d:
		default:
			cout<<endl<<"Press Any Key to continue"<<endl;
			cin>>controlscreen;
			break;			
	  }  
    }
	
    return 1;	
}
