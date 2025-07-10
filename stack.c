#include<stdio.h>
#define n 5;
int stack[n];
int top=-1;
void push();
void pop();
void peek();
void display();
int main()
{
int ch;
printf("Enter  number(push-1, pop-2, display-3, peck-4, program end-5)");
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

return 0;
}
void push()
{
    int v;
    printf("Enter a number for push:");
    scanf("%d",&v);
    if (top==n-1)
    {
        printf("Overflow\n"),
    }
    else
    {
        top++;
        stack[top]=x;
    }
}
void pop()
{
    int v;
    printf("Enter a number for pop:");
    scanf("%d",&v);
    if(top==-1)
    {
        printf("Underflow");
    }
    else
    {
        item=stack[top];
        top--;
        printf("%d is being deleted\n".item);
    }
}

void peek()
{
    printf("%d",stack[top]);
}

void display()
{
    for(int i=top; i>=0, i--)
    {
        printf("%d\n",stack[i]);
    }
}