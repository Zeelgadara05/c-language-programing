#include<stdio.h>
void main()
{
    float distance = 0;
    int min = 0;
    while(distance <= 10)
    {
        if(distance<10)
        {
            printf("Minute %d: Distance Coverd = %.2f Km\n", min, distance);
        }
        else
        {
            printf("Minute %d: Distance Coverd = %.2f Km\n", min,distance);
            printf("The marathon is complete.");
        }
        distance += 0.5;
        min++;
    }

}
