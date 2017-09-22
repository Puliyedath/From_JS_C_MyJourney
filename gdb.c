#include <stdio.h>

int main()
{
  int i ;
  char *s;

  i = 0 ;
  printf("hello, world\n");
  printf("hello2, world\n");
  printf("hello3, world\n");
  printf("hello4, world\n");

  s = "hello, world using a pointer";
  
  while( s[i] != '\0')
    {
      printf("%c" ,s[i++]);
    }

  printf("\n");
  return 0;
}
