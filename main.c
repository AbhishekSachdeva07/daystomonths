//wap to convert total no of days into mthns days

#include <stdio.h>
int main()
{
    int a;
    printf("Tell no. of days\n");
    scanf("%d",&a);
    printf("%d months %d days",a/30,a%30);
}