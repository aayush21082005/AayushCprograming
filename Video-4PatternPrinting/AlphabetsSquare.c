#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    for (int i = 1; i<=n; i++){
        int a=1;
        for (int j = 1; j<=n; j++)
        {
            printf("%c ",a+64);
            a=a+1;
        }
        printf("\n");
    }
    return 0;
    }
//  Method second
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number :");
//     scanf("%d",&n);
//     for (int i = 1; i<=n; i++){
//         int a=65;
//         for (int j = 1; j<=n; j++)
//         {
//             printf("%c ",a);
//             a=a+1;
//         }
//         printf("\n");
//     }
//     return 0;
//     }
