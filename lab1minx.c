#include<stdio.h>

int main() {
  int num1;
  int num2;
  scanf("%d", &num1);
  scanf("%d", &num2);
  if (num1 > num2) {
  printf("%d greater than %d by %d ",num1,num2,num1-num2);
  } else {
  printf("%d greater than %d by %d",num2,num1,num2-num1);
  }
  return 0;
}
