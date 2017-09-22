#include <stdio.h>
#include <stdlib.h>

int main()
{
  int str_len(char *s);
  //malloc returns a pointer to the memory location in heading
  int *pi = (int *)malloc(sizeof (int));
  printf("the length of the string is %d \n", str_len("hareesh"));
  return 0;
}

int str_len(char *s)
{
  int i = 0 ;
  //calculates the length of the string
  while(s[++i] != '\0' )
    {

    }

  return i ;
}
