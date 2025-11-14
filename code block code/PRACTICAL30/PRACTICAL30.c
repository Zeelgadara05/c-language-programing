#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n,j;
    float *p,*q,*t;
    printf("enter number of items:");
    scanf("%d",&n);
    p=(float*)calloc(n,sizeof(float));
    t=p;
    for(i=1;i<=n;i++,p++)
    {
        printf("Enter the price of %d item:",i);
        scanf("%f",p);
    }
    p=t;
    for(i=1;i<n-1;i++,p++)
    {
        for(j=1,q=p+1;j<n;j++,q++)
        {
            //printf("%f - %f \n",*p,*q);
            if(*p > *q)
            {
                *p = *p + *q;
                *q = *p - *q;
                *p = *p - *q;
            }
        }
    }
    for(i=1;i<=n;i++,t++)
    {
        printf("%f\n",*t);
    }

}
