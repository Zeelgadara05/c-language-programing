#include <stdio.h>
void main()
{
    int n;
    printf("enter total number of participants: ");
    scanf("%d",&n);
    int sum=n*(n+1)/2;
    int attendedsum=0;
    int id,missingid;
    printf("Enter the %d attended participant IDs:\n",n-1);
    for (int i=0;i<n-1;i++)
    {
        scanf("%d", &id);
        attendedsum += id;
    }

    missingid=sum-attendedsum;
    printf("The missing participant ID is: %d\n", missingid);
}
