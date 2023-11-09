//multiplying an array element by 2  and summing it


/*Problem 5: Write a function named as mutliplyBy2AndSum that takes
 array of type double (first parameter of the function) and its size 
 of type integer (second parameter). You are required to multiply each 
 value of the array with 2 using pointer notation. Store the value on 
 the same index and return the sum of all values. Input: {8.0, 5.0, 12.0, 14.0, 9.0} Output: 96.0 */
#include<iostream>
using namespace std;
double mutliplyBy2AndSum(double *array,int size);
int main()
 {
 	int size;
 	double array[]={1.2,2.3,4.1,5.2,6.1};
 	size=sizeof(array)/sizeof(double);
 	/*cout<<"Enter a number : ";
 	cin>>size;
 	double *array=new double [size];
 	for(int i=0;i<size;i++)
 	    {
 	     cout<<"enter a double number: ";
 	     cin>>array[i];
 	    }
 	*/
 	double total=mutliplyBy2AndSum(array,size);
 	cout<<"the array before is : ";
 	for(int i=0;i<size;i++)
 	    {
 	     cout<<array[i]<<" , ";	
		}
		mutliplyBy2AndSum(array,size);
	cout<<"\nthe array after is : ";
 	for(int i=0;i<size;i++)
 	    {
 	     cout<<array[i]<<" , ";	
		}
	cout<<"\nThe sum is : "<<total;
	 
	 
 	
 	
 }
 double mutliplyBy2AndSum(double *array,int size)
   {
   	double total=0;
 	for(int i=0;i<size;i++)
 	   {
 	   	 array[i]=array[i]*2;
 	   	 total=total+array[i];
 	
	   }
	  return total;
 	
 	
   }
 
