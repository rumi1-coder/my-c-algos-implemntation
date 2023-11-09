#include<iostream>
#include<cctype>
using namespace std;
int main()
{
  int choice;	
  char ch;
  cout<<"In this program you can test \na charater for all posiible\n mentioned cases \n\n";
  cout<<"Enter a character : ";
  cin>>ch;
  cout<<"\n               CHECKER MENU\n";
  cout<<"             CHOOSE AN OPTION\n\n";
  cout<<"FOR  upper                       press    : 1\n";
  cout<<"FOR  lower                       press    : 2\n";
  cout<<"FOR  letter                      press    : 3\n";
  cout<<"FOR  letter  digit               press    : 4\n";
  cout<<"FOR  space                       press    : 5\n";
  cout<<"FOR  printible                   press    : 6\n";
  cout<<"FOR  printible other then digit  press    : 7\n";
  cout<<"FOR   digit 0 to 9               press    : 8\n";
  cin>>choice;
      
   
  switch(choice)
	{
	  case 1:
	    {
		  if(isupper(ch))
	       {  
		      	cout<<"THe character you typed is an uppercase!"<<endl;
	       }
	     else
	      {
		    	cout<<"THe character you typed is not an uppercase!"<<endl;
		
	      }
	      break;
	
       }
       case 2:
	    {
		  if(islower(ch))
	       {  
		     	cout<<"THe character you typed is an lowercase!"<<endl;
	       }
	     else
	      {
		   	    cout<<"THe character you typed is not an lowercase!"<<endl;
		
	      }
	      break;
	
       }
       case 3:
	    {
		  if(isalpha(ch))
	       {  
		      	cout<<"THe character you typed is a letter of alphabits!"<<endl;
	       }
	     else
	      {
		    	cout<<"THe character you typed is not a letter of alphabits!"<<endl;
		
	      }
	      break;
	
       }
       case 4:
	    {
		  if(isalnum(ch))
	       {  
		       	cout<<"THe character you typed is a letter or digit!"<<endl;
	       }
	     else
	      {
		   	 cout<<"THe character you typed is not a letter or digit!"<<endl;
		
	      }
	      break;
	
       }
       case 5:
	    {
		  if(isspace(ch))
	       {  
		     	cout<<"THe character you typed is a freespace(\n,' ',\t horizontal tab,\v vertical tab)!"<<endl;
	       }
	     else
	      {
		
		   cout<<"THe character you typed is not a freespace(\n,' ',\t horizontal tab,\v vertical tab)!"<<endl;
	      }
	      break;
	
       }
       case 6:
	    {
		  if(isprint(ch))
	       {  
		     cout<<"THe character you typed is a printible character!"<<endl;
	       }
	     else
	      {
		    cout<<"THe character you typed is not a printible character!"<<endl;
		
	      }
	      break;
	
       }
       case 7:
	    {
		  if(ispunct(ch))
	       {  
		      cout<<"THe character you typed is a printible character other the digit "<<endl;
	       }
	     else
	      {
		
		   cout<<"THe character you typed isnot  a printible character other the digit "<<endl;
	      }
	      break;
	
       }
       case 8:
	    {
		  if(isdigit(ch))
	       {  
		      cout<<"THe character you typed is a digit from 0 to 9!"<<endl;
	       }
	     else
	      {
		    cout<<"THe character you typed is not a digit from 0 to 9!"<<endl;
		
	      }
	      break;
	
       }
      
   }
	
	
	
	
	
	
	
	
	
	
	
	
	
}
