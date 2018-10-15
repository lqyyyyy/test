#include <stdio.h>

int main(void)
{
    int n,i;
    int array[6];
    printf("n:");scanf("%d",&n);

    do{
    for (i=1;i<=6;i++){
    array[i]=n%2;
    n=n/2;
    }
    }while (n>0 && n<=32);

    for(i=6;i>=1;i--)
    printf("%d",array[i]);

    return(0);
}
