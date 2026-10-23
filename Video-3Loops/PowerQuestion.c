#include <stdio.h>
int main(){
    int a,result=1;
    printf("enter the base number:");
    scanf("%d",&a);
    int b;
    printf("enter the power number:");
    scanf("%d",&b);
    for (int i=1; i<=b; i++){
        result=result*a;}
    printf("%d rasied to the power %d is %d",a,b,result);
    return 0;
}