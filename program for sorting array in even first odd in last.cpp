//program for sorting array in even first odd in last
/* Problem 1: Write a method EvenSort() to sort the numbers 
  in array in such a way that even numbers should be placed in
  the start of array and odd numbers should appear after even numbers.
  Then sort all the even numbers in array. You are only allowed to use
   pointer arithmetic i.e. *(ptr + 3) 
  */
#include<iostream>
using namespace std;
//function prototype
int *EvenSort(int array[],int size);
int main()
{
//variblefor array size
//hardcoding in array with explicit array sizing
	int size;
	int array[]={1,2,3,4,5,6,7,8,9,0};
	size=sizeof(array)/sizeof(int);
	
//code for dynamic array allocation
	/*cout<<"Enter a number for array size : ";
	cin>>size;
	int *array=new int [size];
	for(int i=0;i<size;i++)
	  {
	  	cout<<"Enter a number : ";
	  	cin>>*(array+i);
	  	
	  }*/
	  
//to display content of array before sorting
	  cout<<"The array before unsorted :\n ";
	  for(int i=0;i<size;i++)
	     {
	     	cout<<*(array+i)<<" , ";
		 }
		 
//function call
	int *temp=EvenSort(array,size);
	
//to display content of array after sorting
	 cout<<"\nThe array after sorting :\n ";
        for(int i=0;i<size;i++)
	     {
	     	cout<<*(temp+i)<<" , ";
		 } 
		 delete temp; 

}

//function for sorting the array first in e ven odd order then an ascending order
int *EvenSort(int array[],int size)
    {
    	
    	//temproy array dynamically allocated
    	int *temp=new int [size];
    	//varible for  
    	int tem=0;
    	//counter for even number count in the array
    	int index=0;
    	
    	//loop for arranging the numbers in ascending and decending order
    	for(int i=0, j=size-1,k=0;i<size;i++)
            {
            	if(*(array+i)%2==0)
            	  {
            	  	*(temp+k)=*(array+i);
            	  	index++;
            	  	k++;
				  }
				else
				  {
				  	*(temp+j)=*(array+i);
				  	j--;
				  }
			}
	
	
    	//loop for sorting the even numbers in the array in ascending order
			for(int i=0;i<index;i++)
			   {
			   	for(int j=i+1;j<index;j++)
			   	   {
			   	   	if(*(temp+j)<*(temp+i))
			   	   	   {
			   	   	   	tem=*(temp+i);
			   	   	   	*(temp+i)=*(temp+j);
			   	   	   	*(temp+j)=tem;
			   	   	   	
			   	   	   	
						}
			   	   	   	
					}
			   	   	
				}
			   
	
    	return temp;
    	
	}
