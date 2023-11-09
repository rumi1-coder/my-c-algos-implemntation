//dynamically allocating a 2D array
#include<iostream>
using namespace std;
int main()
{
	const int rows=4;
	const int col=5;
	int **ptr;
	ptr=new int *[rows];
	for(int i=0;i<rows;i++)
	  {
	    ptr[i]=new int[col];
	  }
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<"enter a number : ";
			cin>>ptr[i][j];
					}
	}
	cout<<endl<<endl;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<col;j++)
		{
		 cout<<ptr[i][j]<<" ";
		
		}
		cout<<endl;
	}
	for(int i=0;i<rows;i++)
	{
		delete [] ptr[i];
	}
	delete [] ptr;
	
	
	
	
	
	
	
	
}
