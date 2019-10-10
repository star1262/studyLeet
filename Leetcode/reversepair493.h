//
//  reversepair493.h
//  Leetcode
//
//  Created by 성민지 on 10/10/2019.
//  Copyright © 2019 Minji Sung. All rights reserved.
//

#ifndef reversepair493_h
#define reversepair493_h

#include <vector>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int reversePairs(vector<int>& nums) {
        return sort_and_count(nums.begin(), nums.end());
    }
private:
    int sort_and_count(vector<int>::iterator begin, vector<int>::iterator end) {
        if (end - begin <= 1) {
            for(auto i=begin; i< end; i++){
                cout << *i << endl;
            }
            return 0;
        }
        auto mid = begin + (end - begin) / 2; // iterator 
        int count = sort_and_count(begin, mid) + sort_and_count(mid, end);
        for (auto i = begin, j = mid; i != mid; ++i) {
            while (j != end && *i > 2L * *j) {  // for each i, we calculate how many nums are smaller than (*i)/2.0
                j++;
            }
            count += (j - mid);
        }
        inplace_merge(begin, mid, end);         // inplace_merge will save space
        
        for(auto i=begin; i< end; i++){
            cout << *i << " ";
        }
        cout << endl;
        return count;
    }
};

#endif /* reversepair493_h */


