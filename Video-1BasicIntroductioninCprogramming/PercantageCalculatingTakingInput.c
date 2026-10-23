#include <stdio.h>
int main(){   
    float x,y,z,w,v;
    printf("enter the number:");
    scanf("%f%f%f%f%f",&x,&y,&z,&w,&v);
    printf("enter the number");
    float sum=(x+y+z+w+v);
    float percantage=sum/5;  
      printf("Percantage of five subject= %f",percantage);
    return 0;
}