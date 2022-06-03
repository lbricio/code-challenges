# code-challenges
rated problems solved from leetcode


## my latest favorite solution:
![image](https://user-images.githubusercontent.com/81334995/171769144-1a0c278f-a426-4c2a-be89-e0ee4208d8d4.png)

``` cpp
void bomberman(vector<vector<int>>& grid, int i, int j, int *area)
{
    // clear the current square and search for near ones
    grid[i][j] = 0; 
    
    // increase area for each one found
    *area += 1;

    // look to the left square if possible
    if (j > 0)
        if (grid[i][j - 1] == 1)
            bomberman(grid, i, j - 1, area);
    // right
    if (j < grid[0].size() - 1)
        if (grid[i][j + 1] == 1)
            bomberman(grid, i, j + 1, area);
    // down
    if (i > 0)
        if (grid[i - 1][j] == 1)
            bomberman(grid, i - 1, j, area);
    // up
    if (i < grid.size() - 1)
        if (grid[i + 1][j] == 1)
            bomberman(grid, i + 1, j, area);
}

class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid)
    {
        int biggest_area = 0;
        int area = 0;
        
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1)
                {
                    // when find a occuped square, call the bomberman function to count and clear                         // that square and search for nearest ones
                    bomberman(grid, i, j, &area);
                    if (area > biggest_area)
                        biggest_area = area;
                    area = 0; // reset actual area to measure the next island
                }
            }
        }
        return biggest_area;
    }
};
