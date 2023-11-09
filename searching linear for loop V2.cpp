//linear search algoritham also known as sequential search in c++
//using for loop
//this program is not very efficent so V2
#include<iostream>
using namespace std;
int main()
{

//array defination using implicit array sizeing with initialization list
  int array[]={1,2,3,3,4,0,7,0,8,9};
//varible for a number to be search
int search;
cout<<"ENTER a number to be search : ";
cin>>search;
//a direct approch to finding
bool loop=false;
   for(int i=0;i<sizeof(array)/sizeof(int);i++)
       {
	     if(array[i]==search)
	        {
	          cout<<search<<" is found at index "<<i;
	          loop=false;
	          break;
		   }
		   loop=true;
	
        }  
	
	if(loop)
       {
    	  cout<<search<<" is not found at any index ";
       }
	
}
