//dynamically allocating a 1D array
#include<iostream>
using namespace std;
int main()
{
	int *ptr;
	ptr=new int [10];
	for(int i=0;i<10;i++)
	{
		cout<<"enter a number : ";
		cin>>ptr[i];
	}
	cout<<endl;
for(int i=0;i<10;i++)
	{
	cout<<ptr[i]<<" , ";
	}
	delete [] ptr;
}
