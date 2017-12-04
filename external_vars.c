#include <stdio.h>

char c[] = "hareesh";
int print_name();
int outside_print();
int main()
{
  printf("the name is %s", c);
  print_name();
  outside_print();
}

int print_name()
{
  extern char c[];
  printf("inside print name - the name is %s \n", c);
}

int outside_print()
{
  printf("inside outside print - the name is %s \n", c);
}
