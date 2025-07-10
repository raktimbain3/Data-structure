#include<stdio.h>
int main()
{   int n;
    printf("Enter array Size :");
    scanf("%d",&n);
    int number[n];
    int val,pos;
    for(int i=0; i<n; i++)
    {
        printf("Enter array element No.%d:",i+1);
        scanf("%d",&number[i]);
    }
    
    printf("Enter the position of number where will be inserted:");
    scanf("%d", &pos);
    printf("Enter the number:");
    scanf("%d", &val);
    for(int i=n-1; i>=pos-1; i--)
    {
        number[i+1]=number[i];
    }
    n++;
    number[pos-1]=val;
    for(int i=0; i<n; i++)
    {
        printf("%d ", number[i]);
    }

} 