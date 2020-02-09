#include <stdio.h>

int main()
{
    int choice, price, bottles;
    printf("*** Jamal and Daughters pub \n");
    printf("***** \n");
    printf("Beer Brand"
           "\tPrice \n");
    printf("1)Tusker"
           "\t100/= \n");
    printf("2)Pilsner"
           "\t120/= \n");
    printf("3)Sminorff Ice"
           "\t1400/= \n");
    printf("4)White Cap"
           "\t90/= \n");
    printf("Enter Your Choice \n");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("How many bottles of Tusker do you want \n");
        scanf("%d", &bottles);
        price = 100 * bottles;
        printf("%d bottles of TUsker will cost \nyou Kshs %d  \n", bottles, price);
    }
    else if (choice == 2)
    {
        printf("How many bottles of Tusker do you want \n");
        scanf("%d", &bottles);
        price = 120 * bottles;
        printf("%d bottles of Pilsner will cost \nyou Kshs %d  \n", bottles, price);
    }
    else if (choice == 3)
    {
        printf("How many bottles of Tusker do you want \n");
        scanf("%d", &bottles);
        price = 140 * bottles;
        printf("%d bottles of Sminorff Ice will cost \nyou Kshs %d  \n", bottles, price);
    }
    else
    {
        printf("How many bottles of Tusker do you want \n");
        scanf("%d", &bottles);
        price = 90 * bottles;
        printf("%d bottles of White Cao will cost \nyou Kshs %d  \n", bottles, price);
    }
    return 0;
}