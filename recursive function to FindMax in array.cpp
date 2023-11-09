#include<iostream>
using namespace std;
int FindMax(int arr[],int StartingIndex,int length);
int main()
{
	
	const int size=10;
	int array[size];
	for(int i=0;i<size;i++)
	   {
	   	cout<<"Enter a number : ";
	   	cin>>array[i];
	   }
	
	
	
	
	
	
}
int FindMax(int arr[],int StartingIndex,int length)
{
	int temp=0;
	if(StartingIndex>=length)
	 {
	 	return arr[0];
	 }
	 else if(arr[StartingIndex]>arr[0])
	        {
	        	temp=arr[0];
	        	arr[0]=arr[StartingIndex];
	        	arr[StartingIndex]=temp;
	        	FindMax(arr,StartingIndex+1,length);
	        	
			}
		else
		{
			FindMax(arr,StartingIndex+1,length);
		}
	
	
	
	
	
	
	
	
	
	
}
