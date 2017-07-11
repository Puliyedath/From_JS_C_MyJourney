#include <stdio.h>


int main()
{
  //reading characters and counting their number
  char c ;
  long counter;
  counter = 1 ;
  while ((c = getchar()) != EOF)
    {
      //if (c != '\n')
      //{
      printf("inside the loop%c \n",c);
      //putchar(c);
          //}
    }

  return 0;
}
