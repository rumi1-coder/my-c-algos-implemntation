//finding maximum number in array and returning pointer to it

/*Problem 2: Write a function maximum (double* a, int length).
 Pass 2 parameters, the first one represents pointer to array and the second one is the length of the array. 
 The function should search for the maximum number in array and return a pointer to it.*/ 
#include<iostream>
using namespace std;
//function prototype
double* maximum(double* array,int size);
int main()
{
//varible for array size
	int size;
	double array[]={2.1,3.2,4.3,7.1,8.1};
	size=sizeof(array)/sizeof(double);

//dynamically allocating an array	
	/*	cout<<"ENTER ARRAY SIZE : ";
	cin>>size;
	double *array=new double[size];
	for(int i=0;i<size;i++)
	   {
	   	 cout<<"enter a double number : ";
	   	 cin>>array[i];
	   }*/
	
//call to the function
	double *maxi=maximum(array,size);

//looop for displaying the array content	
	cout<<"the array is : ";
	for(int i=0;i<size;i++)
	    {
	    	cout<<array[i]<<" , ";
		}
	cout<<"\nthe maximum number is : "<<*maxi<<endl;
	delete maxi;
	
	
}
//function for maximum number
double* maximum(double *array,int size)
       {
       	//temproy pointer varible for holding the maximum number
       	double *maxi=new double;
		   *maxi=array[0];
        
        //loop for  finding maximum number
       	for(int i=0;i<size;i++)
       	  {
       		if(array[i]>*maxi)
       	    	{
       			  *maxi=array[i];
       			  
			    }
		 }
		 //returning pointer to the maximum
		   return  maxi;
		   	
	   }
/*888888888888ANSWER TO A QUESTION 88888888888888888888
The second version does work because the variable is allocated on the free store, 
which is not bound to the lifetime of the function call. However, 
you are responsible for deleteing the allocated int.

int* func2()
{
    int* p;
    p = new int;
    *p = 1;
    return p;
}

int main()
{
    int* p = func2();
     pointee still exists 
    delete p; // get rid of it
}*/
