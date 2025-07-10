#include<stdio.h>
int main()
{
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int ary[n];
    printf("Please enter elements low to high order\n");
    for( int i=0; i<n; i++ )
    {
        printf("Enter array element No.%d:",i+1);
        scanf("%d",&ary[i]);
    }

    char ch;
    printf("Wnat to search an element?(y/n): ");
    scanf(" %c",&ch);
    
    do
    {
       int v;
       printf("Enter a value for Binary searching:");
       scanf("%d",&v);
       
       int l=0,h=n-1;
       int m;
       while( l<=h )
       {
        m=(l+h)/2;
        if( v>ary[m] )
        {
            l=m+1;
        }
        else if(v==ary[m])
        {
            printf("Value found in %dth position\n",m+1);
            break;
        }
        else if(v<ary[m])
        {
            h=m-1;
        }
       }
       if(l>h)
       {
        printf("Value not found...\n");
       }

       printf("Want ro search again?(y/n): ");
       scanf(" %c",&ch);


    } while ( ch=='y' || ch=='Y' );
    printf("Existing........");
    
  return 0;
}