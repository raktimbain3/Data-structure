#include <stdio.h>
int main()
{
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int ary[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter array element %d:",i+1);
        scanf("%d",&ary[i]);
    }
    printf("The array is :");
    for(int i=0; i<n; i++)
    {
        printf("%d ",ary[i]);
    }

    printf("\nThe sorted form of this array is:");

int temp,swapped=0;
    for(int i=0; i<n-1; i++)
    {
        
        for(int j=0; j<n-1-i; j++)
        {
            if(ary[j]>ary[j+1])
            {
                temp=ary[j];
                ary[j]=ary[j+1];
                ary[j+1]=temp;
            }
          swapped=1;
        }
        if(swapped==0)
        {
            break;
        }
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ",ary[i]);
    }
return 0;
}