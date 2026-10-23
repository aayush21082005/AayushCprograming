#include <stdio.h>
int main(){
    int n,a=1,b=1,sum=1;
    printf("enter the number:");
    scanf("%d",&n);
    if(n>=1)
    printf("The 1st fibonanicci is 1\n");
    if(n>=2)
    printf("The 2nd fibonanicci is 1\n");
    for (int i=3; i<=n; i++){
        sum=a+b;
        a=b;
        b=sum;
    printf("the %dth fibonanicci is %d\n",i,sum);}
    return 0;
}