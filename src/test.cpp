#include <iostream>
#include <vector>

void PrintVector(const std::vector<int>& v)
{
    for (auto i = v.begin(); i < v.end(); ++i)
    {
        if (i == v.end() - 1)
        {
            std::cout << *i << std::endl;
        }
        else
        {
            std::cout << *i << " ";
        }
    }
}

int Partition(std::vector<int>& v, int low, int high)
{
    int pivot = v[low];

    int i = low;

    for (int j = low; j < high; j++)
    {
        if (v[j] <= pivot)
        {
            std::swap(v[i], v[j]);
            i++;
        }
    }

    std::swap(v[i], v[high]);

    return i;
}

void QuickSortFunction(std::vector<int>& v, int low, int high)
{
    if (v.size() <= 2) // base case
    {
        std::cout << "Not enough numbers to sort!";
        return;
    }

    if (low < high)
    {
        int pivotIndex = Partition(v, low, high);

        QuickSortFunction(v, low, pivotIndex - 1);
        QuickSortFunction(v, pivotIndex + 1, high);
    }
}

void QuickSort(std::vector<int> &v)
{
    int length = v.size();

    QuickSortFunction(v, 0, length - 1);
}

int main()
{
    std::vector<int> nums = {10, 5, 2, 3, 22};

    PrintVector(nums);

    QuickSort(nums);

    PrintVector(nums);

    return 0;
}