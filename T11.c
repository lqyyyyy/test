#include <stdio.h>
#include <string.h>

#define NUMBER    4

void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swaps(char sx[],char sy[])
{
    char temp[256];

    strcpy(temp,sx);
    strcpy(sx,sy);
    strcpy(sy,temp);
}

void sort(int number[],int data[],char name[][20],int n)
{
    int k=n-1;
    while (k>=0){
        int i,j;
        for (i=1;i<=k;i++)
        if (data[i-1]>data[i]){
            j=i-1;
            swap(&number[i],&number[j]);
            swaps(name[i],name[j]);
            swap(&data[i],&data[j]);
        }
        k=j;
    }
}

int main(void)
{
    int i;
    int grade[]={100,90,80,90};
    char name[][20]={"a","b","c","d"};
    int number[]={1,2,3,15};

    sort(grade,name,NUMBER);

    for(i=0;i<NUMBER;i++)
        printf("%2d:%-8s%4d/n",number[i],name[i],grade[i]);
    return(0);
}
