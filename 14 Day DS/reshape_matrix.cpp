//
//  reshape_matrix.cpp
//  Leetcode Solutions
//
//  Created by Aditya Ravichandran on 24/07/22.
//

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        vector<vector<int>> ans;
        vector<int> rowElements;
        
        int m = mat.size();
        int n = mat[0].size();
        int idx = 0;
        
        if((r*c) != (m*n)){
            return mat;
        }
        
        for(auto &i : mat){
            for(int &j : i){
                rowElements.push_back(j);
                if(rowElements.size() == c){
                    ans.push_back(rowElements);
                    rowElements.clear();
                }
            }
        }
        return ans;
    }
};
