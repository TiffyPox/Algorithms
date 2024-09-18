#include <iostream>
#include <cmath>

int binarySearch(int num)
{
    int answer = std::log(num) / std::log(2);

    return answer;
}

int main()
{
    int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "Here are 10 lockers..." << std::endl;

    for (int i : nums)
    
    {
        std::cout << i << " ";
    }

    int answer = binarySearch(10);

    int answer2 = binarySearch(1024);

    std::cout << "\nIf we wanted to find out which locker our key opens, we would have to check all 10 lockers" << std::endl;

    std::cout << "...in the worst case scenario!" << std::endl;

    std::cout << "Using binary search, it would only take us " << answer << " tries!" << std::endl;

    std::cout << "If we had 1024 lockers and used binary search, it would take us " << answer2 << " tries at most. Amazing!" <<std::endl;

    return 0;
}