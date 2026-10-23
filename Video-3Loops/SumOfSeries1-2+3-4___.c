#include <stdio.h>
int main(){
    int n,sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    for (int i=0; i<=n; i++)
    {
      if(i%2==0){
        sum -=i;
    }
        else 
        sum +=i;
    }
    printf("sum of series: %d",sum);
    return 0;
}
// Second method
// #include <stdio.h>
// int main(){
//     int n,sum=0;
//     printf("enter the number:");
//     scanf("%d",&n);
//     if(n%2==0)
//     sum=-n/2;
//     else
//     sum=(-n/2)+n;
//     printf("sum of series: %d",sum);
//     return 0;
// }