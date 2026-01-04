#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

// ----------------------------------------------------------
// -----------------!   version one   !----------------------
// ----------------------------------------------------------


// class Solution 
// {
//     public:
//         bool containsDuplicate(vector<int>& nums)
//         {
//             if (nums.empty())
//                 return false;
//             for (int i = 0; i < nums.size(); i++)
//             {
//                 for (int j = i + 1; j < nums.size(); j++)
//                 {
//                     if (nums[i] == nums[j])
//                         return true;
//                 }
//             }
//             return false;
//         }
// };


// ----------------------------------------------------------
// -----------------!   version two   !----------------------
// ----------------------------------------------------------


class Solution 
{
    public:
        bool containsDuplicate(vector<int>& nums)
        {
            unordered_set<int> seen;

            for (int num : nums)
            {
                if (seen.count(num))
                    return true;
                seen.insert(num);
            }
            return false;
        }
};


// ------------------------------------------------------------

int main()
{
    vector<int> nums = {1,2,3,1};
    Solution sol;
    cout << "return value : " << sol.containsDuplicate(nums) << endl;
}