#include<iostream>
#include<cctype>
using namespace std;
bool IDchecker(char ID[],int IDsize);
int main()
{
 const int IDsize=7;
 char ID[IDsize];
 cout<<"Enter your ID# (format e.g LLLNNN ~Lletter ~Nnumber) :";
 cin.getline(ID,IDsize);
 if(IDchecker(ID,IDsize))
   {
   	cout<<ID<<" is valid\n";
   }
   else
   {
   	cout<<ID<<" is not valid\n";
   }
	
	
}
bool IDchecker(char ID[],int IDsize)
{
	for(int i=0;i<3;i++)
	  {
	  	if(!isalpha(ID[i]))
	  	   {
	  	   	 return false;
		   }
	  }
	for(int i=3;i<IDsize-1;i++)
	  {
	  	if(!isdigit(ID[i]))
	  	   {
	  	   	 return false;
		   }
	  }
	  return true;
}
