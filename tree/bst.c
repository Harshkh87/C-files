#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *ladd;
    struct node *radd;
};
struct node *root=NULL, *new1;

int main()
{
    int choice;
    char ch;
    do
    {
        printf("\n------------BINARY SEZRCH TREE---------------");
        printf("\n 1.create");
        printf("\n 2.inorder");
        printf("\n 3.preorder");
        printf("\n 4.postorder");
        printf("\n 5.exit");
        printf("\n------------------------------------");
        printf("\n enter your choice");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            {
                    do
                        {
                            int n;
                            printf("enter an element");
                            scanf("%d",&n);

                            new1=(struct node *)malloc(sizeof(struct node));

                            new1->ladd=new1->radd=NULL;
                            new1->data=n;

                            if(root==NULL)
                               root=new1;
                            else
                               create(root,new1);

                            printf("want to continue\n");
                            ch=getche();
                        }while(ch=='y'||ch=='Y');
            };break;

            case 2: inorder(root); break;
            case 3: exit(0);
            default: printf("invalid choice");
        }
    }while(choice!=3);
    return 0;
}

create(struct node *r,struct node new1)
{
    if(new1->data < r->data)
    {
        if(r->ladd==NULL)
            r->ladd=new1;
        else
            create1(r->ladd,new1);
    }
    if(new1->data>r->data)
    {
        if(r->radd==NULL)
            r->radd=new1;
        else
            create1(r->radd,new1);
    }
    if(new1->data==r->data)
        printf("duplicate element is not allowed");
}

inorder(struct node *p)
{
    if(p!=NULL)
    {
        inorder(p->ladd);
        printf("%d",p->data);
        inorder(p->radd);
    }
}
