#define EOF '\0'

#define MAX_VERTICES 1000
#define MAX_INT 1000

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int y;
  struct edgeNode *next;
} edgeNode;

typedef struct {
  char directed;
  int size;
  int nEdges;
  struct edgeNode *edges[MAX_VERTICES];
} graph;

void readLine(int output[])
{
  int isDigit(char c);
  char c ;
  int i = 0;
  while((c == getchar()) != '\n' )
    {
      if (isDigit(c))
        {
          output[i++] = c;
        }
    }

}

int isDigit(char c)
{
  int i = c - '0';
  if (i > 0 & i < MAX_INT) {
    return 1;
  }

  return 0;
}

void init_graph(graph *g)
{
  g = malloc(sizeof (graph));//test
}

void reset_array(int output[])
{
  output[0] = -1 ;
  output[1] = -1 ;
}

void createEdge(graph g, int x , int y)
{
  edgeNode p;
  p = malloc(sizeof (edgeNode));
}
            


int main()
{
  char c ;
  graph g;
  int i = 0 ;
  int output[] = { -1, -1 };

  void readLine(int output[]);
  void reset_array(int output[]);
  void createEdge(graph g, int x , int y);
  
  init_graph(&g);
  while((c == getchar()) != EOF )
    {
      readLine(output);
      createEdge(g, output[0] , output[1]);
      reset_array(output);
    }

  return 0 ;
}
