#define size 50

char stack[size];

int top=-1;

void push(char val)
{
   if(top==size-1)
      printf("\n Stack Full!!\n");
   else
   {
     top++;
	 stack[top]=val;
   }
}

char pop()
{
  if(top==-1)
  {
    return -1;
  }
  else
  {
    return (stack[top--]);
  }
}

void peep()
{
  int val;
  if(top == -1)
    printf("\nStack Empty\n");
  else
  {
    printf("Element at the top of stack = %c",stack[top]);
  }
}

void display()
{
  int i;
  if(top==-1)
      printf("\nStack Empty\n");
  else
  {
    printf("Element in the stack are: \n");
	for(i=top;i>=0;i--)
	{
	  printf("%c\n",stack[i]);
	}
  }
}	

int is_stack_empty()
{
  if(top==-1)
     return 1;
  else
     return 0;
}   
   

