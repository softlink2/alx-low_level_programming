#include <stdlib.h>

void
free_grid(int **grid, int height)
{
  int c;
  
  for (c = 0; c < height; c++)
  {
    if (grid[c] != NULL) {
      free(grid[c]);
      grid[c] = NULL;
    }
  }
  
  free(grid);
  grid = NULL;
  
  return;
}
