#include<stdio.h>
void main()
{
    int s[5][10];
    int n,i,j,a,b,g;
    scanf("%d",&n);
    for(int z=1;z<=n ; z++)
    {
        printf("Enter the row and colounm of the seat %d:",z);
        scanf("%d %d",&i,&j);
        for(a=1;a<=5;a++)
        {
            for(b=1;b<=10;b++)
            {
                if(a==i && b==j)
                {
                    printf("1");
                    g=1;
                }
                else
                {
                    printf("0");
                }
            }
            printf("\n");
        }
    }

}
