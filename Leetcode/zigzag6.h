//
//  zigzag6.h
//  Leetcode
//
//  Created by 성민지 on 10/10/2019.
//  Copyright © 2019 Minji Sung. All rights reserved.
//

#ifndef zigzag6_h
#define zigzag6_h

class Solution {
public:
    string convert(string s, int numRows) {
        string converted;
        vector<vector<char>> zig;
        for (int i = 0; i < numRows; i++) {
            vector<char> line;
            zig.push_back(line);
        }
        
        bool forward = true;
        int j = 0;
        if (numRows == 1)
        {
            for (int i = 0; i < s.length(); i++) {
                zig[0].push_back(s[i]);
            }
        }
        else
            for (int i = 0; i < s.length(); i++) {
                if (forward) {
                    zig[j++].push_back(s[i]);
                    if (j == numRows - 1)
                        forward = false;
                }
                else {
                    zig[j--].push_back(s[i]);
                    if (j == 0)
                        forward = true;
                }
                
            }
        
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < zig[i].size(); j++) {
                converted.push_back(zig[i][j]);
            }
        }
        
        return converted;
    }
};

#endif /* zigzag6_h */
