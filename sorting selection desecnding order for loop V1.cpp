//selection sorting using for loop
//acending order
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
   	for(int j=i+1;j<size;j++)
   	   {
   	   	if(array[i]<array[j])
   	   	{
   	   		temp=array[i];
   	   		array[i]=array[j];
   	   		array[j]=temp;
	    }
		  }
   }
//array display after sorting
cout<<"\narray after sorting ";
for(int i=0;i<size;i++)
  {
    cout<<array[i]<<" , ";
  }
}
