#include<stdio.h>
void main()
{
    int seconds,i;
    printf("enter the no of seconds you want to countdown:");
    scanf("%d",&seconds);
    i=seconds;
    while(i>=0)
    {
        sleep(1);
        printf("\n%d\a",i);
        i--;
    }
    printf("\nCountdown completed!");
}
