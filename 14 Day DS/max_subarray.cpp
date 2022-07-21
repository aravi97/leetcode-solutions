//
//  max_subarray.cpp
//  Leetcode Projects
//
//  Created by Aditya Ravichandran on 21/07/22.
//

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        vector<int> subarrayCalc;
        int id = 0;
        
        for(int idx : nums){
            if(id == 0){
                subarrayCalc.push_back(nums[id]);
            }
            else{
                subarrayCalc.push_back(std::max((nums[id] + subarrayCalc.back()), nums[id]));
            }
            id++;
        }
        
        return *std::max_element(subarrayCalc.begin(), subarrayCalc.end());
        
    }
};
