#include <stdio.h>

int main()
{
    int a;
    printf("�п�J�Y�褸�~>");
    scanf("%d",&a);

    if ( a%4==0 && a%100!=0 )
        printf("%d�O�|�~",a);
    else if (a%400==0)
        printf("%d�O�|�~",a);
    else
        printf("%d���O�|�~",a);

    return 0;
}
