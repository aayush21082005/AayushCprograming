#include <stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<n-1;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(n==1){
      printf("it is nor prime or nor composite");}
      else if(a==1){
    printf("it is composite");
      }
      else{
        printf("number is prime");
      }
    return 0;
}