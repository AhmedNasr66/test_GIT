#include <stdio.h>
#include <stdlib.h>
#include "zeft.h"
int main()
{
    int x,y,t;
  printf("a=");
  scanf("%d",&x);
   printf("b=");
  scanf("%d",&y);
  t=sum(&x,&y);
  printf("sum=%d\n",t);

int i=sub(&x,&y);
printf("sub=%d\n",i);
int n=mul(x,y);
printf("sub=%d\n",n);
    return 0;
}
