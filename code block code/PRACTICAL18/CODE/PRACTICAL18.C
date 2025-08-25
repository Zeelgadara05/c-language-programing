#include<stdio.h>
int main()
{
    int row,coloum,multiply,r,c;

    printf("Enter the number of rows:");
    scanf("%d",&row);
    printf("\nEnter the number of coloum:");
    scanf("%d",&coloum);

    for(c=1 ; c<=coloum ; c++)
    {
        for(r=1 ; r<=row ; r++)
        {
            multiply = r*c;
            printf("%2d * %2d = %2d\t",r,c,multiply);
        }
        printf("\n");
    }
    printf("The program is written by ZEEL GADARA_25TCEKY2");
    return 0;
}
