#!/usr/bin/python3
"""This project isa Technical Interview question base on Makefiles"""


def island_perimeter(grid):
    """Return the perimeter of the island represented by the grid.

    0 rep water zone and 1 rep land zone.

    Arguments:
        grid(list of integers): Representing an area of land.
    """
    breath = len(grid[0])
    length = len(grid)
    sz = 0
    cell = 0

    for i in range(length):
        for b in range(breath):
            if grid[i][b] == 1:
                sz += 1
                if (b > 0 and grid[i][b - 1] == 1):
                    cell += 1
                if (i > 0 and grid[i - 1][b] == 1):
                    cell += 1
    return sz * 4 - cell * 2
