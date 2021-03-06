#include <vector>

struct Solution
{
    std::vector<std::vector<int>> table{
        {1,},
        {2, 1,},
        {3, 3, 1,},
        {4, 2, 4, 1,},
        {5, 4, 4, 5, 1,},
        {6, 3, 2, 3, 5, 1,},
        {7, 5, 5, 5, 5, 5, 1,},
        {8, 4, 5, 2, 5, 4, 7, 1,},
        {9, 6, 3, 6, 6, 3, 6, 7, 1,},
        {10, 5, 6, 4, 2, 4, 6, 5, 6, 1,},
        {11, 7, 6, 6, 6, 6, 6, 6, 7, 6, 1,},
        {12, 6, 4, 3, 6, 2, 6, 3, 4, 5, 7, 1,},
        {13, 8, 7, 7, 6, 6, 6, 6, 7, 7, 6, 7, 1,},
        {14, 7, 7, 5, 7, 5, 2, 5, 7, 5, 7, 5, 7, 1,},
        {15, 9, 5, 7, 3, 4, 8, 8, 4, 3, 7, 5, 8, 7, 1,},
    };

    int tilingRectangle(int n, int m)
    {
        if (n < m)
            return tilingRectangle(m, n);
        return table[n - 1][m - 1];
    }
};

