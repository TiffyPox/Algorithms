#include <iostream>
#include <vector>
#include <algorithm>

int binarySearch(const std::vector<int>& vector, int item)
{
    int low = 0;
    int high = vector.size() - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        int guess = vector[mid];

        if (guess == item)
        {
            return mid;
        }

        if (guess > item)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return -1;
}

void SortVector(std::vector<int>& vector)
{
    std::sort(vector.begin(), vector.end(), [](int a, int b) -> bool
    {
        return a < b;
    });
}
void OutputVector(const std::vector<int>& vector)
{
    for(const int& a : vector)
    {
       std::cout << a; 
    }

    std::cout << std::endl;
}

int main()
{
    std::vector<int> nums = {9, 6, 3, 5, 7, 2, 1, 4, 8};

    int num = 5;

    SortVector(nums);
    OutputVector(nums);

    const int result = binarySearch(nums, num);

    if (result == -1)
    {
        std::cout << "Number not found" << std::endl;
    }
    else
    {
        std::cout << "Number " << num << " found at position " << result << std::endl;
    }

    return 0;
}