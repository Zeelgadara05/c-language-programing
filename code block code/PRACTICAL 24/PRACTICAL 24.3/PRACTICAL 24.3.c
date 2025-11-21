#include<stdio.h>
#include<string.h>

void main()
{
    char a[50],b[50];
    int i,j,la=0,lb=0;

    printf("enter first name:");
    scanf("%s",a);
    printf("enter second name:");
    scanf("%s",b);

    for(i=0;a[i]!='\0';i++)
    {
        la++;
    }
    for(j=0;b[j]!='\0';j++)
    {
        lb++;
    }

    if(la==lb)
    {
        for(i=0;i<='\0';i++)
        {
            if(a[i]<b[i])
            {
                printf("both are different ");
            }
            printf("both are same");
        }

    }
    else if(la>lb)
    {
        printf("first name is big %s",a);
    }
    else
    {
        printf("second name is big %s",b);
    }

}
