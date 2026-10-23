#include <stdio.h>
int main()
{
    int l,b;
    printf("enter the length:\n");
    scanf("%d", &l);
    printf("enter the breath:\n");
    scanf("%d", &b);
    int area=l*b;
    int perimeter=2*(l+b);
    if (area>perimeter){
         printf("Area is greater than parameter");
     }
    else if (perimeter>area){
         printf("perimeter is greater than area");
     }
    else{
        printf("area and perimeter are equal");
    }
    return 0;
}
