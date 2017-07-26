#include <stdio.h>

int main()
{
  void str_change_ptr(char *s, char *t);
  void str_cpy(char *s , char *t);
  char s[] = "hareesh";
  char t[] = "Aneesh";
  str_change_ptr("haeeesh", "aneesh");
  return 0;
}

void str_change_ptr(char *s, char *t)
{
  *t = *s++;
  printf("%c\n", *s);
  /* while (*s = *t){ */
  /*   *s++; */
  /*   *t++; */
  /* } */
}

void str_cpy(char *s , char *t)
{
  int i = 0 ;
  while((s[i] = t[i]) != '\0' )
    {
      i++;
    }
}
