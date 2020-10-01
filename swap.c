#include<stdio.h>

int main(void){
  int a = 5, b = 6;
  printf("%d %d",a,b);
  printf("after swapping");
  int temp = a;
  a = b;
  b = temp;
  printf("%d %d",a,b);
  return 0;
}
  
