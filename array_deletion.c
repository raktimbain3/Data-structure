#include <stdio.h>
int main()
{
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int number[n];

    for(int i=0; i<n; i++)
    {
      printf("print array No %d:",i+1);
      scanf("%d",&number[i]);
    }
    printf("The elements are :");
    for(int i=0; i<n; i++)
    {
        printf("%d ",number[i]);
    }
    printf("\n");
    int  delpos;
    printf("Enter the position of the element you want to delete:");
    scanf("%d",&delpos);

    for (int i=delpos-1; i<n; i++)
    {
       number[i]=number[i+1];
    }
    n--;
    for(int i=0; i<n; i++)
    {
        printf("%d ",number[i]);
    }

}