//
//  main.cpp
//  Leetcode
//
//  Created by 성민지 on 10/10/2019.
//  Copyright © 2019 Minji Sung. All rights reserved.
//

#include "reversepair493.h"
//reverse pair solution
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    Solution rp = Solution();
    vector<int> sample = {1, 3, 2, 3, 1};
    rp.reversePairs(sample);
    
    return 0;
}
