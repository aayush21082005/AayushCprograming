#include <stdio.h>
int main()
{
    int n;
    printf("enter the number:\n");
    scanf("%d", &n);
    if (n < 0){
     n=n*(-1);
    printf("the absolute value:=%d",n);}
    else {
    printf("the absolute value:=%d",n); 
    }
    return 0;
}