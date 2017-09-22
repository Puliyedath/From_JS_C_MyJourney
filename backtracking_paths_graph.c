/*function to calculate all paths from s to t in a graph three three
  functios to override in backtrackign algorithms
  1. is a solution
  2. process solution
  3. backtrack
  these are the main functions and we can override the rest the way we want
 */
int solution_count = 0 ;

boolean is_a_solution(int a[], int k , data input)
{
  if (a[k] == t)
    {
      return true;
    }
  else
    {
      return false;
    }
}

void process_solution(int a[], int k , data input)
{
  solution_count++;
}

construct_candidates(int a[], int k , int c[], int *nCandidates)
{
  int in_sol[nMax]; //contains all the nodes already included in the path
  EdgeNode *p;
  int y ;

  for (int i = 0 ; i < nMax ; i++)
    {
      in_sol[i] = false;
    }

   for (int j = 0 ; j < nMax ; j++)
    {
      in_sol[a[j]] = true;
    }

  if (k == 0)
    {
      nCandidates = 1;
      c[0] = 1 ;
    }
  else
    {
      last = a[k-1];
      p = g->edges[last];

      //go through all the nodes that are connected to p
      while(p != null)
        {
          
          y = p.y ;
          if (in_sol[y] == false)
            {
              c[*nCandidates++] = y ;
            }

          p = p -> next;
        }
    }
}



