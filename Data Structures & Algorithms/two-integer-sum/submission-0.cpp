class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int>value;

        for (int i = 0; i<nums.size(); i++)
        {
        int difference = target - nums[i];
      
            if(value.find(difference) != value.end())
            {
                return {value[difference], i};
            }
            value[nums[i]] = i;
        }
        return{};
    }
};
