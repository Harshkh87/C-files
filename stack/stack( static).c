#include<stdio.h>
#include<conio.h>
#define MAXSIZE 10
int stack[MAXSIZE],top=-1;

int main()
{
    int choice;
    do
    {
        printf("\n-------------stack---------------");
        printf("\n 1.push");
        printf("\n 2.pop");
        printf("\n 3.display");
        printf("\n 4.exit");
        printf("\n------------------------------------");
        printf("\n enter your choice");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: push();break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("invalid choice");
        }
    }while(choice!=4);
    getch();
}

void push()
 {
 	int n;
 	if (top==MAXSIZE-1)
 	    printf(" stack is overflow");
 	else
	    {
	    printf("\n enter an element for push");
		scanf ("%d",&n);
	    top++;
	    stack[top]=n;
	    }    
 }
 
void display()
{
	int i;
    if(top==-1)
    printf("\n stack is empty");
    else
      {
      	printf("\n stack element is");
      	for(i=top;i>=0;i--)
      	printf("\n%d",stack[i]);	   
	  }
} 

void pop()
{
	int n;
    if (top==-1)
	   printf ("\n stack is empty");
	else
	{
	   n=stack[top];
	   top--;
	   printf("poped element is %d",n);	
    }
}
