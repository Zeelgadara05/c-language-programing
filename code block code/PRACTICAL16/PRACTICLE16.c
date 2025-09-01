#include<stdio.h>
void main()
{
    int u,m=21,c;
    printf("Total number of matchsticks:%d",m);
    while(m>1)
    {
        printf("\nYour turn 1,2,3 or 4 matchstick's:");
        scanf("%d",&u);
        if(u < 1 || u > 4)
        {
            printf("Invalid choice! please try again");
        }
        else
        {
            m=m-u;
            c=5-u;
            m=m-c;
            printf("Computer picked %d\n",c);
            printf("%dMatchsticks remaining",m);
         if(m==1)
            {
                printf("\nOnly one matchsticks left!you looses,computer wins!");
                break;
            }
        }
    }
}

