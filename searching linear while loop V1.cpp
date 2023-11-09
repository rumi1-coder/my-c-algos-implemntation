//linear search algoritham also known as sequential search in c++
//using while loop
// version 1 only printing found or not
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
int i=0;
  while(i<size&&found==false)
       {
     	if(array[i]==search)
	      {
	 	    found=true;
	 	     position=i;
	 	
	      }
	    i++;
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
