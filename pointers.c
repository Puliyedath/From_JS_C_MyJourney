/*
 * This will cover my journey in the field of pointers the unary
 * operator is called the dereferncing operator and when applied to
 * pointers references the address of the object the pointer refers to
 */
#include <stdio.h>

int main()
{
  int x = 10 ;
  int y = 20 ;
  void swap(int *x, int *y);
  printf("x is %d and y is %d\n", x , y);
  swap(&x, &y);
  printf("x is %d and y is %d\n", x , y);
}

void swap(int *x, int *y)
{
  int temp;
  temp = *x;
  *x = *y ;
  *y = temp ;
}
