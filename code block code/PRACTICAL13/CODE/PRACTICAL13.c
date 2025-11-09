#include<stdio.h>
void main()
{
    int volume,min;
    for(volume=10 ; volume<=100 ; volume+=10)
    {
        if(volume<100)
        {
            printf("Current water level:%d\n \a",volume);
        }
        else
        {
            printf("\aCurrent water level:%d\n",volume);
            printf("Tank is full.");
        }
    }
}
