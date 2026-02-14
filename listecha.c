#include <stdio.h>

int addition(int *a, int *b)
{
    *a = 4;
    return *a + *b;
}
int main()
{
    int a=23;
    int n=3;
    int add = addition(&a,&n);
    printf("%d\t%d\t",a,add);
    return 0;
}