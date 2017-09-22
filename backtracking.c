void backtrack(int a [], int k , data input) {
  int nCandidates,
    candidates;

  if (is_a_solution(a, k, input))
    {
      process_solution(a,k,input);
    }
  else
    {
      k = k + 1;
      process_candidates(a , k , input, candidates,  &nCandidates);

      for (int i = 0 ; i < nCandidates ; i++)
        {
          a[k] = candidates[i];
          make_move(a, k , input);
          back_track(a, k , input);
          unmake_move(a, k, input);
          if (finished) {
            return ;
          }
        }
    }
  
}


//make all subsets to a space and problem

void backtrack(int a[], int k , data input) {
  int nCandidates,
    candidates;

  if (is_a_solution( a, k , input))
    {
      process_solution(a , k, input);
    }
  else
    {
      k = k + 1 ;
      process_candidates(a, k , input, canditates,  &nCanditates);

      for (int i = 0 ; i < nCanditates ; i ++)
        {
          a[k] = c[i];
          make_move(a, k, input);
          backtrack(a, k , input);
          unmake_move(a, k, input);
          
        }
    }
      
}


//making permutation and combination
boolean is_a_solution(int a[], int k, data input)
{
  if (k == n)
    {
      return true;
    }
  else
    {
      return false;
    }
}

void process_solution(int a[], int k, data input)
{
  printf("(");
  for(int i = 0; i < n ; i++)
    {
      printf("%d,"a[i]);
    }
  prinf(")")

}

void constructing_candidates(int a[], int k, data input, int candidates[], int *nCandidates)
{
  int in_perm[nMax];
  //in_perm to contain all the candidates filled up so far
  for (int i = 0; i < nMax; i++)
    {
      in_perm[i] = false
    }

  for (int i = 0 ; i < k ; i++)
    {
      in_perm[a[i]] = true;
    }

  for (int i = 0 ; i < k ; i++)
    {
      if (in_perm[i] == false)
        {
          candidates[*nCandidates] = i ;
          *nCandidates = *nCandidates + 1;
        }
    }
}
