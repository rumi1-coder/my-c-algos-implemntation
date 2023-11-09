//linear search algoritham also known as sequential search in c++
//using for loop
//print all indexes and number of times
//this program is not very efficent so V1
#include<iostream>
using namespace std;
int main()
{

//array defination using a named constant as array size declarator
  const int size=10;
  int array[size]={1,2,3,3,4,0,7,0,8,9};
//varible for a number to be search
int search;
cout<<"ENTER a number to be search : ";
cin>>search;
//varible for storing index if number is found and controler boolien varible
bool found=false;
int position;
   for(int i=0;i<size;i++)
       {
	     if(array[i]==search)
	        { 
	          found=true;
	          cout<<search<<" is found at index "<<i<<endl;
		    }
	    
        }  
	
	
if(!found)
    {
    	cout<<search<<" is not found at any index ";
    }

	
}
