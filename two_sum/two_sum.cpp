class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int i = 0;
            int j = 0;
    
            for (auto i = 0; i < nums.size(); i++){
                for (auto j = 0; j < nums.size(); j++){
                    if (i == j) {
                        continue;
                    } else {
                        if ((nums.at(i) + nums.at(j)) == target) {
                            return {i, j};
                        }
                    }
                }
            }
    
            return {};
        }
    };