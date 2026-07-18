#include <stdio.h>
int main()
{
    int a,b,c;
    a=7>5 && 4<1;
    b=7>5 || 4<1;
    c=!(5<6);
    printf("a=%d \n b=%d \n c=%d");
    return 0;
}