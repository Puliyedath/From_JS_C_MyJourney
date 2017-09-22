#include <stdio.h>
void swap(int *a, int *b);

int main()
{
  int a = 10 ;
  int b = 20 ;

  printf("a is %d \n", a);
  printf("b is %d \n", b);

  swap(&a , &b);

  printf("a is %d \n", a);
  printf("b is %d \n", b);
  
  return 0;
}

void swap(int *x, int *y)
{
  int temp ;
  //print the address of x and y
  printf("x is %p \n" , x);
  printf("y is %p \n" , y);
  printf("temp is %p \n" , &temp);

  temp = *x ;
  *x = *y ;
  *y = temp;
}
