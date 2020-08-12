#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "charstack.h"

int main()
{
    int choice; char val;
	char exp[50];
	int i=0;
/*	  gets(exp);  */
	printf("\nEnter the algebric expression: \n");
    gets(exp);
	printf("\nExpression=%s\t",exp);
	while(exp[i]!='\0')
	{
	  if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
	  {
         push(exp[i]);
      }
	  if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
	  { 
	     val=pop();
		 if(exp[i]==')' && val!='(' )
		 {
		    printf("\nNot well formed!!");
			exit(0);
		 }
		 if(exp[i]==']' && val!='[' )
		 {
		    printf("\nNot well formed!!");
			exit(0);
		 }
		 if(exp[i]=='}' && val!='{' )
		 {
		    printf("\nNot well formed!!");
			exit(0);
		 }
	  }
	  i++;
	}
	if(! is_stack_empty())
	  printf("\nNot well formed!!");
	else
	  printf("\nWell formed!!");
}

