#include <iostream>
#include <vector>

void PrintVector(const std::vector<int> v)
{
    for (auto i = v.begin(); i != v.end(); ++i)
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

void FindMaximum(const std::vector<int>& v)
{
    int greatest = v[0];

    for (auto i = v.begin(); i < v.end(); ++i)
    {
        if (*i > greatest)
        {
            greatest = *i;
        }
    }

    std::cout << "The greatest number in this list is " << greatest << std::endl;

    return;
}

int main()
{
    // Write a program to find the maximum number in a list

    std::vector<int> numbers = {5, 17, 4, 9, 33, 21, 3};

    PrintVector(numbers);

    FindMaximum(numbers);
}