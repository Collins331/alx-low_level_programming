#!/usr/bin/python3
"""measures parameter of island"""


def island_perimeter(grid):
    """
    a function that determines the parameter of as
    island represented as square grid(1 length)
    The island can be one or none, and is not occupied by water bodies such
    as lakes, rivers etc
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
