//
//  find_duplicate.cpp
//  Leetcode Projects
//
//  Created by Aditya Ravichandran on 21/07/22.
//

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> hash_map;
        
        for(int i : nums){
            if(hash_map.find(i) == hash_map.end())
                hash_map.insert(i);
            else
                return true;
        }
        return false;
    }
};
