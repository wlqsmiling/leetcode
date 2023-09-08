#include <vector>
#include <map>
#include <iostream>
#include "twosum.h"

using namespace std;

vector<int> Solution::twoSum(vector<int> &nums,int target) {
        vector<int> result;

        int count = nums.size();

        for (int i = 0; i < count; i++)
        {
            for (int j = 1; j < count; j++)
            {
                if (nums.at(i) + nums.at(j) == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    break;
                }
            }
            if(result.size() > 0) {
                break;
            }
        }
        return result;
}