#include <stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d", &n);
     n=abs(n);
    int sum=0;
    int ld=0;
    while (n!=0){
        ld=n%10;
        if(ld%2==0){
        sum=sum+ld;}
        n=n/10;
    }
    printf("The sum of even digits are %d",sum);
    return 0;
}