#!/usr/bin/python3
"""function def island_perimeter(grid)"""


def island_perimeter(grid):
    """
    a function def island_perimeter(grid):
    that returns the perimeter of the island described in grid
    """
    edges = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            cell = grid[i][j]
            if cell == 1:
                if i == 0 or (grid[i - 1][j] == 0):
                    edges += 1
                if j == 0 or (grid[i][j - 1] == 0):
                    edges += 1
                if i == (len(grid) - 1) or (grid[i + 1][j] == 0):
                    edges += 1
                if j == (len(grid[i]) - 1) or (grid[i][j + 1] == 0):
                    edges += 1
    return (edges)
