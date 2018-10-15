#include <stdio.h>
#include <stdlib.h>

void findPrincipalElement(int array[],int length){
    int i,min,max;
    for (i=0;i<=length;i++)
        if (i=0 && min==array[0])
            printf("%d",array[0]);
        else if (i>0 && i<length && array[i]>array[i-1] && array[i]<array[i+1])
            printf("%d",array[i]);
        else if (i=length && max==array[i])
            printf("%d",array[i]);
    }

int main()
{
    int n1,i;
    int *array;
    puts("length:");
    scanf("%d",&n1);
    array=(int*)malloc(n1*sizeof(int));
    for(i=0;i<=n1;i++)
    {
        array[i]=i+1;
        printf("%d\t",array[i]);
    }
    free(array);
    return 0;

    for (i=0;i<=n1;i++)
    printf("PrincipalElement:%d",findPrincipalElement(array[i],n1));

    return(i);
}

