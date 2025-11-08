#include<stdio.h>
struct team{
    char team_name[10];
    char sport_type[10];
    struct coach{
        char coach_name[10];
        int coach_age;
        int experiance;
    }c1;
}t[5];
void main()
{
    int Team;
    for(int i=0;i<5;i++)
    {
        printf("Enter team name:");
        gets(t[i].team_name);
        printf("Enter the sport type:");
        gets(t[i].sport_type);
        printf("Enter the coach name:");
        gets(t[i].c1.coach_name);
        printf("Enter coach age:");
        scanf("%d",&t[i].c1.coach_age);
        while(getchar() != '\n');
        printf("Enter coach years of experiance:");
        scanf("%d",&t[i].c1.experiance);
        while(getchar() != '\n');
    }
    printf("Enter team number to see its details.");
    for(int i=0;i<5;i++)
    {
        printf("%d . %s\n",i,t[i].team_name);
    }
    scanf("%d",&Team);
    switch(Team)
    {
        case 1:
        printf("%s\n",t[1].team_name);
        printf("%s\n",t[1].sport_type);
        printf("%s\n",t[1].c1.coach_name);
        printf("%s\n",t[1].c1.coach_age);
        printf("%s\n",t[1].c1.experiance);
        break;

        case 2:
        printf("%s\n",t[2].team_name);
        printf("%s\n",t[2].sport_type);
        printf("%s\n",t[2].c1.coach_name);
        printf("%s\n",t[2].c1.coach_age);
        printf("%s\n",t[2].c1.experiance);
        break;

        case 3:
        printf("%s\n",t[3].team_name);
        printf("%s\n",t[3].sport_type);
        printf("%s\n",t[3].c1.coach_name);
        printf("%s\n",t[3].c1.coach_age);
        printf("%s\n",t[3].c1.experiance);
        break;

        case 4:
        printf("%s\n",t[4].team_name);
        printf("%s\n",t[4].sport_type);
        printf("%s\n",t[4].c1.coach_name);
        printf("%s\n",t[4].c1.coach_age);
        printf("%s\n",t[4].c1.experiance);
        break;

        case 5:
        printf("%s\n",t[5].team_name);
        printf("%s\n",t[5].sport_type);
        printf("%s\n",t[5].c1.coach_name);
        printf("%s\n",t[5].c1.coach_age);
        printf("%s\n",t[5].c1.experiance);
        break;
    }

}
