#include <stdio.h>

#define EOS '\0'

int main()
{
  int str_len_pointer(char *s);
  char s[] = "hari";
  printf("%d",str_len_pointer(s));
  return 0;
}

int str_len(char s[])
{
  int i = 0 ;
  while ( s[i] != EOS )
    {
      i++;
    }

  return i ;
}

int str_len_pointer(char *s)
{
  char *p = s ;
  while(*p != EOS)
    {
      p++;
    }

  return p - s;
}
