#include <stdio.h>
int factorial(int x){
    int fact=1;
     for (int i = 2; i <=x; i++) {
        fact =fact*i;
}
return fact;
}
int combination(int n,int r){
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
return ncr;
}

int main() {
    int rows;
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows-1; j++) {
            printf("  ");
        }
        for (int k = 0; k <= i; k++) {
            int ncr=combination(i,k);
            printf("%d", ncr);
        }
        printf("\n");
    }
    return 0;
}
