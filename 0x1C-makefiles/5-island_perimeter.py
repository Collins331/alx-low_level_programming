#!/usr/bin/python3
"""measures parameter of island"""


def island_perimeter(grid):
    """
    a function that determines the parameter of as
    island represented as square grid(1 length)
    The island can be one or none, and is not occupied by water bodies such
    as lakes, rivers etc
    """
    param = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if grid[i][j-1] == 0:
                    param += 1
                if grid[i][j+1] == 0:
                    param += 1
                if grid[i-1][j] == 0:
                    param += 1
                if grid[i+1][j] == 0:
                    param += 1
    return param