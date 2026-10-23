#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int nsp=n-1;
    for (int i = 1; i<=n; i++){
        for(int q=1;q<=nsp;q++){  //space ka liya ek loop
            printf(" ");
        }
        nsp--;
        for (int j = 1; j<=i; j++){ //number triangle
            printf("%d",j);
        }
        int a=i-1;  //extra cheez
        for (int k=1; k<=i-1; k++)
        {
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
    }