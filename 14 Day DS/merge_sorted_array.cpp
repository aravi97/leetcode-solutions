//
//  merge_sorted_array.cpp
//  Leetcode Solutions
//
//  Created by Aditya Ravichandran on 21/07/22.
//

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        int nums1_iter = 0;
        int nums2_iter = 0;
        
        while((nums1_iter < m) && (nums2_iter < n)){
            
            if(nums1[nums1_iter] < nums2[nums2_iter]){
                ans.push_back(nums1[nums1_iter]);
                ++nums1_iter;
            }
            else{
                ans.push_back(nums2[nums2_iter]);
                ++nums2_iter;
            }
        }
        
        while(nums1_iter < m){
            ans.push_back(nums1[nums1_iter]);
            ++nums1_iter;
        }
        
        while(nums2_iter < n){
            ans.push_back(nums2[nums2_iter]);
            ++nums2_iter;
        }
        
        nums1 = ans;
    }
};
