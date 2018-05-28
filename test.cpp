#include<iostream>
using namespace std;

struct Element
{
	int x;
	int y;
};

int main()
{
	Element *arr;
	int num;
	cout<<"Enter the Value of Number"<<endl;
	cin>>num;
	arr=new Element[num];
	cout<<"Enter x of element"<<endl;
	cin>>arr[0].x;
	cout<<arr[0].x;
	return 0;
}
