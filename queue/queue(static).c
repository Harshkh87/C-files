#include<stdio.h>
#include<conio.h>
#define MAXSIZE 10
int queue[MAXSIZE],rear=-1,front=-1;

int main()
{
    int choice;
    do
    {
        printf("\n-------------queue---------------");
        printf("\n 1.insert");
        printf("\n 2.delete");
        printf("\n 3.display");
        printf("\n 4.exit");
        printf("\n------------------------------------");
        printf("\n enter your choice");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: insert();break;
            case 2: delete1(); break;
            case 3: display(); break;
            case 4: exit(0);
            default:printf("invalid choice");
        }
    }while(choice!=4);
    return 0;
}

insert()
{ 
	int n;
	if(rear==MAXSIZE-1)
	   printf("\n queue is over flow");
	else
	{
	printf("enter an element for insert");
	scanf ("%d",&n);
	rear++;
	queue[rear]=n;	
	}  
}

 delete1()
 {
 	int n;
    if (front >rear)
 	   printf ("queue is empty");
 	else
 	{
 		n= queue[front];
 		front++;
 		printf ("releted element is %d,n");
		 	 }
 }
 
  display()
 {
     int i;
     if (front==rear)
         printf ("queue is empty");
     else
     {
     	printf("queue element are");
     	for (i=front;i<=rear;i++)
     	{
		 printf ("%d",queue[i]);
		 }
	 }
 }
