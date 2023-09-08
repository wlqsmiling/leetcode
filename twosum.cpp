#include <vector>
#include <map>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
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
};
int main()
{
    vector<int> test = {1, 2, 3, 4};
    Solution sol;
    vector<int> ret = sol.twoSum(test, 5);

    for (int item : ret)
    {
        cout << item << endl;
    }
    return 0;
}