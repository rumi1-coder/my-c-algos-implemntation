//bubble sorting using for loop
//decending order
#include<iostream>
using namespace std;
int main()
{
//array defination using a named constant as array size declarator
  const int size=10;
  int array[size]={1,5,7,3,4,0,9,2,8,1};

//array display before sorting
cout<<"array before sorting ";
for(int i=0;i<size;i++)
  {
    cout<<array[i]<<" , ";
  }
  int temp;
  for(int i=0;i<size;i++)
     {
     	for(int j=0;j<size;j++)
     	  {
     	  	if(array[j]<array[j+1])
     	  	  {
     	  	  	temp=array[j+1];
			    array[j+1]=array[j];
			    array[j]=temp;
					 
				 }
     	  	
    
		   }
	 }
//array display after sorting
cout<<"array after sorting ";
for(int i=0;i<size;i++)
  {
    cout<<array[i]<<" , ";
  }
}
