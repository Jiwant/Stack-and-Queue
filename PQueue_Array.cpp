#include<iostream>
#include<stdlib.h>
using namespace std;

struct Element
{
	int data;
	int prt;
};



class PQueue
{
	private:
		int num;
		Element *arr;
		int front,rear;
	public:
		PQueue();
		void display();
		void enque(int,int);
		int deque();
		bool PQueueFull();
		bool PQueueEmpty();
		void PQueueStatus();
		~PQueue();
};

PQueue::PQueue()
{
	front=-1;
	rear=-1;
	cout<<"Enter the Size of Array you want to use to build the Queue"<<endl;
	cin>>num;
	arr=new Element[num];
	for(int i=0;i<num;i++)
	{
		arr[i].data=0;
		arr[i].prt=0;
	}
}

PQueue::~PQueue()
{
	delete []arr;
}

void PQueue::display()
{
	if(!PQueueEmpty())
	{
	 cout<<"Displaying the Values of Queue"<<endl;
	 for(int i=front+1;i<=rear;i++)
	  cout<<arr[i].data<<" ";
    }
    else
     cout<<"Queue is Empty"<<endl;
}

void PQueue::enque(int x,int p)
{
	if(!PQueueFull())
	 {
	   int t=1,j=front+1;
	   while(t)
	   {
	   	 if(p<arr[j].prt)
		  {
		    j=j+1;
		    
	      }
	      else
	       t=0;
	   }
	   
	   for(int i=rear-2;i>=j;i--)
	   {
	   	arr[i+1]=arr[i];
	   }
	   arr[j].data=x;
	   arr[j].prt=p;
	   rear++;
	 }
	else
	 cout<<"Queue is Full";
}

int PQueue::deque()
{
	if(!PQueueEmpty())
	{
	 return arr[++front].data;
    }
    else
    {
    	cout<<"Queue is Empty"<<endl;
        return 0;
    }
}

bool PQueue::PQueueFull()
{
	if(rear==num-1)
	 return 1;
	else
	 return 0;
}

bool PQueue::PQueueEmpty()
{
	if(front==rear)
	 return 1;
	else
	 return 0;
}

void PQueue::PQueueStatus()
{
	if(PQueueEmpty()==1)
	 cout<<"Queue is Empty"<<endl;
	else if(PQueueFull()==1)
	 cout<<"Queue is Full"<<endl;
	else
	 cout<<"Partially Full Queue"<<endl;

}

int main()
{
	PQueue x;
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
	 cout<<"Select 4 to Display Contents of Queue"<<endl;
	 cout<<"Select 5 to Exit"<<endl;
	 cin>>opt;
	 switch(opt)
	  {
		case 1:
			cout<<"Enter the Number You want to Enque into Queue"<<endl;
			int val,prt_val;
			cin>>val;
			cout<<"Enter the Priority Value You want to Enque into Queue"<<endl;
			cin>>prt_val;
			x.enque(val,prt_val);
			goto d;
		case 2:
			cout<<x.deque()<<endl;
			goto d;
		case 3:
			x.PQueueStatus();
			goto d;
		case 4:
			x.display();
			goto d;
		case 5:
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
