#include <stdio.h>
#include <math.h>

int main(void)
{
    int i,no;
    int prime[500];
    int ptr=0;

    prime[ptr++]=2;
    prime[ptr++]=3;

    for (no=5;no<=10000;no+=2) {
        int flag=0;
        for (i=1;prime[i]*prime[i]<=no;i++){
            if (no%prime[i]==0){
                flag=1;
                break;
            }
        }
    if (!flag)
        prime[ptr++]=no;
}

void allPerfectNumbers(int n)
{
    double p;
    int k,l,m;
    int ptr[n];
    for (p=0;ptr[k]==p,ptr[l]==pow(2,p)-1,p<=n;p++)
    m=pow[(2,p)-1]*pow[2,(p-1)];
    printf("%d",m);
}
  int main(void)
  {
      int a;
      printf("integer a:");scanf("%d",&a);
      printf("%d",allPerfectNumbers(a));
      return(0);
  }



