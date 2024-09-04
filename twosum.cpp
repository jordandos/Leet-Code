#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();//assigns variable n
        for (int i = 0; i < n - 1; i++) 
        {//loops through n
            for (int j = i + 1; j < n; j++) 
            {//reverse loop
                if (nums[i] + nums[j] == target) 
                {//if both numbers equal the target
                    return {i, j};
                }
            }
        }
        return {}; // No solution found
    }
};