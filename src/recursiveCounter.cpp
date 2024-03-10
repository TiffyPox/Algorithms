#include <iostream>
#include <vector>
#include <string>

int Counter(int count, const std::vector<std::string>& vec, std::vector<std::string>::iterator &iter)
{
    if (iter == vec.end())
    {
        return count;
    }
    else
    {
        return Counter(count + 1, vec, ++iter);
    }
}

void PrintVector(const std::vector<std::string>& v)
{
    for (auto i = v.begin(); i < v.end(); ++i)
    {
        std::cout << *i << " ";
    }
}

int main()
{
    // write a recursive function to count the number of items in a list

    std::vector<std::string> names = {"Tifa", "Cloud", "Aerith", "Barret"};

    std::vector<std::string>::iterator iter = names.begin();

    int count = Counter(0, names, iter);

    std::cout << "Number of items in list: " << count << std::endl;

    PrintVector(names);

    return 0;
}