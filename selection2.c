#include<stdio.h>
int main()
{
    int std = 0;

    printf("Enter your standared :\n");
    scanf("%d", &std);

    switch (std)
    {
        case 1:
        printf("Your exam is at 1 pm\n");
        break;

        case 2: 
        printf("Your exam is at 2pm\n");
        break;

        case 3:
        printf("Your exam is at 3pm\n");
        break;

        case 4:
        printf("Your exam is at 4 pm\n");
        default: 
        printf("Invalid standard\n");
        
    }
    return 0;
}
