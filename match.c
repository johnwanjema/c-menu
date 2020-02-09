#include <stdio.h>

int main()
{
    int a, b,c;
    char option;
    printf("input value of a \n");
    scanf("%d", &a);
    printf("input value of b \n");
    scanf("%d", &b);
    printf("input your option \n");
    scanf(" %c", &option);
    if (option == '+')
    {
        c  = a + b;
        printf("%d + %d = %d  \n", a,b,c);
    }
    else if (option == '-')
    {
        c  = a - b;
        printf("%d - %d = %d  \n", a,b,c);
    }
    else if (option == '*')
    {
        c  = a * b;
        printf("%d * %d = %d  \n", a,b,c);
    }
    else if (option  == '/')
    {
        c  = a / b;
        printf("%d / %d = %d  \n", a,b,c);
    }else if(option == '%'){
        c  = a % b;
        printf("%d  %d = %d  \n", a,b,c);
    }else{
        printf("Wrong operator");
    }

    return 0;
}