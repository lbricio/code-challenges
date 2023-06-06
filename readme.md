## recent solution:
![image](https://user-images.githubusercontent.com/81334995/171769144-1a0c278f-a426-4c2a-be89-e0ee4208d8d4.png)

``` cpp
// algorithm to get largest island, my solution is based on use of recursion

#define LAND_FOUND 1
#define LAND_COUNTED 0

void watcher(vector<vector<int>>& grid, int i, int j, int *area)
{
    // unmark current square
    grid[i][j] = LAND_COUNTED; 
    *area += 1;

    // look up all 4 sides and create new watchers
    if (j > 0)
        if (grid[i][j - 1] == LAND_FOUND)
            watcher(grid, i, j - 1, area);
    if (j < grid[0].size() - 1)
        if (grid[i][j + 1] == LAND_FOUND)
            watcher(grid, i, j + 1, area);
    if (i > 0)
        if (grid[i - 1][j] == LAND_FOUND)
            watcher(grid, i - 1, j, area);
    if (i < grid.size() - 1)
        if (grid[i + 1][j] == LAND_FOUND)
            watcher(grid, i + 1, j, area);
}

class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid)
    {
        int largest_area = 0;
        int area = 0;
        
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1)
                {
                    // when find a occuped square, call the watcher function to count and clear
                    // that square and search for nearest ones
                    watcher(grid, i, j, &area);
                    if (area > largest_area)
                        largest_area = area;
                    area = 0; // reset actual area count to measure the next island
                }
            }
        }
        return largest_area;
    }
};
