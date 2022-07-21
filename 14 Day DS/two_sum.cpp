//
//  two_sum.cpp
//  Leetcode Solutions
//
//  Created by Aditya Ravichandran on 21/07/22.
//

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> hash;
        int idx = 0;
        vector<int> ans;
        
        for(int i: nums){
            
            if(hash.find(i) != hash.end()){
                ans.push_back(idx);
                ans.push_back(hash[i]);
                return ans;
            }
            else{
                hash[target-i] = idx;
            }
            ++idx;
        }
        return ans;
    }
};
