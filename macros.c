#include <stdio.h>

#define print_Test(name) printf(#name " is %s\n", name)
#define paste(name, end) name ## end

int main()
{
  print_Test("hareesh");
  paste(name, end);

  return 0; 
}
