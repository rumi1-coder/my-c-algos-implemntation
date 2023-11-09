//this program  display  a digital clock with .fill() member function
//that changes fill caracter which by default is freespace



#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
 cout<<fixed<<right;
 cout.fill('0');
 for(int h=0;h<60;h++)
 {
 	for(int m=0;m<60;m++)
 	 {
 	 	for(int s=0;s<60;s++)
 	 	  {
 	 		cout<<setw(2)<<h<<" : "<<setw(2)<<m<<" : "<<setw(2)<<s<<endl;
		  }
 	 	
 	 	
	  }
 }
	
	
	
	
	
	
	
	
	
	
}
