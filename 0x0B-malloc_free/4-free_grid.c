#include "main.h"

/**
* free_grid - frees 2 dimensional grid previousely created
* @grid: grid og memories
* @height: int
* Return: void
*/

void free_grid(int **grid, int height)
{
int i = 0;
for (; i < height; i++)
free(grid[i]);
free(grid);
}
