// understanding pointers in c

#include <stdio.h>
#include <stdint.h>

int main()
{
  const int limit = 500; 
  const int *pci ;
  int test = 20;

  pci  = &limit ;

  pci = &test;
  



  char *brothers[] = {"hareesh", "aneesh", "ajeesh"};
  char **firstBrother[] = { &brothers[1], &brothers[2] };
  printf("first brother is %s\n", *firstBrother[0]);

  return 0 ;
}
