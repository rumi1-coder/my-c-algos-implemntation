//Display content of array forward and backward using pointer version1 


#include<iostream>
using namespace std;
int main()
{
	const int size=10;
	int array[size]={0,1,2,3,4,5,6,7,8,9};
	int *ptr=NULL;
	ptr=array;
	for(int i=0;i<size;i++)
	{
		cout<<ptr[i]<<" , ";
		
	}
	cout<<endl;
	for(int i=size-1;i>=0;i--)
	{
		cout<<ptr[i]<<" , ";
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
