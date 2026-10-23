#include <stdio.h>
int main(){   
    float a,b;
    printf("enter the number a and b\n");
    scanf("%f %f",&a,&b);
    int q=a/b;
    float r=a-(b*q);
printf(" reaminder:=%f",r);
    return 0;
}