#include <stdio.h>
int display(int ary, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d",ary[i]);
    }
}
int main()
{
  int ary[100]={1,5,2,7};
  display(ary[100],4);
}