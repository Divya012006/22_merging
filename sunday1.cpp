#include <stdio.h>
int main()
{
    int a1=5674;
    int a2=124;
    int a3=73;
    int a4=6;
    if(a1>a2 && a1>a3 && a1>a4)
    {
        printf("a1 is the greatest of all", a1);
    }
    else if(a2>a1 && a2>a3 && a2>a4)
    {
        printf("a2 is the greatest of all", a2);
    }
    else if(a3>a1 && a3>a2 && a3>a4)
    {
        printf("a3 is the greatest of all", a3);
    }
    else if(a4>a2 && a4>a3 && a4>a1)
    {
        printf("a4 is the greatest of all", a4);
    }
    return 0;
}

#include <stdio.h>
int main()
{
    //if the year divided by 04, the remainder is not equal to zero, then it is a common year----1
    //if the year divided by 100,the remainder is not equal to zero, then it is a leap year----2
    //1 and 2 must obey 
    //if the year divided by 400,the remainder is equal to zero,then it is a leap year 
    int year= 2026;
    if (year %4 != 0)
    {
        printf("this is a common year",year);
    }
    else if (year% 100 != 0)
    {
        printf("this is a leap year", year);
    }
    return 0;
}

//THE BELOW PROGRAM REPRESENTS HOW TO APPLY IINCREMENT VALUE TO THE NUMBERS
#include <stdio.h>
int main()
{
    int i=4;
    printf("%d\n", ++i);    // 5
    printf("%d\n", i++);    // 5
    printf("%d\n", i);      // 6
    printf("%d\n", ++i);    // 7
    printf("%d\n", i--);    // 7
    printf("--i=%d\n",--i);    // 5
    printf("--i=%d\n",--i);    // 4
    printf("++i=%d\n",++i);    // 5
    return 0;
}

