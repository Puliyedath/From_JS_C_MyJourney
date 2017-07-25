#include <stdio.h>

int main()
{
  void str_change_ptr(char *s, char *t);
  void str_cpy(char *s , char *t);
  char s[] = "hareesh";
  char t[] = "Aneesh";
  //str_cpy(s , t);
  str_change_ptr(s, t);
  printf("%s-%s\n", s,t);
  return 0;
}

void str_change_ptr(char *s, char *t)
{
  while (*s = *t){
    *s++;
    *t++;
  }
}

void str_cpy(char *s , char *t)
{
  int i = 0 ;
  while((s[i] = t[i]) != '\0' )
    {
      i++;
    }
}
