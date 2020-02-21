#!/usr/bin/python3
def island_perimeter(grid):
    p = 0
    l = len(grid) - 1
    for i in (0, l):
        for j in (0, len(grid[i]) - 1):
            if grid[i][j] == 1:
                if i != 0 and grid[i][j - 1] == 0:
                    p += 1
                if grid[i + 1][j] == 0:
                    p += 1
                if i != 0 and grid[i - 1][j] == 0:
                    p += 1
                if grid[i + 1][j] == 0:
                    p += 1
    return p
