//
//  running_sum.cpp
//  Leetcode Solutions
//
//  Created by Aditya Ravichandran on 23/07/22.
//

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        vector<int> runningSum;
        int curSum = 0;
        
        for(auto i : nums){
            curSum+=i;
            runningSum.push_back(curSum);
        }
        return runningSum;
    }
};
