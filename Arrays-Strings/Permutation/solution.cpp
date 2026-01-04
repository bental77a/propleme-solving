#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) 
    {    
        if (nums.empty())
            return {{}};
        int first = nums[0];
        vector<int> rest(nums.begin() + 1, nums.end());
        vector<vector<int>> perms = permute(rest);
        vector<vector<int>> res;
        for (const auto& p : perms) {
            for (size_t  i = 0; i <= p.size(); i++) {
                vector<int> p_copy = p;
                p_copy.insert(p_copy.begin() + i, first);
                res.push_back(p_copy);
            }
        }
        return res;
    }
    
};



int main()
{
    Solution sol;

    vector<int> nums = {1, 2, 3};

    vector<vector<int>> result = sol.permute(nums);
    for (const auto& perm : result)
    {
        cout << "[ ";
        for (int num : perm)
            cout << num << " ";
        cout << "]" << endl;
    }

    return 0;
}