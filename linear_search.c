#include<stdio.h>
int main()
{
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int ary[n];
    
    for( int i=0; i<n; i++ )
    {
        printf("Enter array element No.%d :",i+1);
        scanf("%d",&ary[i]);
    }
    char ch;
    printf("Want to search a value?(y/n):");
    scanf(" %c",&ch);
 do
 {
    int v;
    int search=0;
    printf("Enter a number for linear searching:");
    scanf("%d",&v);

    for( int i=0; i<n; i++ )
    {
        if(v==ary[i])
        {
            printf("value found in %dth position\n",i+1);
            search=1;
            
        }
    }

    if(search==0)
    {
        printf("Value not found\n");
    }

    printf("Want to search again?(y/n:)");
    scanf(" %c",&ch);
 } while ( ch=='y' || ch=='Y' );
 
    

    return 0;
}