#include <stdio.h>

int main()
{
    int a,b,c,big;
    printf("Enter a,b,c values");
    scanf("%d%d%d",&a,&b,&c);
    big=a>b?(a>b?a:c):b>c?b:c;
    printf("Biggest Number is:%d",big);

return 0;
}
