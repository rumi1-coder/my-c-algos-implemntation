/*this program uses a function isupper() that takes an 
arragument and return true for upper and 0 for lower 
actually it returns an int non zero for upper and 0
 for lowerand test weather the caracter typed is upper 
 or in lower case*/

#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter a character : ";
	ch=cin.get();
	if(isupper(ch))
	  {
	  	cout<<"THe caracter you typed is an uppercase!"<<endl;
	  }
	else
	{
		cout<<"the caracter you typed is an lowercase!"<<endl;
	}
}
