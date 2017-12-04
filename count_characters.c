#include <stdio.h>

//counting the characters in a stream
int main()
{
  int ws = 0;
  int c;

  while((c = getchar()) != EOF)
    {
      if (c == 'w') {
        ws++;
      }
    }

  printf("the number of ws in the string is %d \n", ws);
}
