#include <stdio.h>
int main(){
    int num,temp,remainder,sum=0;
    printf("Armstrong number between 1 to 500 are\n");
    for(num=1;num<=500;num++){
        sum=0;
        temp=num;
        
        while (temp!=0)
        {
          remainder=temp % 10;
          sum +=(remainder*remainder*remainder);
          temp/=10;
        }
        if(num==sum){
        printf("%d ",num);}
    }
    return 0;
}