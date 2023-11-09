
//counting the number of even numberes in an array using pointers and function

/*Problem 3: Write a function countEven(int*, int) which receives an integer 
array and its size, and returns the count of even numbers in an array. 
*/
#include<iostream>
using namespace std;
int countEven(int* ,int);
int main()
{
	int size;
	int array[]={1,2,3,4,5,6,7,8,9,0,12};
	size=sizeof(array)/sizeof(int);
	/*cout<<"enter size of array : ";
	cin>>size;
	int *array=new int[size];
	for(int i=0;i<size;i++)
	    {
	    	cout<<"enter a number : ";
	    	cin>>array[i];
		}
		*/
	int counter=countEven(array,size);
	cout<<"the array is : ";
	for(int i=0;i<size;i++)
	  {
	  	cout<<array[i]<<" , ";
	  }
	  cout<<"\nthe number of even numbers in the array is : "<<counter<<endl;
		
	
}
int countEven(int *array,int size)
  {
  	int counter=0;
  	for(int i=0;i<size;i++)
  	   {
  	   	//if(*(array+i)%2==0)
  	   	if((array[i]%2)==0)
  	   	  {
  	   	  	counter++;
  	   	  	//counter=counter+1;
		  }
  	   	
  	   	
		 }
		 return counter;
	
	
	
  }
