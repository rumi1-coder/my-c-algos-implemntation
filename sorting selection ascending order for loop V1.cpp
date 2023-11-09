//selection sorting using for loop
//acending order
#include<iostream>
using namespace std;
int main()
{
//array defination using a named constant as array size declarator
  const int size=10;
  int array[size]={13,62,36,75,87,23,98,44,73,14};

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
		if(array[j]<array[i])
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
