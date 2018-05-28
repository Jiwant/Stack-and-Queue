#include<iostream>
using namespace std;

class arr
{
	private:
	  int *a;
	  int n,l;
	
	public:
	  arr()
	  {
		 cout<<"Enter the Number of Elements of Array"<<endl;
		 cin>>n;
		 a=new int[n];
		 for(int i=0;i<n;i++)
		  a[i]=0;
	  }
	  
	  ~arr()
	  {
		 delete []a;
	  }
	  
	  void get()
	  {
		  
		  cout<<"Enter the Number of values you want to enter"<<endl;
		  cin>>l;
		  for(int i=0;i<l;i++)
		   cin>>a[i];
	  }
	  
	  void disp()
	  {
	  	  for(int i=0;i<n;i++)
	  	   cout<<a[i]<<" ";
	  	  cout<<endl;
	  }
	  
	  void insert(int x)
	  {
	  	int t=1,j=0;
	  	while(t)
	  	{
	  		if(x>a[j])
	  		{
	  			j++;
	  			
			}
			else
			 t=0;
			
		}
		for(int i=n-2;i>=j;i--)
		 {
		  a[i+1]=a[i];
		 }
		a[j]=x;
	 }	
};

int main()
{
	arr x;
	x.get();
	x.disp();
	x.insert(3);
	x.disp();
	return 0;
}
