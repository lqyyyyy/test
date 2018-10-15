#include <stdio.h>

int main(void)
{
    int m,n,i,ln,j,k,h,x,y;
    printf("number:");scanf("%d",&m);

    for (n=1;n>0;n++){
    if (m!=2*n*n-1)
        puts("error");
    else
        for (i=1;i<=ln/2;i++){
        for (j=0;j<=ln-i;j++)
            printf(" ");
        for (k=0;k<=ln-1;k++)
            printf("*");
            printf("\n");
         }

    for (i=1;i<=ln/2;i++){
        for (x=1;x<=ln/2-i;x++)
            printf(" ");
        for (y=1;y<=2*i-1;y++)
            printf("*");
            printf("\n");
         }

    }








}
