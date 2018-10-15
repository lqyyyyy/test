#include <stdio.h>

void printSquare(int a)
{
    int c,d;

    if (a=1){
        printf("**\n");
        printf("**");
        }

    else if (a>1 && a%2==1){

    for (c=0;c<=a;c++) {
    printf("*");
    printf("\n");}

    for(d=2;d<=a-2;d++){
        printf("*");
        for (c=0;c<=a-2;c++)
            printf(" ");
        printf("*");
        printf("\n");
    }

    for (c=0;c<=a;c++){
    printf("*");
    printf("\n");}
    }
}

int main(void)
{
    int x;
    printf("x:");scanf("%d",&x);
    printSquare(x);
    return(0);
}
