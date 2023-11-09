#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n);
int main()
{
	const int size=10;
	int array[size];
	for(int i=0;i<10;i++)
	   {
	   	cout<<"Enter  a number : ";
	   	cin>>array[i];
	   }
	for(int i=0;i<10;i++)
	   {
	   
	   	cout<<array[i]<<" , ";
	   }
	   cout<<endl;
	    bubbleSort(array,size);
	for(int i=0;i<10;i++)
	   {
	   
	   	cout<<array[i]<<" , ";
	   }
}
void bubbleSort(int arr[],int n)
 {
 	if(n==1)
 	 {
 	 	return;
	  }
	for (int i=0; i<n-1; i++) 
        if (arr[i] > arr[i+1]) 
            swap(arr[i], arr[i+1]); 
  
    // Largest element is fixed, 
    // recur for remaining array 
    bubbleSort(arr, n-1); 
 	
 	
 	
 	
 }
