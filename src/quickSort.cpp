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

void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int Partition(std::vector<int>& v, int low, int high)
{
    int pivot = v[high];

    int i = low;

    for (int j = low; j < high; j++)
    {
        if (v[j] <= pivot)
        {
            Swap(&v[i], &v[j]);
            i++;
        }
    }

    Swap(&v[i], &v[high]);

    return i;
}

void QuickSortRecursion(std::vector<int>& v, int low, int high)
{
    if (low < high)
    {
        int pivotIndex = Partition(v, low, high);
        QuickSortRecursion(v, low, pivotIndex - 1);
        QuickSortRecursion(v, pivotIndex + 1, high);
    }
}

void QuickSort(std::vector<int> &v)
{
    int length = v.size();

    QuickSortRecursion(v, 0, length - 1);
}

int main()
{
    std::vector<int> nums = {10, 5, 2, 3, 22};

    PrintVector(nums); // Unsorted Vector

    QuickSort(nums);

    PrintVector(nums); // Sorted Vector

    return 0;
}