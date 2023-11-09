//Display content of array forward and backward using pointer while loop comparing address teq version1
#include<iostream>
using namespace std;
int main()
{
	const int size=10;
	int array[size]={0,1,2,3,4,5,6,7,8,9};
	int *ptr=NULL;
	ptr=array;
	while(ptr<=&array[size-1])
	{
		cout<<*ptr<<" , ";
		ptr++;
		
	}
	ptr--;
	cout<<endl;
	while(ptr>=array)
	 {
	 	cout<<*ptr<<" , ";
	 	ptr--;
	 }
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
