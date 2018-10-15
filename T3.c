#include <stdio.h>
#include <stdlib.h>

void reverse(int a[],int n)
{
    int i;
    for (i=0;i<=n/2;i++){
    do{
        a[i]=a[i]+a[n-i];
        a[n-i]=a[i]-a[n-i];
        a[i]=a[i]-a[n-i];

        printf("%d",a[i]);

        }while (n>0 && a[i]!=a[n-i]);
    }
}
 int main(void)
 {
     int n1,j;
     int *array;

     puts("the array:");scanf("%d",&n1);

     array=(int*)malloc(n1*sizeof(int));

     for(j=0;j<n1;j++)
     {
     array[j]=j+1;
     printf("%d\t",array[j]);
     }
     free(array);
     return (0);

     reverse(array[n1],n1);
     printf("%d",array[n1]);
     return(0);
 }


