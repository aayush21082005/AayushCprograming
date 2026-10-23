#include <stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
   int ld=0;
    int rev=0;
    while (n!=0){
       ld=n%10;
       rev=rev*10+ld;
         n=n/10;
    }
    printf("The digits are reverse= %d",rev);
    return 0;
}