#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocate a grid of integers
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: a two dimensional grid
 */

int **
alloc_grid(int width, int height)
{
  int **grid;
  int c, d;

  if (width <= 0 || height <= 0)
    return (NULL);
  grid = malloc(sizeof(int *) * height);
  if (grid == NULL)
    return (NULL);
  for (c = 0; c < height; c++)
  {
    grid[c] = malloc(sizeof(int) * width);
    if (grid[c] == NULL)
    {
      for (d = 0; d < c; d++)
      {
        free(grid[d]);
        grid[d] = NULL;
      }
      free(grid);
      grid = NULL;
    }
  }
  
  return (grid);
}
