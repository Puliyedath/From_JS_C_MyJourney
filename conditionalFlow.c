#include <stdio.h>

#define SIZE 10
#define SEARCH_VAL 27

int main()
{
  int binSearch(int a [], int search, int length);

  int a[SIZE], result;
  for (int i = 0 ; i < SIZE ; i++)
    {
      a[i] = 3 * i ;
    }

  for (int i = 0 ; i < SIZE ; i++)
    {
      printf("%d,",a[i]);
    }

  printf("\n");

  printf("searching for %d\n", SEARCH_VAL);
  result = binSearch(a, SEARCH_VAL, SIZE);
  printf("search result is %d\n" ,result);
  return 0; 
}


int binSearch(int a [], int search, int length)
{
  int low = 0 , high = length - 1   , mid ;

  if (length == 1)
    {
      return a[0] == search;
    }

  if (length == 0 )
    {
      return -1;
    }

  while (low <= high)
    {
      mid = high + low / 2 ;
      if (search < a[mid])
        {
          high = mid ; 
        }
      else if (search > a[mid])
        {
          low = mid;
        }
      else
        {
          return 1 ;
        }
    }

  return -1 ;


}
