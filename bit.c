#include <stdio.h>
int main()
{
    int a,b,c;
    a=7>5 && 4<1;
    b=7>5 || 4<1;
    c=!(5<6);
    printf("a=%d\nb=%d\nc=%d",a,b,c);
    return 0;
}