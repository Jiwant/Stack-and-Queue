#include<iostream>
#include<stdlib.h>
using namespace std;

class Queue
{
	private:
		int num;
		int *arr;
		int front,rear;
	public:
		Queue();
		void enque(int);
		int deque();
		bool QueueFull();
		bool QueueEmpty();
		void QueueStatus();
		~Queue();
};

Queue::Queue()
{
	front=-1;
	rear=-1;
	cout<<"Enter the Size of Array you want to use to build the Queue"<<endl;
	cin>>num;
	arr=new int[num];
}
Queue::~Queue()
{
	delete []arr;
}

void Queue::enque(int x)
{
	if(!QueueFull())
	 {
	   arr[++rear]=x;
     }
	else
	 cout<<"Queue is Full";
	 
}

int Queue::deque()
{
	if(!QueueEmpty())
	{
	 return arr[++front];
    }
    else
    {
    	cout<<"Queue is Empty"<<endl;
        return 0;
   }
}

bool Queue::QueueFull()
{
	if(rear==num-1)
	 return 1;
	else
	 return 0;
}

bool Queue::QueueEmpty()
{
	if(front==rear)
	 return 1;
	else
	 return 0;
}

void Queue::QueueStatus()
{
	if(QueueEmpty()==1)
	 cout<<"Queue is Empty"<<endl;
	else if(QueueFull()==1)
	 cout<<"Queue is Full"<<endl;
	else
	 cout<<"Partially Full Queue"<<endl;

}

int main()
{
	Queue x;
	int opt;
	char controlscreen;
	
	int i=1;
	while(i)
	{
	 
	 system("cls");
	 cout<<"Enter the Option Number You want to choose"<<endl;
	 cout<<"Select 1 to Enque Data into Queue"<<endl;
	 cout<<"Select 2 to Deque Data from Queue"<<endl;
	 cout<<"Select 3 to Display Status of Queue"<<endl;
	 cout<<"Select 4 to Exit"<<endl;
	 cin>>opt;
	 switch(opt)
	  {
		case 1:
			cout<<"Enter the Number You want to Enque into Queue"<<endl;
			int val;
			cin>>val;
			x.enque(val);
			goto d;
		case 2:
			cout<<x.deque()<<endl;
			goto d;
		case 3:
			x.QueueStatus();
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
