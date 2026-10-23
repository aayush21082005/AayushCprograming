#include <stdio.h>
int main(){   
    float rate,simpleinterest,time,principal;
    printf("enter the principal:\n");
    scanf("%f",&principal);
    printf("enter the rate:\n");
    scanf("%f",&rate);
    printf("enter the time:\n");
    scanf("%f",&time);
    simpleinterest=(principal*rate*time)/100;
      printf("simple interest= %f",simpleinterest);
    return 0;
}