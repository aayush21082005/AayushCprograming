#include <stdio.h>

int main() {
    int a,b,temp;
    printf("enter a number:");
    scanf("%d",&a);
    printf("enter b number:");
    scanf("%d",&b);
    printf("\nbefore swapping:a=%d,b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
     printf("\nafter swapping:a=%d,b=%d\n",a,b);
    return 0;
}
