//to access a 2d array as 1d array


#include<iostream>
using namespace std;
int main()
{
/*const int size=20;
int array[size];
for(int i=0;i<size;i++)
{
	cout<<"enter a number : ";
	cin>>array[i];
	}*/
/*
const int rows=4;
const int col=5;
int array[rows][col];
for(int i=0;i<rows;i++)
{
	for(int j=0;j<col;j++)
	{
		cout<<"enter  a number : ";
		cin>>array[i][j];
	}
}
cout<<endl<<endl;
for(int i=0;i<rows;i++)
{
	for(int j=0;j<col;j++)
	{
		
		cout<<array[i][j]<<" ";
	}
	cout<<endl;
}*/
cout<<endl<<endl;
int array2[rows*col];
for(int i=0;i<rows;i++)
{
	for(int j=0;j<col;j++)
	{
		cout<<"enter a number : ";
		cin>>array2[i*col+j];
	}
	}	
for(int i=0;i<rows;i++)
{
	for(int j=0;j<col;j++)
	{
		cout<<array2[i*col+j]<<" ";
    }
    cout<<endl;
}
	

	
	
	
	
}
