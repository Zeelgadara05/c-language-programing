#include <stdio.h>
void main()
{
    int n,i,profit,prices[n],maxprofit=0;
    int minprice=prices[0];
    printf("Enter number of days:");
    scanf("%d",&n);
    printf("Enter fruit prices for %d days:\n",n);
    for(i=0;i<n;i++)
    {
        printf("Day %d price:",i+1);
        scanf("%d",&prices[i]);
    }
    for (i=1;i<n;i++)
    {
        profit=prices[i]-minprice;
        if (profit>maxprofit)
            maxprofit=profit;
        if (prices[i]<minprice)
            minprice=prices[i];
    }
    printf("\nMaximum Profit: %d\n", maxprofit);
}
