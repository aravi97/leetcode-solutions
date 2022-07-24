//
//  array_intersection_2.cpp
//  Leetcode Solutions
//
//  Created by Aditya Ravichandran on 23/07/22.
//

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> resultant;
        unordered_map<int, int> freq_map;
        
        for(int i: nums1){
            freq_map[i]++;
        }
        for(int i: nums2){
            if(freq_map[i] > 0){
                freq_map[i]--;
                resultant.push_back(i);
            }
        }
        return resultant;
    }
};
