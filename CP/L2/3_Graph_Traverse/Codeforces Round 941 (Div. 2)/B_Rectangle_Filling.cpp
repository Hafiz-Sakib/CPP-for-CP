#include <iostream>
#include <vector>

using namespace std; // Add this line to import the std namespace

class Solution
{
public:
    bool canMakeSquare(vector<vector<char>> &grid)
    {
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                int b = 0;
                int w = 0;
                for (int k = i; k < i + 2 && k < grid.size(); k++)
                {
                    for (int l = j; l < j + 2 && l < grid[0].size(); l++)
                    {
                        if (grid[k][l] == 'B')
                        {
                            b++;
                        }
                        else
                        {
                            w++;
                        }
                    }
                }
                if (b >= 3 || w >= 3)
                {
                    return true;
                }
            }
        }
        return false;
    }
};

int main()
{
    int t;
    cin >> t; // Input number of test cases

    while (t--)
    {
        int n, m;
        cin >> n >> m; // Input grid dimensions

        vector<vector<char>> grid(n, vector<char>(m));
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> grid[i][j]; // Input grid values
            }
        }

        Solution solution;
        bool result = solution.canMakeSquare(grid);
        if (result)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
