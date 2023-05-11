#include <stdio.h>
#include <stdlib.h>

int todo();
char act[100][100];

int main()
{
 printf("Welcome, we are here to assist you in the creation of your To-do list.\n");
 printf("What do you want to add to your to-do list?\n");
 printf("Please type in the maximum number of activities you would be having today.\n");
 todo();


    return 0;
}

todo()
{
    int numberofactivities;
    scanf("%d", &numberofactivities);
// takes in the number of activities the user would be having in the day.

    int i = 1;
    while (i <= numberofactivities)
        {
    printf("\nWould you like to add an activity?.\n Please choose 1 for yes and 2 for no.\n 1.YES\n 2.NO\n");

    int choice;
    scanf("%d", &choice);
    if (choice == 1)
    {
            printf("Please enter your next activity.\n");
            scanf(" %99[^\n]",&act[i]);

            printf("\n%d. The number %d activity on your list is %s\n", i, i, act[i]);
        }

        else if (choice == 2)
        {
            printf("Congrats in making your To-Do list\n");
            break;
        }

        else
        {
            printf("You have not followed the instruction.\n");
            continue;
        }
        i++;
}
        printf("\nThese are the list of all your activities.\n");
int t = 1;
for (t=1; t<i; t++)
{
    printf("\n%d. %s\n", t , act[t]);
}
return 0;
}
