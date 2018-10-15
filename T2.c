#include <stdio.h>

int sum(int x,int y)
{
    int sum=0;
    for(x=1;x<=y;x++)
        (x%2>0?sum+=x:sum);
    return(sum);
}
int main(void)
{
    int a,b;
    a=1;
    b=100;

    printf("sum=%d",sum(a,b));

    return(0);
}
