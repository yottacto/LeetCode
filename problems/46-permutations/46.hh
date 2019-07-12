#pragma once
#include <algorithm>
#include <vector>

struct Solution
{
    std::vector<std::vector<int>> permute(std::vector<int>& nums)
    {
        std::sort(nums.begin(), nums.end());
        std::vector<std::vector<int>> res;
        do {
            res.emplace_back(nums);
        } while (std::next_permutation(nums.begin(), nums.end()));
        return res;
    }
};

