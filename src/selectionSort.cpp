#include <iostream>
#include <vector>

int findSmallest(std::vector<int>& v)
{
    int smallest = v[0];
    int smallest_index = 0;

    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i] < smallest)
        {
            smallest = v[i];
            smallest_index = i;
        }
    }

    return smallest_index;
}

void printVector(const std::vector<int>& v)
{
    for (int i = 0; i <= v.size() - 1; ++i)
    {
        std::cout << v[i] << " ";
    }
}

std::vector<int> SelectionSort(std::vector<int>& v)
{
    std::vector<int> final;

    while(!v.empty())
    {
        int smallest = findSmallest(v);

        final.push_back(v[smallest]);
        v.erase(v.begin() + smallest);
    }

    return final;
}

int main()
{
    std::vector<int> nums = {5, 4, 3, 2, 1};

    std::cout << "Unsorted Vector: ";

    printVector(nums);

    std::cout << "\nSorted Vector: ";

    std::vector<int> sorted = SelectionSort(nums);

    printVector(sorted);

    return 0;
}