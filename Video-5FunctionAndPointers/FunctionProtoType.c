#include<stdio.h>
int main(){
    void fun();      //It is run . because it issue to resolve prototype.
    fun();
  return 0;  
}
void fun(){
    printf("hello");
}