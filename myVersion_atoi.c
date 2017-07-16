/* this is myversion of atoi that i have implemented for the assignments*/
#include <stdio.h>

int main()
{
  int myVersion_atoi(void);
  myVersion_atoi();
  return 0 ;
}

int myVersion_atoi()
{
  int c ;
  int output = 0 ; 
  while ((c = getchar()) != EOF)
    {
      if (c > '0' && c < '9')
        {
          output = output * ( 10 ) + (c - '0');
        }

        printf ("number is %d\n" , output);
    }

}
