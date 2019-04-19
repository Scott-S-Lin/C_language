#include <stdio.h>

int main()
{
    int a;
    printf("請輸入某西元年>");
    scanf("%d",&a);

    if ( a%4==0 && a%100!=0 )
        printf("%d是閏年",a);
    else if (a%400==0)
        printf("%d是閏年",a);
    else
        printf("%d不是閏年",a);

    return 0;
}
