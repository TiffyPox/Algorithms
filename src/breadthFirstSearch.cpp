#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <map>
#include <queue>

bool personIsSeller(const std::string& name)
{
	// name ending in 'm' means mango seller.. why not?
	return !name.empty() && name.back() == 'm';
}

int main()
{
	std::cout << "Looking for a mango seller..." << std::endl;

    std::map<std::string, std::vector<std::string>> graph;
	int total = 0;

	graph["You"].push_back("Alice");
	graph["You"].push_back("Bob");
	graph["You"].push_back("Claire");
	graph["Bob"].push_back("Anuj");
	graph["Bob"].push_back("Peggy");
	graph["Alice"].push_back("Peggy");
	graph["Claire"].push_back("Thom");
	graph["Claire"].push_back("Jonny");
	graph["Anuj"] = {};
	graph["Peggy"] = {};
	graph["Thom"] = {};
	graph["Jonny"] = {};

	std::queue<std::string> searchQueue;

	std::map<std::string, bool> searched;

	searchQueue.push("You");

	while (!searchQueue.empty())
	{
		std::string person = searchQueue.front();
		searchQueue.pop();
		
		if (searched[person] == false)
		{
			total++;
			if (personIsSeller(person))
			{
				std::cout << person << " is a mango seller!" << std::endl;
				std::cout << "We had to ask a total of " << total << " neighbours" << std::endl;

				return 0;
			}
			else
			{
				for (const auto&neighbour : graph[person])
				{
					searchQueue.push(neighbour);
				}

				searched[person] = true;
			}
		}
	}

	std::cout << "No mango seller was found" << std::endl;

    return 0;
}