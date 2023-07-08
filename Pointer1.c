#include<stdio.h>
int main()
{
    int No = 11; 
    int * iptr = &No;

    char ch = 'A';
    char * cptr = &ch;

    double d = 89.89;
    double * dptr = &d;

    printf("%d",No);
    printf("%d",ch);
    printf("%d",d);

    printf("%d",&No);
    printf("%d",&ch);
    printf("%d",&d);

    printf("%d"&iptr);
    printf("%d",&cptr);
    printf("%d",&dptr);

    printf("%d",*iptr);
    printf("%d",*cptr);
    printf("%d",*dptr);

    return 0;
}