#include <stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int sum=0;
    int ld=0;
    int rev=0;
    int original_number=n;
    while (n!=0){
       ld=n%10;
       sum =sum+ld;
       rev=rev*10+ld;
       n=n/10;
    }
    printf("original number=%d \nreverse = %d \nsum =%d",original_number,rev,sum);
    return 0;
}