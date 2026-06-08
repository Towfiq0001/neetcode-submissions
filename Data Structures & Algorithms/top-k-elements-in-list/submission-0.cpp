class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> count;

 
        for (int num : nums) {
            count[num]++;
        }


        vector<vector<int>> bucket(nums.size() + 1);


        for (auto pair : count) {
            int num = pair.first;
            int freq = pair.second;

            bucket[freq].push_back(num);
        }

        vector<int> result;


        for (int i = bucket.size() - 1; i >= 0; i--) {

            for (int num : bucket[i]) {

                result.push_back(num);

                if (result.size() == k) {
                    return result;
                }
            }
        }

        return result;
    }
};
