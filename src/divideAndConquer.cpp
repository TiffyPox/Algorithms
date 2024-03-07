#include <iostream>
#include <vector>

void addNumbers(const std::vector<int>& v)
{
    int answer = 0;

    if (v.size() == 0)
    {
        std::cout << "No numbers to add!" << std::endl; // base case
        return;
    }

	for (auto i = v.begin(); i < v.end(); ++i)
	{
		answer += *i;
	}

	std::cout << answer << std::endl;
}

int main()
{
    std::vector<int> nums = {2, 1, 2, 3, 1, 1};

    addNumbers(nums);

    return 0;
}