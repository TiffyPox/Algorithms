#include <iostream>
#include <vector>

int addNumbers(std::vector<int> &v)
{
    int total = 0;

    for (int i = 0; i <= v.size(); ++i)
    {
        int next = v[i] + 1;

        if (i == next)
        {
            total = v.size(); // base case
        }
    }

    std::cout << "Total is " << total;

    return 0;
}

int main()
{
    std::vector<int> nums = {1, 1, 1, 1, 1, 1};

    addNumbers(nums);

    return 0;
}