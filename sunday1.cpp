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


