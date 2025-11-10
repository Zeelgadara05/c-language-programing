#include <stdio.h>
void main()
{
    int numbers[25];
    int i,positivecount=0,negativecount=0,evencount=0,oddcount=0;
    printf("Enter 25 integers:\n");
    for (i=0;i<25;i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d",&numbers[i]);
    }
    for (i = 0; i < 25; i++)
    {
        if (numbers[i]>0)
            positivecount++;
        else if (numbers[i]<0)
            negativecount++;
        if (numbers[i]%2==0)
            evencount++;
        else
            oddcount++;
    }
    printf("Total Positive Numbers: %d\n", positivecount);
    printf("Total Negative Numbers: %d\n", negativecount);
    printf("Total Even Numbers: %d\n", evencount);
    printf("Total Odd Numbers: %d\n", oddcount);
}
