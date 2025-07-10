#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
void push();
void pop();
void peek();
void display();
int main()
{
int ch;
do
{
    printf("\n=====Stack=====\n");
    printf("1.Push\n2.Pop\n3.Display\n4.Peck\n5.Exit\n");
    printf("Enter Option:");
scanf("%d",&ch);

switch(ch)
{
    case 1 : push();
    break;

    case 2 : pop();
    break;

    case 3 : display();
    break;

    case 4 : peek();
    break;

    case 5 : printf("Program end....");
    return 0;

    default : printf("Invalid number");
}
} while (ch!=5);



return 0;
}
void push()
{
    int v;
    printf("Enter a number for push:");
    scanf("%d",&v);
    if (top==N-1)
    {
        printf("Overflow\n");
    }
    else
    {
        top++;
        stack[top]=v;
        printf("Pushing Successful..\n");
    }
}
void pop()
{
    int v;
    if(top==-1)
    {
        printf("Underflow");
    }
    else
    {
        v=stack[top];
        top--;
        printf("%d is being deleted\nPoping successful...",v);
    }
}

void peek()
{
    printf("Peck data is %d\n",stack[top]);
}

void display()
{
    printf("===== Stack Data =====\n");   
    for(int i=top; i>=0; i--)
    {
        printf("\t%d\n",stack[i]);
    }
}