//binary search using while loop
//version 1
//printing only found or not
#include<iostream>
using namespace std;
int main()
{
//array defination using a named constant as array size declarator
	const int size=10;
	int array[size]={1,2,3,4,5,5,6,7,8,8};
//varible for a number to be search
int search;
cout<<"ENTER a number to be search : ";
cin>>search;

//requierd varible for binary search
int firstIndex=0;
int lastIndex=size-1;
int middleIndex;
int position=-1;
bool found=false;

while(firstIndex<=lastIndex&&!found)
{
	middleIndex=(firstIndex+lastIndex)/2;
	
	if(array[middleIndex]==search)
	{
		position=middleIndex;
		found=true;
	}
	else if(search<middleIndex)
	{
	lastIndex=middleIndex-1;	
		
	}
	else
	{
		firstIndex=middleIndex+1;
	}
	
	
	
}
if(found)
    {
    	cout<<search<<" is found at index "<<position;
	}	
else
     {
    	cout<<search<<" is not found at any index ";
	}	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
