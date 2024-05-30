#!/usr/bin/python3
"""This project isa Technical Interview question base on Makefiles"""
def island_perimeter(grid):
    """Return the perimeter of the island represented by the grid.

    0 rep water zone and 1 rep land zone.

    Arguments:
        grid(list of integers): Representing an area of land.
    """
    b = len(grid[0])
    l = len(grid)
    sz = 0
    cell = 0

    for i in range(l):
        for w in range(b):
            if grid[i][w] == 1:
                sz += 1
                if (w > 0 and grid[i][w - 1] == 1):
                    cell += 1
                if (i > 0 and grid[i - 1][w] == 1):
                    cell += 1
    return sz * 4 - cell * 2
