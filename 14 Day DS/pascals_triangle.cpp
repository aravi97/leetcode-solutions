//
//  pascals_triangle.cpp
//  Leetcode Solutions
//
//  Created by Aditya Ravichandran on 24/07/22.
//

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    
        vector<vector<int>> pascalsTriangle;
        
        for(int j=0; j<numRows; j++){
            vector<int> rowElement;
            for(int i=0; i<=j; i++){
                if(i == 0 || i == j){
                    rowElement.push_back(1);
                }
                else
                    rowElement.push_back(-1);
            }
            pascalsTriangle.push_back(rowElement);
        }
        
        for(int i=0; (i < pascalsTriangle.size()); i++){
            for(int j=0; (j < pascalsTriangle[i].size()); j++){
                if(pascalsTriangle[i][j] == -1){
                    pascalsTriangle[i][j] = pascalsTriangle[i-1][j-1] + pascalsTriangle[i-1][j];
                }
            }
        }
        
        return pascalsTriangle;
    }
};
