#include <gtest/gtest.h>
#include "../twosum.h"

TEST(test, twosum)
{
    vector<int> test = {1, 2, 3, 4};
    Solution sol;
    vector<int> ret = sol.twoSum(test, 5);

    for (int item : ret)
    {
        cout << item << endl;
    }
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}